/* Entry 0x088718F0 | file offset 0x0006E8C8 | FUN_088718f0 | bytes 72 */

void FUN_088718f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1[1] + 0x154);
  (**(code **)(iVar1 + 0xf4))(param_1[1] + (int)*(short *)(iVar1 + 0xf0),*param_1);
  *param_1 = 0xffffffff;
  return;
}

