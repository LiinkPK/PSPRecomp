/* Entry 0x088B8E14 | file offset 0x000B5DEC | FUN_088b8e14 | bytes 68 */

void FUN_088b8e14(void)

{
  int iVar1;
  
  iVar1 = FUN_088b9004();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 3) & 2) == 0)) {
    *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) | 2;
  }
  return;
}

