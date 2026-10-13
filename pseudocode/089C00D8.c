/* Entry 0x089C00D8 | file offset 0x001BD0B0 | FUN_089c00d8 | bytes 44 */

bool FUN_089c00d8(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (0x11 < param_2)) {
    bVar1 = (*(byte *)(param_1 + 2) & 0xfffffff7) - 1 < 2;
  }
  return bVar1;
}

