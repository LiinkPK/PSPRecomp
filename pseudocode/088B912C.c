/* Entry 0x088B912C | file offset 0x000B6104 | FUN_088b912c | bytes 60 */

bool FUN_088b912c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_088b9044();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)(iVar2 + 3) & 2) != 0;
  }
  return bVar1;
}

