/* Entry 0x08843710 | file offset 0x000406E8 | FUN_08843710 | bytes 324 */

undefined4 FUN_08843710(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 6) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(char *)(iVar2 + 0x24) == 'Z') {
      bVar3 = false;
      if (*(char *)(iVar2 + 0x25) == '_') {
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = FUN_08844fa4(iVar2 + 0x24,&DAT_089c8898);
      iVar2 = *param_1;
    }
    else {
      iVar2 = FUN_088470dc((int)*(char *)(iVar2 + 6),(int)*(char *)(iVar2 + 7),0);
      uVar1 = FUN_08844fa4(iVar2 + 0x24,&DAT_089c8898);
      iVar2 = *param_1;
    }
    iVar2 = FUN_088fe7c8(uVar1,*(char *)(iVar2 + 9) != '\0');
    if (iVar2 == 0) {
      uVar1 = 0;
      *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
    }
    else {
      FUN_088fe850(uVar1,param_2,param_3,FUN_08843b68,param_1,*(char *)(*param_1 + 9) != '\0');
      uVar1 = 1;
    }
  }
  return uVar1;
}

