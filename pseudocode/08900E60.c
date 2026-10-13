/* Entry 0x08900E60 | file offset 0x000FDE38 | FUN_08900e60 | bytes 60 */

bool FUN_08900e60(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_08900d68();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(ushort *)(iVar2 + 0xe) & 2) != 0;
  }
  return bVar1;
}

