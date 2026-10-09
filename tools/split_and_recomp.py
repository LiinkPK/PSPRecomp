import csv, pathlib, subprocess, math

src = pathlib.Path(r'C:\Users\javi_\Documents\GitHub\D012-decomp\functions.csv')
eboot = r'C:\Users\javi_\Documents\GitHub\D012-decomp\original\ULES01505_FFSTJP.BIN'
recomp = r'C:\Users\javi_\Documents\GitHub\PSPRecomp\out\framework\Release\psp_recomp.exe'
outdir = pathlib.Path(r'C:\Users\javi_\Documents\GitHub\D012-decomp\generated6')
outdir.mkdir(exist_ok=True)

rows = list(csv.DictReader(src.open()))
chunk_size = 100  # functions per unit
chunks = [rows[i:i+chunk_size] for i in range(0, len(rows), chunk_size)]

for idx, chunk in enumerate(chunks):
    chunk_csv = outdir / f'chunk_{idx:04d}.csv'
    with chunk_csv.open('w', newline='') as f:
        f.write('name,address,size\n')
        for row in chunk:
            f.write(f"{row['name']},{row['address']},{row['size']}\n")
    out_cpp = outdir / f'generated_unit_{idx:04d}.cpp'
    result = subprocess.run([recomp, eboot, str(chunk_csv), str(out_cpp)], capture_output=True, text=True, cwd=r'C:\Users\javi_\Documents\GitHub\D012-decomp')
    if result.returncode != 0:
        print(f'ERROR chunk {idx}: {result.stderr}')
    else:
        print(f'Chunk {idx}/{len(chunks)-1} done')