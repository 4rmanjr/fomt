#!/bin/bash
#
# Padankan alignment tiap section `ax` hasil agbcc dengan alamat aslinya.
#
# ROM FOTM menaruh sebagian fungsi di alamat 2-mod-4 (mis. 0x080D1186,
# 0x080D116A) — di asm aslinya itu ditandai `non_word_aligned_thumb_func_start`
# yang TIDAK menulis `.align` sama sekali (asm/macro.inc:42). Kalau section
# seperti itu dipaksa sejajar-4, linker menyisipkan 2 byte dan seluruh simbol
# sesudahnya bergeser (`func_080D1186` mendarat di 0x080d1188).
#
# Alamat diambil dari nama section (`.text.<modul>.<HEX8>`):
#   2-mod-4 -> `.align 1, 0` (2 byte)   selain itu (dan non-alamat) -> `.align 2, 0`
# Penyesuaian dilakukan dua kali karena alignment section = alignment maksimum
# dari seluruh `.align` di dalamnya:
#   1) `.align` yang ditulis agbcc tepat setelah `.section` (awal fungsi), dan
#   2) padding ekor yang ditambahkan skrip ini di akhir berkas.
#
# Pemakaian: align_sections.sh <berkas.s>   (diubah di tempat)

awk '
function al_of(name,   tail, i, a) {
    tail = name
    sub(/.*\./, "", tail)
    if (length(tail) != 8 || tail !~ /^[0-9A-Fa-f]+$/) return 2
    a = 0
    for (i = 1; i <= 8; i++)
        a = a * 16 + index("0123456789ABCDEF", toupper(substr(tail, i, 1))) - 1
    return (a % 4 == 2) ? 1 : 2
}
/^\t\.section / {
    name = $0
    sub(/^\t\.section[ \t]+"?/, "", name)
    sub(/".*$/, "", name)
    sub(/,.*$/, "", name)
    al = al_of(name)
    print
    insec = 1
    next
}
insec && /^\t\.align[ \t]+[0-9]+(,[ \t]*[0-9]+)?$/ {
    print "\t.align " al ", 0"
    insec = 0
    next
}
{ print }
' "$1" > "$1.tmp" && mv "$1.tmp" "$1"

for sec in $(sed -n -e 's/^\t\.section \([a-zA-Z0-9_\.]\+\),"ax",%progbits$/\1/p' "$1")
do
    tail=${sec##*.}
    al=2
    case "$tail" in
        [0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F])
            [ $(( 0x$tail % 4 )) -eq 2 ] && al=1 ;;
    esac
    echo "	.section \"$sec\"" >> "$1"
    echo "	.align $al, 0" >> "$1"
done

echo "	.text" >> "$1"
echo "	.align 2, 0" >> "$1"
