/* Entry 0x088F2A94 | file offset 0x000EFA6C | FUN_088f2a94 | bytes 28 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089cccb4. Boundary still requires runtime validation. */

int FUN_088f2a94(int param_1,int param_2)

{
  param_2 = param_2 - *(int *)(*(int *)(param_1 + 4) + 0xc);
  if (param_2 < 0) {
    param_2 = 0;
  }
  return param_2;
}

