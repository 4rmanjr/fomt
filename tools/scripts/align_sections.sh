#!/bin/bash
# align_sections.sh — pembungkus tipis; logikanya di align_sections.py.
#
# Alignment tiap section `.text.<modul>.<HEX8>` diturunkan dari alamat ROM-nya
# (awal DAN akhir section, dari state modul), `thumb_func_start` diganti
# `non_word_aligned_thumb_func_start` bila section wajib align-1, dan
# `.align` penutup di akhir fungsi dibuang. Detail + bukti: docstring
# tools/scripts/align_sections.py dan docs/decomp/POLA-DIFF.md §140-§141.
#
# Pemakaian: align_sections.sh <berkas.s> [--stem <nama>]
exec python3 "$(dirname "$0")/align_sections.py" "$@"
