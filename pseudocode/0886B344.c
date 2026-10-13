/* Entry 0x0886B344 | file offset 0x0006831C | FUN_0886b344 | bytes 144 */

float FUN_0886b344(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
  if (param_2 < 0) {
    param_2 = FUN_089b0d2c(uVar3);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
  }
  iVar1 = FUN_089b0f44(uVar3,param_2);
  fVar4 = 0.0;
  if (iVar1 != 0) {
    iVar2 = FUN_089b183c(iVar1);
    fVar4 = *(float *)(iVar2 + 4);
    fVar5 = (float)FUN_089b1848(iVar1);
    fVar4 = fVar4 * (60.0 / fVar5);
  }
  return fVar4;
}

