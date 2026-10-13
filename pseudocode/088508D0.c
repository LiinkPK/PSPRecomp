/* Entry 0x088508D0 | file offset 0x0004D8A8 | FUN_088508d0 | bytes 220 */

undefined4 FUN_088508d0(int *param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
  uVar10 = (DAT_09af84d0 >> 0x10 & 0x7fffU) % 0x65;
  iVar9 = *param_1;
  iVar5 = 0;
  piVar1 = (int *)(iVar9 + 4);
  iVar7 = 0;
  puVar6 = (undefined4 *)0x0;
  if (0 < *piVar1) {
    do {
      if (param_2 == *(char *)(iVar9 + 0xc)) {
        if (param_3 == '\0') {
          cVar2 = *(char *)(iVar9 + 0x30);
        }
        else {
          cVar2 = *(char *)(iVar9 + 0x31);
        }
        if (0 < cVar2) {
          iVar8 = iVar7 + cVar2;
          bVar3 = iVar7 <= (int)uVar10;
          puVar6 = (undefined4 *)(iVar9 + 8);
          iVar7 = iVar8;
          if ((bVar3) && ((int)uVar10 < iVar8)) {
            return *puVar6;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 0x3c;
    } while (iVar5 < *piVar1);
  }
  if (puVar6 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar6;
  }
  return uVar4;
}

