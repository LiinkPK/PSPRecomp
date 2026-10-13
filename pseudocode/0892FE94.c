/* Entry 0x0892FE94 | file offset 0x0012CE6C | FUN_0892fe94 | bytes 100 */

void FUN_0892fe94(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0892ac2c();
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 1);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 1);
  return;
}

