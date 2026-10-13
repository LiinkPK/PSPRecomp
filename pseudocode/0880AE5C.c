/* Entry 0x0880AE5C | file offset 0x00007E34 | FUN_0880ae5c | bytes 96 */

void FUN_0880ae5c(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + ((uint)(int)*(short *)(param_2 + 0x26) >> 5) * 4 + 4);
  *puVar1 = *puVar1 & ~(1 << ((int)*(short *)(param_2 + 0x26) & 0x1fU));
  puVar1 = (uint *)(param_1 + ((uint)(int)*(short *)(param_2 + 0x26) >> 5) * 4 + 0x24);
  *puVar1 = *puVar1 & ~(1 << ((int)*(short *)(param_2 + 0x26) & 0x1fU));
  return;
}

