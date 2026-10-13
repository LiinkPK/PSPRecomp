/* Entry 0x08983840 | file offset 0x00180818 | FUN_08983840 | bytes 88 */

void FUN_08983840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4[1] + 4);
  (**(code **)(iVar1 + 0x14))(param_4[1] + (int)*(short *)(iVar1 + 0x10),param_3);
  FUN_0898a448(*param_4,param_3);
  return;
}

