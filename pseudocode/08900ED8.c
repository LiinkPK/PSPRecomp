/* Entry 0x08900ED8 | file offset 0x000FDEB0 | FUN_08900ed8 | bytes 60 */

bool FUN_08900ed8(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_08900d68();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(ushort *)(iVar2 + 0xe) & 0x10) != 0;
  }
  return bVar1;
}

