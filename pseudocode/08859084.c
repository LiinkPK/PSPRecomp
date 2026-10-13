/* Entry 0x08859084 | file offset 0x0005605C | FUN_08859084 | bytes 48 */

void FUN_08859084(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined1 *)(iVar1 + 0x28) = 0;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x40;
  } while (iVar2 < 10);
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  return;
}

