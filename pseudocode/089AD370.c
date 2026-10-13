/* Entry 0x089AD370 | file offset 0x001AA348 | FUN_089ad370 | bytes 84 */

void FUN_089ad370(void)

{
  uint *puVar1;
  uint uVar2;
  
  if (DAT_09af719c != (uint *)0x0) {
    uVar2 = DAT_09af719c[4];
    puVar1 = DAT_09af719c;
    while( true ) {
      if (uVar2 != puVar1[5]) {
        *puVar1 = uVar2 & 0xffffff | 0x5c000000;
        puVar1[1] = uVar2 >> 0x18 | 0x5d000000;
        puVar1[5] = uVar2;
      }
      puVar1 = (uint *)puVar1[7];
      if (puVar1 == (uint *)0x0) break;
      uVar2 = puVar1[4];
    }
  }
  return;
}

