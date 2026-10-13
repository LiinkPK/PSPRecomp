/* Entry 0x0886350C | file offset 0x000604E4 | FUN_0886350c | bytes 112 */

void FUN_0886350c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_110 [256];
  
  FUN_0893476c(auStack_110,"data/%s",param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xcc))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 200),auStack_110,param_3,param_4);
  return;
}

