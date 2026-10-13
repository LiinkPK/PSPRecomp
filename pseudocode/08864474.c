/* Entry 0x08864474 | file offset 0x0006144C | FUN_08864474 | bytes 104 */

void FUN_08864474(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_110 [256];
  
  uVar1 = FUN_088626ac(auStack_110);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xa4))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0xa0),auStack_110,param_3,param_4,
             uVar1);
  return;
}

