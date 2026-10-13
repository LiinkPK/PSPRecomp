/* Entry 0x088B4B7C | file offset 0x000B1B54 | FUN_088b4b7c | bytes 460 */

int FUN_088b4b7c(undefined4 param_1,int *param_2,int param_3,int *param_4,int param_5,
                undefined4 param_6,char param_7)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  iVar9 = *(int *)(DAT_089d72b8 + 8);
  iVar8 = 0;
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      iVar3 = 0;
      psVar5 = (short *)(DAT_089d72bc + iVar7);
      bVar2 = false;
      if (0 < param_5) {
        piVar4 = param_4;
        do {
          bVar2 = true;
          if ((int)psVar5[5] == *piVar4) break;
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
          bVar2 = false;
        } while (iVar3 < param_5);
      }
      if ((((param_7 != '\x01') || ((*(byte *)(psVar5 + 8) & 2) == 0)) && (!bVar2)) &&
         (((char)psVar5[9] == '\x01' && ((*(byte *)(psVar5 + 8) & 1) == 0)))) {
        if (param_3 <= iVar8) {
          return iVar8;
        }
        *param_2 = (int)*psVar5;
        iVar3 = FUN_088b2a84((int)(char)psVar5[10]);
        param_2[1] = iVar3;
        param_2[2] = 0;
        sVar1 = psVar5[5];
        param_2[5] = 0;
        param_2[3] = (int)sVar1;
        if (psVar5[5] == -1) {
          param_2[4] = param_2[1];
        }
        else {
          iVar3 = FUN_088b2a30();
          param_2[4] = (int)*(short *)(iVar3 + 2);
        }
        iVar8 = iVar8 + 1;
        param_2 = param_2 + 6;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x44;
    } while (iVar6 < iVar9);
  }
  return iVar8;
}

