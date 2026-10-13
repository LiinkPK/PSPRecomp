/* Entry 0x0892B9C8 | file offset 0x001289A0 | FUN_0892b9c8 | bytes 156 */

void FUN_0892b9c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0892ac2c();
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 4);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    iVar1 = iVar1 + 0x44;
    FUN_0892b0ec(iVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  return;
}

