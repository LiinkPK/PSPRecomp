/* Entry 0x0886402C | file offset 0x00061004 | FUN_0886402c | bytes 104 */

void FUN_0886402c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_110 [256];
  
  uVar1 = FUN_088626ac(auStack_110);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x34))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x30),auStack_110,param_3,param_4,
             uVar1);
  return;
}

