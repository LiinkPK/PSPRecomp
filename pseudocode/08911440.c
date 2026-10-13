/* Entry 0x08911440 | file offset 0x0010E418 | FUN_08911440 | bytes 144 */

void FUN_08911440(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 + 8;
  do {
    FUN_08911a2c(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x14;
  } while (iVar1 < 8);
  iVar1 = 0;
  iVar2 = param_1 + 0xa8;
  do {
    FUN_08911e20(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x28;
  } while (iVar1 < 4);
  iVar1 = 0;
  param_1 = param_1 + 0x148;
  do {
    FUN_0892e7ec(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x14;
  } while (iVar1 < 1);
  return;
}

