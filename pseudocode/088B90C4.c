/* Entry 0x088B90C4 | file offset 0x000B609C | FUN_088b90c4 | bytes 52 */

int FUN_088b90c4(void)

{
  int iVar1;
  
  iVar1 = FUN_088b8fd0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(iVar1 + 2);
  }
  return iVar1;
}

