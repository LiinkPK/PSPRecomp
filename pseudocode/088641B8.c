/* Entry 0x088641B8 | file offset 0x00061190 | FUN_088641b8 | bytes 136 */

void FUN_088641b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_120 [256];
  
  uVar1 = FUN_088626ac(auStack_120);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x5c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x58),auStack_120,param_3,param_4,
             param_5,param_6,uVar1);
  return;
}

