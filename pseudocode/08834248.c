/* Entry 0x08834248 | file offset 0x00031220 | FUN_08834248 | bytes 44 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c6afc,089c710c,089c7324,089c7784,089c7d54,089c8bb4. Boundary still requires runtime
   validation. */

bool FUN_08834248(int param_1)

{
  return (*(uint *)(param_1 + 0x184) & 0x10) != 0;
}

