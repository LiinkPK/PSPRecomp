/* Entry 0x0895477C | file offset 0x00151754 | FUN_0895477c | bytes 412 */

void FUN_0895477c(int param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_20 [4];
  
  iVar2 = (int)*(short *)(param_3 + 0x10);
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x34);
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
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x34);
      if (iVar3 == 0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = **(float **)(iVar3 + iVar2 * 4);
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0xa8);
    if (*(short *)(param_3 + 0x12) < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_08973e20(*(undefined4 *)(param_1 + 0xa8),
                           *(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x3c) +
                                     *(short *)(param_3 + 0x12) * 4) + 0x10),
                           (int)*(short *)(param_3 + 0x14),auStack_20);
    }
    if (iVar2 != 0) {
      pfVar1 = (float *)FUN_08973e78(uVar4,*(undefined4 *)
                                            (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x88) +
                                                                       0x1c8) + 0x3c) +
                                                     *(short *)(param_3 + 0x12) * 4) + 0x10),
                                     *(undefined4 *)(iVar2 + *(int *)(param_4 + 0x10) * 4));
      *param_2 = *pfVar1 * fVar6;
      param_2[1] = pfVar1[1] * fVar6;
      fVar5 = pfVar1[2];
      param_2[3] = 1.0;
      param_2[2] = fVar5 * fVar6;
    }
  }
  return;
}

