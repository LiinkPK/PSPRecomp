/* Entry 0x0897FCF4 | file offset 0x0017CCCC | FUN_0897fcf4 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd09c. Boundary still requires runtime validation. */

void FUN_0897fcf4(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  if (*param_3 != -1) {
    *(int *)(param_4 + 0x20) = param_3[1];
    *(int *)(param_4 + 0x24) = param_3[2];
  }
  return;
}

