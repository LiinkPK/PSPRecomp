/* Entry 0x08842A5C | file offset 0x0003FA34 | FUN_08842a5c | bytes 468 */

void FUN_08842a5c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = FUN_088bf4cc(param_3,0xe9);
  if (iVar1 != 0) {
    fVar4 = *(float *)(param_1 + 0x18) + (float)((*(short *)(iVar1 + 4) * 10000) / 100);
    fVar5 = 0.0;
    if ((0.0 <= fVar4) && (fVar5 = fVar4, 10000.0 < fVar4)) {
      fVar5 = 10000.0;
    }
    *(float *)(param_1 + 0x18) = fVar5;
  }
  iVar1 = FUN_088bf4cc(param_3,0xe7);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    iVar1 = (iVar2 * (*(short *)(iVar1 + 4) + 100)) / 100;
    if (iVar1 < iVar3) {
      iVar1 = iVar2 - iVar1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (iVar2 + -1 < iVar1) {
        iVar1 = iVar2 + -1;
      }
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  iVar1 = FUN_088bf4cc(param_3,1);
  if (iVar1 != 0) {
    fVar4 = *(float *)(param_1 + 0x1c) + (float)((*(short *)(iVar1 + 4) * 10000) / 100);
    fVar5 = 0.0;
    if ((0.0 <= fVar4) && (fVar5 = fVar4, 10000.0 < fVar4)) {
      fVar5 = 10000.0;
    }
    *(float *)(param_1 + 0x1c) = fVar5;
  }
  return;
}

