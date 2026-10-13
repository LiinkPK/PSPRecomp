/* Entry 0x08830B88 | file offset 0x0002DB60 | FUN_08830b88 | bytes 236 */

void FUN_08830b88(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)FUN_08868128(param_2,param_3,0);
  *(float *)(param_1 + 0x14) = fVar2;
  iVar1 = *(int *)(param_1 + 4);
  fVar3 = -(*(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x18));
  fVar4 = *(float *)(iVar1 + 4) + *(float *)(iVar1 + 0x14);
  if ((fVar3 <= fVar2) && (fVar3 = fVar2, fVar4 < fVar2)) {
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 0x14) = fVar3;
  fVar2 = (float)FUN_088686b0(param_3);
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = -*(float *)(*(int *)(param_1 + 4) + 0xc);
  fVar4 = *(float *)(*(int *)(param_1 + 4) + 0x10);
  if ((fVar3 <= fVar2) && (fVar3 = fVar4, fVar2 <= fVar4)) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x10) = fVar3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

