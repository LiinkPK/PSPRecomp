/* Entry 0x08900F14 | file offset 0x000FDEEC | FUN_08900f14 | bytes 60 */

bool FUN_08900f14(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_08900d84();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(*(int *)(iVar2 + 0xc) + 8) != '\0';
  }
  return bVar1;
}

