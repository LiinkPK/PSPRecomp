import pathlib

outdir = pathlib.Path(r'C:\Users\javi_\Documents\GitHub\D012-decomp\generated6')
units = sorted(outdir.glob('generated_unit_*.cpp'))
n = len(units)

lines = ['#include "psprecomp/runtime.hpp"\n#include <cstdint>\n\nnamespace psprecomp {\n']
for i in range(n):
    lines.append(f'void register_generated_unit_{i}(Runtime &runtime);')
lines.append('\nvoid register_generated_functions(Runtime &runtime) {')
for i in range(n):
    lines.append(f'    register_generated_unit_{i}(runtime);')
lines.append('}\n} // namespace psprecomp\n')

(outdir / 'generated_registry.cpp').write_text('\n'.join(lines))
print(f'Registry written for {n} units')