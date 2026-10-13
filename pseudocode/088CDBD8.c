/* Entry 0x088CDBD8 | file offset 0x000CABB0 | FUN_088cdbd8 | bytes 128 */

undefined4 FUN_088cdbd8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088cd9d4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x1c) == param_2) {
    uVar2 = 0;
  }
  else {
    FUN_088cd538(param_1);
    *(int *)(param_1 + 0x1c) = param_2;
    FUN_088cd754(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

