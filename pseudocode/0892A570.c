/* Entry 0x0892A570 | file offset 0x00127548 | FUN_0892a570 | bytes 124 */

int FUN_0892a570(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((-1 < *(int *)(param_1 + 0x6a4)) &&
     (iVar1 = FUN_0892a1e0(param_1 + *(int *)(param_1 + 0x6a4) * 0x154), iVar1 == 1)) {
    iVar2 = param_1 + *(int *)(param_1 + 0x6a4) * 0x154;
  }
  return iVar2;
}

