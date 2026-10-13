/* Entry 0x0888E734 | file offset 0x0008B70C | FUN_0888e734 | bytes 104 */

void FUN_0888e734(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x138) = param_2;
  *(undefined4 *)(param_1 + 0x134) = param_2;
  iVar1 = param_1 + 0x100;
  FUN_0886503c(iVar1,FUN_0888e9c0,FUN_0888e9e0,0);
  FUN_0886504c(iVar1,param_1,0x100);
  FUN_088650a4(iVar1);
  return;
}

