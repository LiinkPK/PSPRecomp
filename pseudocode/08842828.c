/* Entry 0x08842828 | file offset 0x0003F800 | FUN_08842828 | bytes 88 */

int FUN_08842828(int param_1,char param_2,char param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 == '\x01') {
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      iVar1 = 10000;
    }
    if (param_3 == '\x01') {
      iVar1 = iVar1 + 30000;
    }
  }
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    iVar1 = iVar1 + 50000;
  }
  return iVar1;
}

