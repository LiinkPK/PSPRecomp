/* Entry 0x0898E78C | file offset 0x0018B764 | FUN_0898e78c | bytes 304 */

void FUN_0898e78c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = -*(float *)(DAT_089da27c + 0x30) - *(float *)(param_1 + 0x20);
  fVar2 = -*(float *)(DAT_089da27c + 0x34) - *(float *)(param_1 + 0x24);
  fVar1 = -*(float *)(DAT_089da27c + 0x38) - *(float *)(param_1 + 0x28);
  fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar1 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (*(float *)(param_2 + 0x60) + *(float *)(param_2 + 100) < fVar1) {
    FUN_0898e564(param_1,param_2,1);
  }
  return;
}

