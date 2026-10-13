/* Entry 0x0886336C | file offset 0x00060344 | FUN_0886336c | bytes 144 */

void FUN_0886336c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_120 [256];
  
  FUN_0893476c(auStack_120,"data/%s",param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x44))
            (param_1 + *(short *)(*(int *)(param_1 + 0x154) + 0x40),auStack_120,param_3,param_4,
             param_5,param_6);
  return;
}

