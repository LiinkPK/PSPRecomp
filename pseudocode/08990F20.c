/* Entry 0x08990F20 | file offset 0x0018DEF8 | FUN_08990f20 | bytes 224 */

void FUN_08990f20(int param_1,int param_2,int param_3)

{
  int *piVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = DAT_089da420;
  iVar6 = 0;
  if (0 < *DAT_089da420) {
    psVar3 = (short *)(&DAT_09af0780 + (param_1 + 1) * 2);
    psVar5 = (short *)(&DAT_09af0780 + param_1 * 2);
    psVar4 = (short *)(param_3 + param_2 * 2);
    psVar2 = (short *)(param_3 + (param_2 + 1) * 2);
    do {
      iVar7 = (int)*psVar5 + (int)*psVar4;
      if (iVar7 < 0x8000) {
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
      }
      else {
        iVar7 = 0x7fff;
      }
      *psVar5 = (short)iVar7;
      iVar7 = (int)*psVar3 + (int)*psVar2;
      if (iVar7 < 0x8000) {
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
      }
      else {
        iVar7 = 0x7fff;
      }
      *psVar3 = (short)iVar7;
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 2;
      psVar4 = psVar4 + 2;
      psVar3 = psVar3 + 2;
      psVar2 = psVar2 + 2;
    } while (iVar6 < *piVar1);
  }
  return;
}

