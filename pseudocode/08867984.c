/* Entry 0x08867984 | file offset 0x0006495C | FUN_08867984 | bytes 324 */

undefined * FUN_08867984(undefined *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_089359e8();
  iVar1 = FUN_08935c14(param_1,PTR_DAT_089d5f18);
  puVar3 = PTR_DAT_089d5f18;
  if ((iVar1 == 0) || (DAT_089d5f1c != '\0')) {
    puVar3 = PTR_DAT_089d5ed4;
    if (param_2 != '\0') {
      puVar3 = PTR_DAT_089d5ef8;
    }
    iVar1 = FUN_08935c14(param_1,puVar3);
    if (iVar1 == 0) {
      return param_1;
    }
    if (DAT_089d5f1c != '\0') {
      return param_1;
    }
    if (param_2 == '\0') {
      puVar4 = (undefined *)FUN_08867924();
    }
    else {
      puVar4 = (undefined *)FUN_08867944();
    }
  }
  else {
    iVar1 = FUN_088f49b8();
    puVar4 = (&PTR_DAT_089d5ed0)[iVar1];
  }
  FUN_089359a4(&DAT_08b63600,param_1);
  iVar1 = FUN_08935c14(&DAT_08b63600,puVar3);
  iVar2 = 0;
  do {
    *(undefined *)(iVar1 + iVar2) = puVar4[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return &DAT_08b63600;
}

