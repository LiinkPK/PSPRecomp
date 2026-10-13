/* Entry 0x08925A58 | file offset 0x00122A30 | FUN_08925a58 | bytes 160 */

void FUN_08925a58(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_08899300();
  FUN_088983c8(uVar1,(int)*(char *)(*(int *)(param_1 + 4) + 0xc),1);
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x28) = 1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x20) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x18) = 0x3f800000;
  *(float *)(*(int *)(param_1 + 4) + 0x14) = -1.0 / (float)*(int *)(*(int *)(param_1 + 4) + 0x20);
  FUN_08925af8(param_1);
  return;
}

