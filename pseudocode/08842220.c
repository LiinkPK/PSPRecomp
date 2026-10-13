/* Entry 0x08842220 | file offset 0x0003F1F8 | FUN_08842220 | bytes 32 */

void FUN_08842220(uint param_1)

{
  *(uint *)(DAT_089d4958 + 0x4c) = *(uint *)(DAT_089d4958 + 0x4c) | 1 << (param_1 & 0x1f);
  return;
}

