/* Entry 0x0886B464 | file offset 0x0006843C | FUN_0886b464 | bytes 104 */

bool FUN_0886b464(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
  if (param_2 < 0) {
    param_2 = FUN_089b0d2c(uVar2);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 8);
  }
  uVar2 = FUN_089b0f44(uVar2,param_2);
  iVar1 = FUN_089b185c(uVar2);
  return iVar1 == 1;
}

