import pathlib, sys

def fix_unit(path):
    text = pathlib.Path(path).read_bytes().decode('utf-8')
    # normalize line endings
    text = text.replace('\r\n', '\n')
    old = '    std::uint32_t local_transfers = 0u;\nLOCAL_DISPATCH:'
    new = '    std::uint32_t local_transfers = 0u;\n    std::uint32_t local_pc = ctx.pc;\n    std::uint16_t entry_id = 0;\nLOCAL_DISPATCH:'
    if old in text:
        fixed = text.replace(old, new)
        pathlib.Path(path).write_bytes(fixed.encode('utf-8'))
        print(f'Fixed: {path}')
    else:
        print(f'Skipped: {path}')

for p in pathlib.Path(sys.argv[1]).glob('generated_unit_*.cpp'):
    fix_unit(str(p))