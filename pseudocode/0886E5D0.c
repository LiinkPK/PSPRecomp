/* Entry 0x0886E5D0 | file offset 0x0006B5A8 | FUN_0886e5d0 | bytes 668 */

void FUN_0886e5d0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int local_3c;
  
  if ((**(int **)(param_1 + 0x84) != 0) && (local_3c = 0, 0 < param_2)) {
    do {
      iVar8 = 0;
      DAT_09b26b0c = DAT_09b26b0c * 0x343fd + 0x269ec3;
      uVar9 = DAT_09b26b0c >> 0x10;
      iVar7 = **(int **)(param_1 + 0x84);
      if (0 < (*(int **)(param_1 + 0x84))[1]) {
        do {
          if (*(int *)(iVar7 + 0x24) != (int)*(short *)(iVar7 + 0x4a)) {
            FUN_0886a9b0(param_1,iVar8,*(int *)(iVar7 + 0x24),0xffffffff);
          }
          sVar1 = *(short *)(iVar7 + 0x46);
          if (sVar1 < 1) {
            if (sVar1 < 0) goto LAB_0886e80c;
            iVar2 = 0;
            sVar1 = *(short *)(iVar7 + 0x4a);
            while( true ) {
              uVar3 = *(uint *)(*(int *)(*(int *)(iVar7 + 0x58) + sVar1 * 4) +
                               *(short *)(iVar7 + 0x4c) * 4);
              if ((uVar3 & 3) == 0) break;
              iVar2 = iVar2 + 1;
              *(short *)(iVar7 + 0x4c) = *(short *)(iVar7 + 0x4c) - (short)(uVar3 >> 2);
              if (9 < iVar2) goto LAB_0886e7b8;
              sVar1 = *(short *)(iVar7 + 0x4a);
            }
            uVar5 = (uVar3 & 0x3ff000) >> 0xc;
            if (uVar5 == uVar3 >> 0x16) {
              *(short *)(iVar7 + 0x4e) = (short)uVar5;
              sVar1 = *(short *)(iVar7 + 0x30);
            }
            else {
              *(short *)(iVar7 + 0x4e) =
                   (short)((int)(uVar9 & 0x7fff) % (int)((uVar3 >> 0x16) - uVar5)) + (short)uVar5;
              sVar1 = *(short *)(iVar7 + 0x30);
            }
            iVar4 = ((uVar3 & 0x7c) >> 2) << 4;
            iVar6 = ((uVar3 & 0xf80) >> 7) << 4;
            if ((sVar1 != iVar4) || (*(short *)(iVar7 + 0x32) != iVar6)) {
              *(short *)(iVar7 + 0x30) = (short)iVar4;
              *(short *)(iVar7 + 0x32) = (short)iVar6;
              *(undefined2 *)(iVar7 + 0x44) = 1;
            }
LAB_0886e7b8:
            if (iVar2 != 10) {
              *(undefined2 *)(iVar7 + 0x46) = 1;
              goto LAB_0886e7d8;
            }
            *(undefined2 *)(iVar7 + 0x44) = 0;
            *(undefined2 *)(iVar7 + 0x46) = 2;
            iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
          }
          else if (sVar1 < 2) {
LAB_0886e7d8:
            *(short *)(iVar7 + 0x4e) = *(short *)(iVar7 + 0x4e) + -1;
            if (*(short *)(iVar7 + 0x4e) < 1) {
              *(undefined2 *)(iVar7 + 0x46) = 0;
              *(short *)(iVar7 + 0x4c) = *(short *)(iVar7 + 0x4c) + 1;
            }
            iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
          }
          else {
LAB_0886e80c:
            iVar2 = *(int *)(*(int *)(param_1 + 0x84) + 4);
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + 0x60;
        } while (iVar8 < iVar2);
      }
      local_3c = local_3c + 1;
    } while (local_3c < param_2);
  }
  return;
}

