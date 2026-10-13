/* Entry 0x088645DC | file offset 0x000615B4 | FUN_088645dc | bytes 128 */

void FUN_088645dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_110 [256];
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x108),auStack_110,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xdc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xd8),auStack_110,param_3,param_4,0);
  return;
}

