/* Entry 0x088B8D64 | file offset 0x000B5D3C | FUN_088b8d64 | bytes 68 */

void FUN_088b8d64(void)

{
  int iVar1;
  
  iVar1 = FUN_088b8fd0();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 3) & 2) == 0)) {
    *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 2;
  }
  return;
}

