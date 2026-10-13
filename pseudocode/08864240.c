/* Entry 0x08864240 | file offset 0x00061218 | FUN_08864240 | bytes 96 */

void FUN_08864240(int param_1,undefined4 param_2)

{
  undefined1 auStack_110 [256];
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x108),auStack_110,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x7c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x78),auStack_110,0);
  return;
}

