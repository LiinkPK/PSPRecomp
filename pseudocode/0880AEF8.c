/* Entry 0x0880AEF8 | file offset 0x00007ED0 | FUN_0880aef8 | bytes 168 */

uint FUN_0880aef8(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = DAT_08b63284 + 1;
  do {
    DAT_08b63284 = (int)uVar1 % 0xff;
    uVar1 = DAT_08b63284 + 1;
    if (((&DAT_089d4750)[uVar1 >> 5] & 1 << (uVar1 & 0x1f)) == 0) {
      uVar1 = DAT_08b63284 + 1;
      (&DAT_089d4750)[uVar1 >> 5] = (&DAT_089d4750)[uVar1 >> 5] | 1 << (uVar1 & 0x1f);
      return uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return 0;
}

