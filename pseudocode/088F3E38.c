/* Entry 0x088F3E38 | file offset 0x000F0E10 | FUN_088f3e38 | bytes 48 */

void FUN_088f3e38(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + ((param_2 & 0xffff) >> 5) * 4 + 0x170c);
  *puVar1 = *puVar1 | 1 << (param_2 & 0x1f);
  return;
}

