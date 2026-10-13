/* Entry 0x088364F4 | file offset 0x000334CC | FUN_088364f4 | bytes 108 */

void FUN_088364f4(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_2 + 0x300) != 0) {
    FUN_08836dac(param_2,*(int *)(param_2 + 0x300),auStack_20);
    FUN_08836120(param_1,param_2,auStack_20,param_3);
  }
  return;
}

