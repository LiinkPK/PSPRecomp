/* Entry 0x08912644 | file offset 0x0010F61C | FUN_08912644 | bytes 48 */

void FUN_08912644(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + ((uint)(int)*(short *)(param_1 + 0x242) >> 5) * 4 + 0x10);
  *puVar1 = *puVar1 | 1 << ((int)*(short *)(param_1 + 0x242) & 0x1fU);
  return;
}

