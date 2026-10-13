/* Entry 0x08912444 | file offset 0x0010F41C | FUN_08912444 | bytes 84 */

void FUN_08912444(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x110) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 8);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x270) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 4);
  FUN_08912498();
  return;
}

