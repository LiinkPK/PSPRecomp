/* Entry 0x0892CC78 | file offset 0x00129C50 | FUN_0892cc78 | bytes 144 */

void FUN_0892cc78(int param_1)

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
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = 0;
  iVar2 = param_1 + 0x38;
  do {
    FUN_0892c758(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x28;
  } while (iVar1 < 2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

