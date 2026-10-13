/* Entry 0x08900E9C | file offset 0x000FDE74 | FUN_08900e9c | bytes 60 */

bool FUN_08900e9c(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_08900d68();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(ushort *)(iVar2 + 0xe) & 8) != 0;
  }
  return bVar1;
}

