/* Entry 0x088DCF18 | file offset 0x000D9EF0 | FUN_088dcf18 | bytes 772 */

int * FUN_088dcf18(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int local_40;
  
  iVar4 = param_1[9];
  iVar8 = 0;
  local_40 = 0;
  if (0 < iVar4) {
    iVar11 = 0;
    do {
      iVar13 = *param_2;
      iVar4 = 0;
      if (param_1[1] != 0) {
        FUN_08935524(param_1[1] + iVar11,param_2,4);
        iVar4 = param_1[1];
      }
      param_2 = param_2 + 1;
      if (iVar4 != 0) {
        *(int *)(iVar4 + iVar11 + 4) = param_1[2] + iVar8 * 10;
        iVar4 = 0;
        if (0 < iVar13) {
          iVar10 = 0;
          piVar12 = param_2;
          do {
            iVar5 = *(int *)(param_1[1] + iVar11 + 4);
            if (param_1[7] == 1) {
              *(char *)(iVar5 + iVar10 + 1) = (char)(short)*piVar12;
              *(char *)(*(int *)(param_1[1] + iVar11 + 4) + iVar10) =
                   (char)*(undefined2 *)((int)piVar12 + 10);
              iVar7 = *(int *)(param_1[1] + iVar11 + 4) + iVar10;
              iVar5 = piVar12[1];
              uVar2 = *(undefined2 *)((int)piVar12 + 6);
              *(undefined2 *)(iVar7 + 2) = *(undefined2 *)((int)piVar12 + 2);
              iVar6 = piVar12[2];
              *(short *)(iVar7 + 4) = (short)iVar5;
              *(undefined2 *)(iVar7 + 6) = uVar2;
              *(short *)(iVar7 + 8) = (short)iVar6;
              iVar5 = param_1[8];
              pbVar9 = (byte *)(*(int *)(param_1[1] + iVar11 + 4) + iVar10);
              bVar1 = pbVar9[1];
            }
            else {
              FUN_08935524(iVar5 + iVar10,param_2,10);
              iVar5 = param_1[8];
              pbVar9 = (byte *)(*(int *)(param_1[1] + iVar11 + 4) + iVar10);
              bVar1 = pbVar9[1];
            }
            bVar3 = true;
            if ((int)(uint)bVar1 < iVar5) {
              iVar5 = *param_1 + (int)*(short *)(*param_1 + (uint)bVar1 * 4 + 2);
            }
            else {
              iVar5 = 0;
            }
            if (iVar5 != 0) {
              iVar6 = 0;
              do {
                if ((((*(char *)(iVar5 + 8) != -0x80) || (*(char *)(iVar5 + 9) != -0x80)) ||
                    (*(char *)(iVar5 + 10) != -0x80)) || (*(char *)(iVar5 + 0xb) != -1)) {
                  bVar3 = false;
                  break;
                }
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + 4;
              } while (iVar6 < 4);
              if (bVar3) {
                *pbVar9 = *pbVar9 | 4;
              }
            }
            iVar4 = iVar4 + 1;
            piVar12 = piVar12 + 3;
            iVar10 = iVar10 + 10;
          } while (iVar4 < iVar13);
        }
      }
      iVar8 = iVar8 + iVar13;
      iVar4 = param_1[9];
      if (param_1[7] == 1) {
        iVar13 = iVar13 * 0xc;
      }
      else {
        iVar13 = iVar13 * 10;
      }
      param_2 = (int *)((int)param_2 + iVar13);
      iVar11 = iVar11 + 8;
      local_40 = local_40 + 1;
    } while (local_40 < iVar4);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4 * 8;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = iVar8 * 10 + 3U & 0xfffffffc;
  }
  return param_2;
}

