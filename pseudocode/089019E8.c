/* Entry 0x089019E8 | file offset 0x000FE9C0 | FUN_089019e8 | bytes 376 */

void FUN_089019e8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  
  iVar2 = FUN_088b37c0(param_3);
  iVar3 = FUN_088b36fc(param_4);
  iVar4 = 0;
  if ((iVar2 != 0) && (iVar3 != 0)) {
    iVar8 = (int)*(short *)(iVar3 + 8);
    if ((*(ushort *)(iVar2 + 0xe) & 2) == 0) {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar8) {
        do {
          if (param_2 <= iVar4) {
            return;
          }
          *param_1 = *(int *)(iVar3 + 0x20) + iVar5;
          iVar4 = iVar4 + 1;
          param_1 = param_1 + 1;
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar2 < *(short *)(iVar3 + 8));
      }
    }
    else {
      iVar5 = 0;
      iVar2 = 0x7fffffff;
      if (0 < iVar8) {
        iVar6 = 0;
        do {
          psVar7 = (short *)(*(int *)(iVar3 + 0x20) + iVar6);
          if (*psVar7 == -1) {
            if (iVar4 == 0) {
              *param_1 = (int)psVar7;
              iVar4 = 1;
              iVar8 = (int)*(short *)(iVar3 + 8);
            }
          }
          else {
            iVar1 = *psVar7 * 1000;
            if ((iVar1 <= iVar2) && (param_5 <= iVar1)) {
              *param_1 = (int)psVar7;
              iVar4 = 1;
              iVar8 = (int)*(short *)(iVar3 + 8);
              iVar2 = iVar1;
            }
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar5 < iVar8);
      }
    }
  }
  return;
}

