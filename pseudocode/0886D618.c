/* Entry 0x0886D618 | file offset 0x0006A5F0 | FUN_0886d618 | bytes 700 */

void FUN_0886d618(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_3c;
  
  iVar13 = **(int **)(param_1 + 0x84);
  if (iVar13 != 0) {
    iVar11 = (*(int **)(param_1 + 0x84))[1];
    local_3c = 0;
    if (0 < iVar11) {
      do {
        if (*(short *)(iVar13 + 0x44) == 0) {
LAB_0886d88c:
          iVar13 = iVar13 + 0x60;
        }
        else if ((((*(short *)(iVar13 + 0x2c) != 0) && (*(short *)(iVar13 + 0x2e) != 0)) &&
                 (*(int *)(iVar13 + 0x34) != 0)) && (*(int *)(iVar13 + 0x38) != 0)) {
          iVar11 = FUN_089bcd44(*(int *)(iVar13 + 0x34));
          iVar1 = FUN_089bcd44(*(undefined4 *)(iVar13 + 0x38));
          if ((iVar11 != 0) && (iVar1 != 0)) {
            iVar2 = FUN_089bd078(iVar11);
            iVar3 = FUN_089bd078(iVar1);
            if (iVar3 < iVar2) {
              iVar2 = iVar3;
            }
            uVar4 = FUN_089bd0fc(*(undefined4 *)(iVar13 + 0x34));
            uVar5 = FUN_089bd0fc(*(undefined4 *)(iVar13 + 0x38));
            iVar3 = FUN_089bd008(iVar11);
            if (iVar3 < 5) {
              if (iVar3 < 4) {
LAB_0886d77c:
                iVar3 = 0;
              }
              else {
                iVar3 = 2;
              }
            }
            else {
              if (5 < iVar3) goto LAB_0886d77c;
              iVar3 = 1;
            }
            uVar12 = 0;
            if (0 < iVar2) {
              do {
                iVar6 = FUN_089bd08c(iVar11,uVar12,uVar4);
                iVar7 = FUN_089bd08c(iVar1,uVar12,uVar5);
                if ((iVar6 != 0) && (iVar7 != 0)) {
                  uVar8 = FUN_089bd1bc(iVar11,uVar12);
                  iVar9 = FUN_089bd030(iVar11,uVar8);
                  uVar8 = FUN_089bd1bc(iVar1,uVar12);
                  iVar10 = FUN_089bd030(iVar1,uVar8);
                  FUN_089a09a8(1,((int)*(short *)(iVar13 + 0x30) >> iVar3) >> (uVar12 & 0x1f),
                               (int)*(short *)(iVar13 + 0x32) >> (uVar12 & 0x1f),
                               ((int)*(short *)(iVar13 + 0x2c) >> iVar3) >> (uVar12 & 0x1f),
                               (int)*(short *)(iVar13 + 0x2e) >> (uVar12 & 0x1f),iVar9 >> iVar3,
                               iVar6,((int)*(short *)(iVar13 + 0x28) >> iVar3) >> (uVar12 & 0x1f),
                               (int)*(short *)(iVar13 + 0x2a) >> (uVar12 & 0x1f),iVar10 >> iVar3,
                               iVar7);
                }
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < iVar2);
            }
            FUN_089a0fc8();
            *(undefined2 *)(iVar13 + 0x44) = 0;
            iVar11 = *(int *)(*(int *)(param_1 + 0x84) + 4);
            goto LAB_0886d88c;
          }
          iVar11 = *(int *)(*(int *)(param_1 + 0x84) + 4);
        }
        local_3c = local_3c + 1;
      } while (local_3c < iVar11);
    }
  }
  return;
}

