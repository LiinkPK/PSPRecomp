/* Entry 0x0880AFA0 | file offset 0x00007F78 | FUN_0880afa0 | bytes 52 */

void FUN_0880afa0(uint param_1)

{
  (&DAT_089d4750)[param_1 >> 5] = (&DAT_089d4750)[param_1 >> 5] & ~(1 << (param_1 & 0x1f));
  return;
}

