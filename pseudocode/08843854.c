/* Entry 0x08843854 | file offset 0x0004082C | FUN_08843854 | bytes 360 */

undefined4 FUN_08843854(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  bVar1 = false;
  if ((*(char *)(iVar4 + 0x24) == 'P') && (bVar1 = false, *(char *)(iVar4 + 0x25) == '_')) {
    bVar1 = true;
  }
  if ((bVar1) && ((*(byte *)(iVar4 + 8) & 8) == 0)) {
    iVar2 = FUN_089359e8(iVar4 + 0x24);
    iVar2 = iVar4 + 0x24 + iVar2;
    bVar1 = false;
    if ((*(char *)(iVar2 + -2) == '_') && (bVar1 = false, *(char *)(iVar2 + -1) == 'W')) {
      bVar1 = true;
    }
    if (!bVar1) {
      iVar4 = FUN_088470dc((int)*(char *)(*param_1 + 6),(int)*(char *)(*param_1 + 7),0);
      uVar3 = FUN_08844fa4(iVar4 + 0x24,&DAT_089c88a0);
      iVar4 = FUN_088fe7c8(uVar3,*(char *)(*param_1 + 9) != '\0');
      if (iVar4 == 0) {
        *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
        return 0;
      }
      FUN_088fe850(uVar3,param_2,param_3,FUN_08843ba4,param_1,*(char *)(*param_1 + 9) != '\0');
      return 1;
    }
  }
  return 0;
}

