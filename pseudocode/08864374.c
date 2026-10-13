/* Entry 0x08864374 | file offset 0x0006134C | FUN_08864374 | bytes 128 */

void FUN_08864374(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_110 [256];
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x108),auStack_110,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xa4))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xa0),auStack_110,param_3,param_4,0);
  return;
}

