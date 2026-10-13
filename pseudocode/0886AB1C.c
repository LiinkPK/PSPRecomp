/* Entry 0x0886AB1C | file offset 0x00067AF4 | FUN_0886ab1c | bytes 328 */

void FUN_0886ab1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (((*(uint *)(param_1 + 0x90) & 1) == 0) && (param_2 != 0)) {
    FUN_0886cb0c(param_1,0x11,0);
    FUN_0886cb0c(param_1,0x12,0);
    FUN_0886cb0c(param_1,0x10,0);
    iVar1 = FUN_0886f008(param_2);
    if (iVar1 != 0) {
      uVar2 = FUN_0886f094(param_2);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
      fVar4 = (float)FUN_0886f0a4(param_2);
      FUN_089b18fc(fVar4 * DAT_09b26b10,uVar3,uVar2);
      fVar4 = (float)FUN_0886f0ac(param_2);
      if (0.0 < fVar4) {
        uVar2 = FUN_089b0f44(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),uVar2);
        fVar4 = (float)FUN_0886f0ac(param_2);
        FUN_089b0d1c(fVar4 * 0.5,uVar2);
      }
      FUN_0886f014(param_2);
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
    fVar4 = (float)FUN_0886f09c(param_2);
    FUN_089b296c(fVar4 * DAT_09b26b10,uVar2);
    FUN_089b2c14(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
  }
  return;
}

