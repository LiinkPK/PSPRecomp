/* Entry 0x089323EC | file offset 0x0012F3C4 | FUN_089323ec | bytes 132 */

void FUN_089323ec(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08931da0();
  iVar1 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x10) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 4);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x20) = 0;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 6);
  iVar2 = 0;
  do {
    *(undefined2 *)(param_1 + 0x38) = 0xffff;
    *(undefined2 *)(param_1 + 0x3a) = 0xffff;
    *(undefined2 *)(param_1 + 0x3c) = 0xffff;
    *(undefined2 *)(param_1 + 0x3e) = 0xffff;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 8;
  } while (iVar2 < 5);
  return;
}

