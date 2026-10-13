/* Entry 0x088B8EB8 | file offset 0x000B5E90 | FUN_088b8eb8 | bytes 80 */

void FUN_088b8eb8(void)

{
  int iVar1;
  
  iVar1 = FUN_088b9084();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 1) & 1) == 0)) {
    *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 1;
    *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) | 2;
  }
  return;
}

