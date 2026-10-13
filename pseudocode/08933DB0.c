/* Entry 0x08933DB0 | file offset 0x00130D88 | FUN_08933db0 | bytes 100 */

void FUN_08933db0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x134) = param_2;
  iVar1 = param_1 + 0x100;
  FUN_0886503c(iVar1,FUN_08933f10,FUN_08933f30,0);
  FUN_088650a4(iVar1);
  FUN_0886504c(iVar1,param_1,0x100);
  return;
}

