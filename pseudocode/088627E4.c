/* Entry 0x088627E4 | file offset 0x0005F7BC | FUN_088627e4 | bytes 112 */

void FUN_088627e4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0886362c(param_2);
  *(int *)(param_1 + 4) = iVar1;
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x154) + 8));
  FUN_08871394(DAT_089d5ff0,*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 8) = DAT_089d5ff0;
  *(undefined4 *)(param_1 + 0xc) = DAT_089d5fb4;
  return;
}

