/* Entry 0x088F3DD8 | file offset 0x000F0DB0 | FUN_088f3dd8 | bytes 48 */

void FUN_088f3dd8(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + ((param_2 & 0xffff) >> 5) * 4 + 0x157c);
  *puVar1 = *puVar1 | 1 << (param_2 & 0x1f);
  return;
}

