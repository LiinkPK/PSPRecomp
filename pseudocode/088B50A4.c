/* Entry 0x088B50A4 | file offset 0x000B207C | FUN_088b50a4 | bytes 432 */

int FUN_088b50a4(undefined4 param_1,int *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  
  iVar2 = 0;
  iVar6 = *(int *)(DAT_089d7330 + 8);
  iVar3 = 0;
  if (0 < iVar6) {
    iVar1 = 0;
    do {
      psVar7 = (short *)(DAT_089d7334 + iVar1);
      uVar4 = (uint)psVar7[1];
      if (((int)uVar4 < 0) ||
         ((*(uint *)(DAT_089d726c + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0)) {
        if (param_6 != 0) {
          uVar4 = (uint)*psVar7;
          if ((int)uVar4 < 0) {
            uVar5 = -(-uVar4 & 0x1f);
          }
          else {
            uVar5 = uVar4 & 0x1f;
          }
          if ((*(uint *)(param_6 + ((int)(uVar4 + ((uint)((int)uVar4 >> 5) >> 0x1b)) >> 5) * 4) &
              1 << (uVar5 & 0x1f)) == 0) goto LAB_088b5230;
        }
        uVar4 = param_4 & 0x1f;
        if ((int)param_4 < 0) {
          uVar4 = -(-param_4 & 0x1f);
        }
        if (((*(uint *)(psVar7 + ((int)(param_4 + ((uint)((int)param_4 >> 5) >> 0x1b)) >> 5) * 2 + 4
                       ) & 1 << (uVar4 & 0x1f)) != 0) &&
           ((*(uint *)(psVar7 + 2) & 1 << (param_5 & 0x1f)) != 0)) {
          if (param_3 <= iVar3) {
            return iVar3;
          }
          iVar3 = iVar3 + 1;
          *param_2 = (int)*psVar7;
          param_2 = param_2 + 1;
        }
      }
LAB_088b5230:
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < iVar6);
  }
  return iVar3;
}

