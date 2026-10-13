/* Entry 0x088DE5FC | file offset 0x000DB5D4 | FUN_088de5fc | bytes 208 */

undefined4 FUN_088de5fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_088de6cc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 1) {
      FUN_088de80c(param_1);
    }
    FUN_088df15c(param_1 + 0x14);
    if (*(int *)(param_1 + 0xc) == 2) {
      FUN_088de87c(param_1);
    }
    FUN_088dea98(param_1 + 0x30);
    iVar3 = 0;
    iVar1 = param_1 + 0x48;
    do {
      FUN_088dee00(iVar1);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar3 < 2);
    FUN_088df6a0(param_1 + 0x80);
    if (*(int *)(param_1 + 0xc) == 3) {
      FUN_088de8b8(param_1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

