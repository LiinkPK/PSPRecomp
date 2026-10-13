/* Entry 0x08941914 | file offset 0x0013E8EC | FUN_08941914 | bytes 128 */

int FUN_08941914(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_08944694(0,*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else if (param_4 != 0) {
    FUN_0894be60(*(undefined4 *)(param_1 + 0x1c),iVar1,param_4,param_5);
  }
  return iVar1;
}

