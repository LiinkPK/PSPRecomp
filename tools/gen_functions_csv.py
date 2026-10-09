import csv, pathlib

src = pathlib.Path(r'C:\Users\javi_\Documents\GitHub\D012-decomp\psp_report_functions_auto.csv')
dst = pathlib.Path(r'C:\Users\javi_\Documents\GitHub\D012-decomp\functions.csv')

rows = list(csv.DictReader(src.open()))
with dst.open('w', newline='') as f:
    f.write('name,address,size\n')
    for i, row in enumerate(rows):
        name = row['name']
        addr = int(row['address'], 16)
        # estimate size from next function address, last gets 0
        if i + 1 < len(rows):
            next_addr = int(rows[i+1]['address'], 16)
            size = next_addr - addr
        else:
            size = 0
        f.write(f'{name},{hex(addr)},{hex(size)}\n')

print(f'Written {len(rows)} functions to {dst}')