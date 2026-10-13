/* Entry 0x0891F640 | file offset 0x0011C618 | FUN_0891f640 | bytes 72 */

bool FUN_0891f640(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(short *)(param_1 + 0xc);
  if (uVar2 == 0xffffffff) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(uint *)(DAT_089d726c + (uVar2 >> 5) * 4) & 1 << (uVar2 & 0x1f)) != 0;
  }
  return bVar1;
}

