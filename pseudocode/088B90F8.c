/* Entry 0x088B90F8 | file offset 0x000B60D0 | FUN_088b90f8 | bytes 52 */

int FUN_088b90f8(void)

{
  int iVar1;
  
  iVar1 = FUN_088b9004();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(iVar1 + 2);
  }
  return iVar1;
}

