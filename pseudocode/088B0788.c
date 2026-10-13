/* Entry 0x088B0788 | file offset 0x000AD760 | FUN_088b0788 | bytes 848 */

void FUN_088b0788(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = DAT_089d726c;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x80);
  iVar2 = 0;
  puVar1 = DAT_089d726c + 0x80;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x20);
  *DAT_089d726c = *DAT_089d726c | 2;
  *DAT_089d726c = *DAT_089d726c | 0x4000;
  DAT_089d726c[0x15] = DAT_089d726c[0x15] | 0x10000000;
  DAT_089d726c[0x15] = DAT_089d726c[0x15] | 0x40000000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 1;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 4;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x10;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x40;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x100;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x400;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x1000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x4000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x40000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x100000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x200000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x400000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x1000000;
  DAT_089d726c[0x16] = DAT_089d726c[0x16] | 0x2000000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x20000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x80000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x200000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x800000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x2000000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x8000000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x20000000;
  DAT_089d726c[0x70] = DAT_089d726c[0x70] | 0x80000000;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 2;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 8;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 0x100;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 0x400;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 0x800;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 0x1000;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 0x4000;
  DAT_089d726c[0x71] = DAT_089d726c[0x71] | 0x8000;
  if (DAT_089d5f20 == '\x01') {
    DAT_089d726c[0x70] = DAT_089d726c[0x70] & 0xdfffffff;
  }
  return;
}

