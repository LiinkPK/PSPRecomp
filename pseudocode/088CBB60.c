/* Entry 0x088CBB60 | file offset 0x000C8B38 | FUN_088cbb60 | bytes 84 */

uint FUN_088cbb60(int param_1)

{
  uint uVar1;
  short *psVar2;
  
  psVar2 = &DAT_089cbcc8;
  uVar1 = 0;
  do {
    if (*psVar2 <= (short)(ushort)*(byte *)(param_1 + 2)) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 1;
  } while (uVar1 < 0xb);
  return 10;
}

