import pathlib, sys

gendir = pathlib.Path(sys.argv[1])
for p in sorted(gendir.glob('generated_unit_*.cpp')):
    if p.name == 'generated_unit_0000.cpp':
        continue
    text = p.read_bytes().decode('utf-8')
    # Find and remove the register_generated_functions definition
    start = text.find('\nvoid register_generated_functions(')
    if start == -1:
        print(f'Skipped: {p.name}')
        continue
    end = text.find('\n}', start) + 2
    fixed = text[:start] + text[end:]
    p.write_bytes(fixed.encode('utf-8'))
    print(f'Stripped: {p.name}')