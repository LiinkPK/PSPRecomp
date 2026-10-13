/* Entry 0x088D9378 | file offset 0x000D6350 | FUN_088d9378 | bytes 96 */

undefined4 FUN_088d9378(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d93d8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = 0;
    param_1 = param_1 + 4;
    do {
      FUN_088d8bf0(param_1);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x44;
    } while (iVar1 < 7);
    uVar2 = 0;
  }
  return uVar2;
}

