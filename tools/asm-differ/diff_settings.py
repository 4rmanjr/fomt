# Pengaturan asm-differ utk repo ini (ARM7TDMI/Thumb, agbcc).
# Pakai: cd tools/asm-differ && python3 diff.py --no-pager -o -f <mine.o> -F <ref.o> <func>
# Deps sistem: python3 + colorama + watchdog (pip --user); objdump: arm-none-eabi-objdump.
def apply(config, args):
    config["arch"] = "arm32"
    config["objdump_executable"] = "arm-none-eabi-objdump"
