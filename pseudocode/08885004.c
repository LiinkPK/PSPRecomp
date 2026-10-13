/* Entry 0x08885004 | file offset 0x00081FDC | FUN_08885004 | bytes 152 */

void FUN_08885004(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,0,0);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 != 0) {
    FUN_0887b9c4();
    FUN_0887b98c(*(undefined4 *)(param_1 + 0xc));
  }
  FUN_08884f98(param_1);
  return;
}

