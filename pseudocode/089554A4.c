/* Entry 0x089554A4 | file offset 0x0015247C | FUN_089554a4 | bytes 408 */

void FUN_089554a4(int *param_1,int param_2,float *param_3,undefined4 param_4,short *param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_20 [4];
  
  iVar2 = (int)*param_5;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + iVar2 * 4) + 0x10);
    }
  }
  if (iVar3 != -1) {
    if (iVar2 < 0) {
      fVar6 = 0.0;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34);
      if (iVar3 == 0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = **(float **)(iVar3 + iVar2 * 4);
      }
    }
    uVar4 = *(undefined4 *)(param_2 + 0xa8);
    if (param_5[1] < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_08973e20(*(undefined4 *)(param_2 + 0xa8),
                           *(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x3c) +
                                     param_5[1] * 4) + 0x10),(int)param_5[2],auStack_20);
    }
    if (iVar2 != 0) {
      pfVar1 = (float *)FUN_08973e78(uVar4,*(undefined4 *)
                                            (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) +
                                                                       0x1c8) + 0x3c) +
                                                     param_5[1] * 4) + 0x10),
                                     *(undefined4 *)(iVar2 + *param_1 * 4));
      *param_3 = *pfVar1 * fVar6;
      param_3[1] = pfVar1[1] * fVar6;
      fVar5 = pfVar1[2];
      param_3[3] = 1.0;
      param_3[2] = fVar5 * fVar6;
    }
  }
  return;
}

