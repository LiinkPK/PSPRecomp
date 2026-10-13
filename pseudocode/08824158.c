/* Entry 0x08824158 | file offset 0x00021130 | FUN_08824158 | bytes 404 */

void FUN_08824158(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_20 [2];
  
  local_20[0] = -0.5;
  local_20[1] = -3.0;
  iVar1 = FUN_08822d30(param_2);
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar1 = ((*(uint *)(param_2 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
    if (0 < iVar1) {
      iVar3 = 0;
      do {
        iVar4 = *(int *)(param_2 + 0x28) + iVar3;
        if ((((int)*(char *)(iVar4 + 299) & 2U) == 0) &&
           (fVar5 = *(float *)(iVar4 + 0x11c), fVar5 != 0.0)) {
          if (fVar5 < 0.0) {
            fVar7 = -1.0;
          }
          else {
            fVar7 = 1.0;
          }
          fVar7 = *(float *)((int)local_20 + ((int)*(char *)(iVar4 + 299) & 4U)) * fVar7;
          if (fVar5 + fVar7 * param_1 <= 0.0) {
            fVar6 = -fVar5 / fVar7;
            *(undefined4 *)(iVar4 + 0x11c) = 0;
            fVar8 = *(float *)(iVar4 + 0x118);
            fVar5 = fVar6 * fVar5 + fVar7 * fVar6 * fVar6 * 0.5;
          }
          else {
            fVar8 = *(float *)(iVar4 + 0x118);
            *(float *)(iVar4 + 0x11c) = fVar5 + fVar7 * param_1;
            fVar5 = param_1 * fVar5 + fVar7 * param_1 * param_1 * 0.5;
          }
          *(float *)(iVar4 + 0x118) = fVar8 + fVar5 * 3.0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x130;
      } while (iVar2 < iVar1);
    }
  }
  return;
}

