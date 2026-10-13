/* Entry 0x0880FBF8 | file offset 0x0000CBD0 | FUN_0880fbf8 | bytes 96 */

void FUN_0880fbf8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0880ffe8(param_1);
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  uVar1 = FUN_088444d4(DAT_089d4960,param_2);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  iVar2 = FUN_088470b8(param_2);
  uVar1 = FUN_0886d0d8(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  return;
}

