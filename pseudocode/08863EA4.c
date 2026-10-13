/* Entry 0x08863EA4 | file offset 0x00060E7C | FUN_08863ea4 | bytes 128 */

void FUN_08863ea4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_110 [256];
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x108),auStack_110,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x34))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x30),auStack_110,param_3,param_4,0);
  return;
}

