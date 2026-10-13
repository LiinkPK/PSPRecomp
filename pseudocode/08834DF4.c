/* Entry 0x08834DF4 | file offset 0x00031DCC | FUN_08834df4 | bytes 20 */

void FUN_08834df4(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x3b0) = param_1;
  *(undefined4 *)(param_2 + 0x3b4) = 0;
  *(undefined4 *)(param_2 + 0x370) = param_1;
  return;
}

