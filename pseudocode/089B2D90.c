/* Entry 0x089B2D90 | file offset 0x001AFD68 | FUN_089b2d90 | bytes 44 */

void FUN_089b2d90(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = param_4 << 0x10 | param_3 << 8 | param_2 | 0xdc000000;
  return;
}

