/* Entry 0x0885AF4C | file offset 0x00057F24 | FUN_0885af4c | bytes 44 */

void FUN_0885af4c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x40) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x40;
  } while (iVar2 < 300);
  *(undefined4 *)(param_1 + 0x4b14) = 0;
  *(undefined4 *)(param_1 + 0x4b10) = 0;
  return;
}

