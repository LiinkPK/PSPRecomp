/* Entry 0x08917E04 | file offset 0x00114DDC | FUN_08917e04 | bytes 116 */

void FUN_08917e04(int param_1,undefined4 param_2)

{
  FUN_0886503c(param_1 + 0x100,FUN_08917d64,&LAB_08917da0,0);
  FUN_0886504c(param_1 + 0x100,param_1,0x100);
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x134) = param_2;
  return;
}

