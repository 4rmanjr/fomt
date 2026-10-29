# Installation

## New instructions

Better instructions will come eventually.

- get a `arm-none-eabi` toolchain (devkitARM probably works)
- get [notyourav/agbcc] (or another fork of agbcc that includes agbcp) and install it into this repository. You can use the install_agbcp.sh script in the tools folder to achieve that.
- get the base rom, put it in root directory as `baserom.gba`
- `make compare`

[notyourav/agbcc]: https://github.com/notyourav/agbcc

## Termux (Android ARM64)

The `decomp/` pipeline (`fomt`, see `AGENTS.md`) runs on Termux even though
the vendored tools are Linux x86-64 binaries (see `tools/VENDORED.md`).
Setup below was verified end-to-end: 5/5 sampled `promoted` functions
re-judge as MATCH, and `agbcc` output is byte-identical to the native x86
pipeline. All extra files live **outside** the repo (`~/bin`, `~/x86sys`),
so `git status` stays clean.

```bash
# 1. emulator + native compiler/preprocessor + python deps
pkg install qemu-user-x86-64 clang python-pip
pip install capstone pyelftools
# NOTE: the qemu binary is named qemu-x86_64 (underscore)

# 2. minimal x86-64 sysroot (glibc + libzstd, the only libs the
#    vendored tools need) for qemu-user
mkdir -p ~/x86sys/debs ~/x86sys/root && cd ~/x86sys/debs
# download libc6_2.36*_amd64.deb and libzstd1_*_amd64.deb from
# http://ftp.debian.org/debian/pool/main/g/glibc/ and
# http://ftp.debian.org/debian/pool/main/libz/libzstd/
for d in *.deb; do dpkg-deb -x "$d" ~/x86sys/root; done
# fix absolute symlink that breaks under the qemu sysroot:
rm ~/x86sys/root/lib64/ld-linux-x86-64.so.2
cp ~/x86sys/root/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2 ~/x86sys/root/lib64/

# 3. smoke test: agbcc and as run standalone under qemu
unset LD_PRELOAD   # termux-exec preload is ARM, poisons qemu guests
Q="qemu-x86_64 -L $HOME/x86sys/root"
$Q tools/agbcc/bin/agbcc --help | head -n 2
$Q tools/arm-gnu/bin/arm-none-eabi-as --version | head -n 1
```

`arm-none-eabi-cpp` does **not** work under `qemu-user` without binfmt
(it spawns `cc1` via `execve`, which the Android kernel cannot run).
`agbcc` and `arm-none-eabi-as` are single-process and work fine, so only
the preprocess step is replaced with native `clang -E` (preprocessed code
is equivalent — `agbcc` output matches the x86 pipeline byte-for-byte):

```bash
# 4. wrappers (outside the repo!)
mkdir -p ~/bin ~/x86sys/wrap
cat > ~/bin/clang-cpp-arm <<'EOF'
#!/bin/sh
exec clang -E "$@"
EOF
chmod +x ~/bin/clang-cpp-arm
# one wrapper per x86-64 tool, e.g.:
cat > ~/x86sys/wrap/agbcc <<'EOF'
#!/bin/sh
unset LD_PRELOAD
export QEMU_LD_PREFIX="$HOME/x86sys/root"
exec qemu-x86_64 -L "$HOME/x86sys/root" \
  "$HOME/gitproject/fomt/tools/agbcc/bin/agbcc" "$@"
EOF
chmod +x ~/x86sys/wrap/agbcc
# repeat for old_agbcc, agbcc_arm, arm-none-eabi-as

# 5. shim driving decomp/run.py through the official FOMT_* overrides
#    (see tools/VENDORED.md); vendored capstone .so is x86-64, so point
#    the loader at the native one via LIBCAPSTONE_PATH.
#    On proot-distro/Ubuntu, also install the native assembler: it is
#    ~20x faster than the qemu-wrapped one and produces byte-identical
#    .o output (verified on judge samples), roughly halving verify time.
apt-get install -y binutils-arm-none-eabi   # proot-distro/Ubuntu only
cat > ~/bin/fomt <<'EOF'
#!/bin/sh
# Termux/proot wrapper: x86-64 tools run via qemu-user, except where a
# native equivalent exists (byte-identical, much faster). Standard PCs
# don't use this file (run.py defaults apply) — PC results unaffected.
# A pre-set FOMT_* env is always respected.
unset LD_PRELOAD
[ -n "$FOMT_AGBCC" ] || export FOMT_AGBCC="$HOME/x86sys/wrap/agbcc"
if [ -z "$FOMT_AS" ]; then
    if command -v arm-none-eabi-as >/dev/null 2>&1; then
        export FOMT_AS="$(command -v arm-none-eabi-as)"   # native, fast
    else
        export FOMT_AS="$HOME/x86sys/wrap/arm-none-eabi-as"   # qemu fallback
    fi
fi
[ -n "$FOMT_CPP" ] || export FOMT_CPP="$HOME/bin/clang-cpp-arm"
export LIBCAPSTONE_PATH=/data/data/com.termux/files/usr/lib/python3.14/site-packages/capstone/lib
exec python3 "$HOME/gitproject/fomt/decomp/run.py" "$@"
EOF
chmod +x ~/bin/fomt
# make sure ~/bin is on PATH, then:
fomt status
```

Known limits on Termux (same as elsewhere, plus one):

- `make compare` still needs `agbcp` + `baserom.gba` (copyrighted, not
  vendored) — unchanged from other platforms.
- everything runs under CPU emulation, so a batch is slower than on x86.

## Old instructions

Install the devkitARM toolchain of devkitPro as per [the instructions on their wiki](https://devkitpro.org/wiki/devkitPro_pacman).

Inside the included MSYS2 environment run:

    pacman -S gcc git

To set up the repository:

	git clone https://github.com/not-alons/hmfomt
	git clone https://github.com/pret/agbcc

	cd ./agbcc
	./build.sh
	./install.sh ../hmfomt

	cd ../hmfomt

Place a .gba ROM of Harvest Moon: Friends of Mineral Town (USA) in your hmfomt folder and rename it to "baserom".

To build **hmfomt.gba** and confirm it matches the official ROM image:

	make compare

If an OK is returned, then the installation went smoothly.
