/* Entry 0x08867AC8 | file offset 0x00064AA0 | FUN_08867ac8 | bytes 200 */

undefined * FUN_08867ac8(undefined *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  FUN_089359e8();
  iVar1 = FUN_08935c14(param_1,PTR_DAT_089d5ec8);
  if ((iVar1 != 0) && (DAT_089d5f1c == '\0')) {
    FUN_089359a4(&DAT_08b636ff,param_1);
    iVar1 = FUN_08935c14(&DAT_08b636ff,PTR_DAT_089d5ec8);
    iVar2 = FUN_088f49b8();
    puVar3 = (&PTR_DAT_089d5ed0)[iVar2];
    iVar2 = 0;
    do {
      *(undefined *)(iVar1 + iVar2) = puVar3[iVar2];
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    param_1 = &DAT_08b636ff;
  }
  return param_1;
}

