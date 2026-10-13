/* Entry 0x089A0E8C | file offset 0x0019DE64 | FUN_089a0e8c | bytes 88 */

void FUN_089a0e8c(float param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  uVar3 = (uint)(param_1 * 16.0);
  *(uint **)(DAT_09af6830 + 8) = puVar2 + 1;
  bVar1 = 0x7f < (int)uVar3;
  if ((int)uVar3 < -0x80) {
    uVar3 = 0xffffff80;
  }
  if (bVar1) {
    uVar3 = 0x7f;
  }
  *puVar2 = (uVar3 & 0xff) << 0x10 | param_2 | 0xc8000000;
  return;
}

