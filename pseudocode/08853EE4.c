/* Entry 0x08853EE4 | file offset 0x00050EBC | FUN_08853ee4 | bytes 44 */

void FUN_08853ee4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x20) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x20;
  } while (iVar2 < 10);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return;
}

