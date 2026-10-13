/* Entry 0x08984508 | file offset 0x001814E0 | FUN_08984508 | bytes 92 */

void FUN_08984508(int param_1,undefined4 param_2)

{
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x10) + *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
  FUN_08984574(param_1);
  FUN_08984b40(param_1,param_2);
  return;
}

