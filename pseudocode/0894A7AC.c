/* Entry 0x0894A7AC | file offset 0x00147784 | FUN_0894a7ac | bytes 120 */

void FUN_0894a7ac(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  *(int *)(param_1 + 0x88) = param_2;
  for (iVar1 = *(int *)(param_2 + param_4 * 4 + 0x1b8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14))
  {
    FUN_0894ba60(*(undefined4 *)(iVar1 + 0x30),param_1,iVar1,param_3,param_4);
  }
  return;
}

