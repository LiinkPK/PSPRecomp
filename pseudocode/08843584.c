/* Entry 0x08843584 | file offset 0x0004055C | FUN_08843584 | bytes 396 */

undefined4 FUN_08843584(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(*param_1 + 0x34) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_08844fa4((char *)(*param_1 + 0x34),&DAT_089c8850);
    iVar3 = *param_1;
    if (*(char *)(iVar3 + 0x24) == 'P') {
      bVar1 = false;
      if (*(char *)(iVar3 + 0x25) == '_') {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = FUN_088fe7c8(uVar2,0);
    }
    else {
      iVar3 = FUN_088fe7c8(uVar2,*(char *)(iVar3 + 9) != '\0');
    }
    if (iVar3 == 0) {
      uVar2 = 0;
      *(undefined1 *)(DAT_089d4960 + 0x61) = 1;
    }
    else {
      iVar3 = *param_1;
      if (*(char *)(iVar3 + 0x24) == 'P') {
        bVar1 = false;
        if (*(char *)(iVar3 + 0x25) == '_') {
          bVar1 = true;
        }
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_088fe850(uVar2,param_2,param_3,FUN_08843b2c,param_1,0);
      }
      else {
        FUN_088fe850(uVar2,param_2,param_3,FUN_08843b2c,param_1,*(char *)(iVar3 + 9) != '\0');
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

