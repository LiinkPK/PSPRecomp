/* Entry 0x089B9594 | file offset 0x001B656C | FUN_089b9594 | bytes 40 */

uint FUN_089b9594(int param_1)

{
  uint uVar1;
  
  uVar1 = 0x4b;
  if (1 < *(byte *)(param_1 + 0xd) - 0x49) {
    uVar1 = (uint)*(byte *)(param_1 + 0xd);
  }
  return uVar1 << 0x10 | (uint)*(ushort *)(param_1 + 0xe);
}

