#!/bin/sh
# Pasang binutils arm-none-eabi tanpa root ke dalam workspace.
#
# Latar belakang: `tools/arm-gnu/bin` hanya membawa `arm-none-eabi-as` dan
# `arm-none-eabi-cpp`; `make compare` juga butuh `ld`, `objcopy`, dan `strip`.
# Daripada mengandalkan `/tmp`, skrip ini mengunduh paket .deb binutils dari
# arsip Ubuntu lalu mengekstraknya dengan `dpkg-deb -x` (tidak menyentuh dpkg
# sistem, tidak butuh root). Hasilnya git-ignored.
#
# Pakai:
#   tools/scripts/setup_arm_binutils.sh [DIR]
#   export PATH="$PWD/.toolchain/arm-binutils/usr/bin:$PWD/tools/arm-gnu/bin:$PATH"
#   make compare
#
# Variabel lingkungan:
#   BINUTILS_VERSION  versi paket (default 2.42-1ubuntu1+23)
#   BINUTILS_MIRROR   basis URL arsip (default http://archive.ubuntu.com/ubuntu)
set -eu

here=$(CDPATH= cd -- "$(dirname -- "$0")/../.." && pwd)
dest=${1:-"$here/.toolchain/arm-binutils"}
version=${BINUTILS_VERSION:-2.42-1ubuntu1+23}
mirror=${BINUTILS_MIRROR:-http://archive.ubuntu.com/ubuntu}

case "$(uname -m)" in
  x86_64) arch=amd64 ;;
  aarch64|arm64) arch=arm64 ;;
  *) echo "arsitektur $(uname -m) tidak didukung arsip Ubuntu" >&2; exit 1 ;;
esac

pkg="binutils-arm-none-eabi_${version}_${arch}.deb"
url="$mirror/pool/universe/b/binutils-arm-none-eabi/$pkg"

if [ -x "$dest/usr/bin/arm-none-eabi-ld" ] && [ -x "$dest/usr/bin/arm-none-eabi-objcopy" ]; then
  echo "sudah terpasang: $dest"
else
  mkdir -p "$dest"
  tmp=$(mktemp -d)
  trap 'rm -rf "$tmp"' EXIT
  echo "unduh $url"
  curl -sSfL -o "$tmp/$pkg" "$url"
  dpkg-deb -x "$tmp/$pkg" "$dest"
fi

for tool in ld objcopy strip; do
  bin="$dest/usr/bin/arm-none-eabi-$tool"
  [ -x "$bin" ] || { echo "hilang: $bin" >&2; exit 1; }
done

echo "terpasang di $dest"
echo "export PATH=\"$dest/usr/bin:$here/tools/arm-gnu/bin:\$PATH\""
