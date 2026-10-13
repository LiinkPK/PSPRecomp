/* Entry 0x08922AF8 | file offset 0x0011FAD0 | FUN_08922af8 | bytes 348 */

undefined4 FUN_08922af8(int param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(short *)(*(int *)(param_1 + 0x20) + 0x16) == -1) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_089237e8(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_088470b8((int)*(short *)(*(int *)(param_1 + 0x20) + 0x16));
      if (param_3 != '\0') {
        bVar1 = false;
        if ((*(char *)(iVar2 + 0x24) == 'R') && (bVar1 = false, *(char *)(iVar2 + 0x25) == '_')) {
          bVar1 = true;
        }
        if (!bVar1) {
          return 0;
        }
      }
      iVar3 = FUN_088444d4(DAT_089d4960,(int)*(short *)(*(int *)(param_1 + 0x20) + 0x16));
      if (iVar3 == 0) {
        bVar1 = false;
        iVar3 = (int)*(short *)(*(int *)(param_1 + 0x20) + 0x16);
        if ((*(char *)(iVar2 + 0x24) == 'P') && (bVar1 = false, *(char *)(iVar2 + 0x25) == '_')) {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_08844c14(iVar3,param_2,0);
        }
        else {
          FUN_0884417c(DAT_089d4960,iVar3,param_2,0x264000,0);
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

