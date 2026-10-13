/* Entry 0x0898E194 | file offset 0x0018B16C | FUN_0898e194 | bytes 404 */

void FUN_0898e194(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(int *)(param_2 + 0x50) < 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_09b6f478 + 0x88) + 0x1c8) + 0x38);
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + *(int *)(param_2 + 0x50) * 4) + 0x10);
      }
    }
    if (iVar2 != -1) {
      fVar6 = *(float *)(param_1 + 100) + *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
      piVar4 = *(int **)(**(int **)(DAT_09b6f478 + 0x9c) + iVar2 * 4);
      *(float *)(param_1 + 100) = fVar6;
      iVar2 = *piVar4;
      fVar5 = (float)*(int *)(param_2 + 0x54);
      if (*(int *)(param_2 + 0x54) < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      fVar6 = fVar6 * fVar5;
      if ((float)*(int *)(iVar2 + 0x1c) <= fVar6) {
        if ((*(uint *)(iVar2 + 0x10) & 0x80) == 0) {
          *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
          return;
        }
        fVar6 = (float)((int)fVar6 % (int)(float)*(int *)(iVar2 + 0x1c));
        *(float *)(param_1 + 100) = fVar6;
        iVar2 = *piVar4;
        fVar5 = (float)*(int *)(param_2 + 0x54);
        if (*(int *)(param_2 + 0x54) < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar6 = fVar6 * fVar5;
        iVar3 = *(int *)(iVar2 + 0x34);
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x34);
      }
      iVar1 = 0;
      fVar5 = (float)*(int *)(iVar2 + iVar3 + 8);
      iVar2 = iVar2 + iVar3;
      while (fVar5 <= fVar6) {
        iVar1 = iVar1 + 1;
        fVar5 = fVar5 + (float)*(int *)(iVar2 + 0x14);
        iVar2 = iVar2 + 0xc;
      }
      *(int *)(param_1 + 0x68) = iVar1;
    }
  }
  return;
}

