/* Entry 0x0897FCB8 | file offset 0x0017CC90 | FUN_0897fcb8 | bytes 60 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089dd094. Boundary still requires runtime validation. */

bool FUN_0897fcb8(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 != -1) {
    *(int *)(param_4 + 0x20) = param_3[1];
    *(int *)(param_4 + 0x24) = param_3[2];
  }
  return iVar1 != -1;
}

