/* Entry 0x0892F434 | file offset 0x0012C40C | FUN_0892f434 | bytes 184 */

void FUN_0892f434(int param_1)

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
  } while (iVar2 < 2);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 1);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x38) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 1);
  iVar1 = 0;
  iVar2 = param_1 + 0x3c;
  do {
    FUN_0892eba4(iVar2);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x10c;
  } while (iVar1 < 1);
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return;
}

