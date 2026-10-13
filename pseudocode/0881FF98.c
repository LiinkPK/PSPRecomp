/* Entry 0x0881FF98 | file offset 0x0001CF70 | FUN_0881ff98 | bytes 536 */

void FUN_0881ff98(float param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  fVar3 = (float)FUN_0881fcc4();
  fVar4 = (float)FUN_0881fce8(param_2);
  fVar5 = (float)FUN_0881fc58(param_2);
  if (((0.0 <= fVar3) && (0.0 <= fVar4)) && (0.0 < fVar5)) {
    fVar7 = *(float *)(param_2 + 0x18);
    param_1 = *(float *)(param_2 + 0x14) + param_1;
    *(float *)(param_2 + 0x14) = param_1;
    if (fVar7 <= param_1) {
      do {
        uVar1 = *(int *)(param_2 + 0x10) + 1;
        *(float *)(param_2 + 0x14) = param_1 - fVar7;
        if ((int)uVar1 < 0) {
          uVar1 = -(-uVar1 & 3);
        }
        else {
          uVar1 = uVar1 & 3;
        }
        *(uint *)(param_2 + 0x10) = uVar1;
        if ((int)uVar1 < 2) {
          if (-1 < (int)uVar1) {
            if ((int)uVar1 < 1) {
              *(float *)(param_2 + 0x18) = fVar3;
              fVar7 = fVar3;
            }
            else {
              *(float *)(param_2 + 0x18) = fVar5;
              uVar6 = FUN_0881fca0(param_2);
              *(undefined4 *)(param_2 + 0x20) = uVar6;
              fVar7 = *(float *)(param_2 + 0x18);
            }
          }
        }
        else if ((int)uVar1 < 3) {
          *(float *)(param_2 + 0x18) = fVar4;
          fVar7 = fVar4;
        }
        else if ((int)uVar1 < 4) {
          *(float *)(param_2 + 0x18) = fVar5;
          uVar6 = FUN_0881fc7c(param_2);
          *(undefined4 *)(param_2 + 0x1c) = uVar6;
          fVar7 = *(float *)(param_2 + 0x18);
        }
        param_1 = *(float *)(param_2 + 0x14);
      } while (fVar7 <= param_1);
    }
    if (fVar7 != 0.0) {
      iVar2 = *(int *)(param_2 + 0x10);
      if (iVar2 < 2) {
        if (-1 < iVar2) {
          fVar3 = *(float *)(param_2 + 0x1c);
          if (iVar2 < 1) {
            *(float *)(param_2 + 0x34) = fVar3;
          }
          else {
            *(float *)(param_2 + 0x34) =
                 (*(float *)(param_2 + 0x20) - fVar3) * (param_1 / fVar7) + fVar3;
          }
        }
      }
      else if (iVar2 < 3) {
        *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x20);
      }
      else if (iVar2 < 4) {
        *(float *)(param_2 + 0x34) =
             (*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x20)) * (param_1 / fVar7) +
             *(float *)(param_2 + 0x20);
      }
    }
  }
  return;
}

