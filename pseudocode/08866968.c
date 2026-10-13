/* Entry 0x08866968 | file offset 0x00063940 | FUN_08866968 | bytes 212 */

void FUN_08866968(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x710) + 0x24);
  (**(code **)(iVar1 + 0x1c))(*(int *)(param_1 + 0x710) + (int)*(short *)(iVar1 + 0x18));
  FUN_0885c488(*(undefined4 *)(param_1 + 0x710));
  *(undefined4 *)(param_1 + 0x710) = 0;
  FUN_0888208c(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_0899b6b0(0,0);
  FUN_089ba5bc(0,0,0x10,0);
  FUN_0899b6f4(0,0);
  FUN_089ba5f8(0,0,0x10,0);
  FUN_08940360(0,0);
  FUN_089ab464(0,0,0x10,0);
  FUN_089403a0(0,0);
  FUN_089ab4a0(0,0,0x10,0);
  return;
}

