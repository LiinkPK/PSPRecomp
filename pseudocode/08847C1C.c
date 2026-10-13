/* Entry 0x08847C1C | file offset 0x00044BF4 | FUN_08847c1c | bytes 24 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8a44. Boundary still requires runtime validation. */

bool FUN_08847c1c(int param_1)

{
  return (*(uint *)(*(int *)(param_1 + 4) + 0x380) & 0x2000000) != 0;
}

