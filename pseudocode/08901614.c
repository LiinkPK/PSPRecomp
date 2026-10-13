/* Entry 0x08901614 | file offset 0x000FE5EC | FUN_08901614 | bytes 444 */

int FUN_08901614(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar2 = FUN_088b36fc(param_3);
  iVar9 = 0;
  if ((iVar2 != 0) && (iVar8 = 0, 0 < *(short *)(iVar2 + 2))) {
    iVar7 = 0;
    do {
      pcVar5 = (char *)(*(int *)(iVar2 + 0x14) + iVar7);
      uVar4 = (uint)*(short *)(pcVar5 + 4);
      if ((uVar4 == 0xffffffff) ||
         ((*(uint *)(DAT_089d726c + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0)) {
        cVar1 = *pcVar5;
        uVar6 = param_5[1];
        uVar4 = *param_5;
        uVar10 = FUN_089985b0(1,0,(int)cVar1);
        if (((uVar6 & (uint)((ulonglong)uVar10 >> 0x20)) == 0 && (uVar4 & (uint)uVar10) == 0) &&
           (((iVar3 = FUN_088b70c8((int)cVar1), param_4 == -1 ||
             ((param_4 == 0 && (*(char *)(iVar3 + 3) == '\0')))) ||
            ((param_4 == 1 && (*(char *)(iVar3 + 3) == '\x01')))))) {
          if (param_2 <= iVar9) {
            return iVar9;
          }
          *param_1 = pcVar5;
          iVar9 = iVar9 + 1;
          param_1 = param_1 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar8 < *(short *)(iVar2 + 2));
  }
  return iVar9;
}

