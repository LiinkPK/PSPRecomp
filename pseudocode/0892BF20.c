/* Entry 0x0892BF20 | file offset 0x00128EF8 | FUN_0892bf20 | bytes 116 */

void FUN_0892bf20(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  FUN_088d46e4(param_1 + 0x1a4,param_3,0,*(int *)(param_1 + 0x198) + -1,0,0xffffffff);
  *(uint *)(param_1 + 0x1a4) = *(uint *)(param_1 + 0x1a4) | 1;
  FUN_0892b544(param_1 + *(int *)(param_1 + 0x1a8) * 0x44 + 0x44);
  *(undefined4 *)(param_1 + 0x28) = 2;
  return;
}

