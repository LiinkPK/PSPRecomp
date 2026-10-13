/* Entry 0x088C0674 | file offset 0x000BD64C | FUN_088c0674 | bytes 64 */

int FUN_088c0674(int param_1)

{
  int iVar1;
  
  iVar1 = (10 - param_1) * 10;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x96 < iVar1) {
    iVar1 = 0x96;
  }
  return iVar1;
}

