/* Entry 0x08932AF4 | file offset 0x0012FACC | FUN_08932af4 | bytes 112 */

void FUN_08932af4(int param_1)

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
  FUN_08931eb8(param_1 + 0x38);
  FUN_089323ec(param_1 + 0x5c);
  return;
}

