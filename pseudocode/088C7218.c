/* Entry 0x088C7218 | file offset 0x000C41F0 | FUN_088c7218 | bytes 92 */

void FUN_088c7218(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088c6fd4(param_1);
  iVar2 = 0;
  iVar1 = param_1 + 0x80;
  do {
    FUN_088c6f68(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x3c;
  } while (iVar2 < 3);
  *(undefined4 *)(param_1 + 0x134) = 0;
  return;
}

