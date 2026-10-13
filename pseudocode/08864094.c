/* Entry 0x08864094 | file offset 0x0006106C | FUN_08864094 | bytes 160 */

void FUN_08864094(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_120 [256];
  
  (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x108),auStack_120,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x5c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x58),auStack_120,param_3,param_4,
             param_5,param_6,0);
  return;
}

