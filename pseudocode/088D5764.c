/* Entry 0x088D5764 | file offset 0x000D273C | FUN_088d5764 | bytes 668 */

void FUN_088d5764(int param_1,undefined4 param_2,int param_3,int param_4,short *param_5,
                 short *param_6,undefined4 param_7,uint param_8,char cStackX_0,undefined4 uStackX_4,
                 int iStackX_8)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  undefined4 uVar6;
  int *piVar7;
  short *psVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int local_40 [4];
  
  piVar12 = local_40;
  param_8 = param_8 & 0xffff;
  local_40[3] = param_4;
  FUN_088d3cf0(param_2,param_3,param_6);
  piVar7 = &DAT_089cbf04;
  sVar5 = 0x17;
  iVar9 = 1;
  do {
    psVar8 = param_5;
    psVar10 = param_5;
    if (iVar9 == -1) {
LAB_088d5824:
      while( true ) {
        sVar1 = param_6[1];
        sVar2 = param_6[2];
        sVar3 = param_6[3];
        *psVar8 = *param_6;
        psVar8[1] = sVar1;
        psVar8[2] = sVar2;
        psVar8[3] = sVar3;
        if (*psVar10 == -1) break;
        if (psVar10[3] == 0x17) {
          psVar10[3] = sVar5;
        }
        param_6 = param_6 + 4;
        psVar8 = psVar8 + 4;
        psVar10 = psVar10 + 4;
      }
      FUN_088d3cf0(param_2,param_3,param_5);
      iVar9 = local_40[3];
      if (cStackX_0 == '\0') {
        param_3 = param_3 + param_8 * 4;
        FUN_088d9cfc(*(undefined4 *)(param_3 + 4));
        FUN_088d9cfc(*(undefined4 *)(param_3 + 0x14));
      }
      else {
        FUN_088d3cf0(param_2,param_3,param_7);
        if (iStackX_8 != 0) {
          FUN_088d9f5c(*(undefined4 *)(param_3 + param_8 * 4 + 4),1,1);
          iVar9 = iStackX_8;
        }
        if (iVar9 < 100) {
          FUN_088d9cfc(*(undefined4 *)(param_3 + param_8 * 4 + 0x14));
        }
        iVar13 = 0;
        iVar11 = param_3 + param_8 * 4;
        do {
          uVar6 = *(undefined4 *)(iVar11 + 8);
          *piVar12 = iVar9 % 10;
          FUN_088d9cfc(uVar6);
          iVar13 = iVar13 + 1;
          piVar12 = piVar12 + 1;
          iVar11 = iVar11 + 4;
          iVar9 = iVar9 / 10;
        } while (iVar13 < 3);
        bVar4 = false;
        iVar9 = 2;
        piVar7 = local_40 + 2;
        param_3 = param_3 + param_8 * 4;
        do {
          if (*piVar7 != 0) {
            bVar4 = true;
          }
          if (bVar4) {
            FUN_088d9f5c(*(undefined4 *)(param_3 + 8),*(undefined2 *)(&DAT_089cc00c + *piVar7 * 2),1
                        );
            param_3 = param_3 + 4;
          }
          iVar9 = iVar9 + -1;
          piVar7 = piVar7 + -1;
        } while (-1 < iVar9);
      }
      return;
    }
    if (iVar9 == param_1) {
      sVar5 = (short)piVar7[1];
      goto LAB_088d5824;
    }
    piVar7 = piVar7 + 2;
    iVar9 = *piVar7;
  } while( true );
}

