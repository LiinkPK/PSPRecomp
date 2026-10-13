/* Entry 0x089B2D64 | file offset 0x001AFD3C | FUN_089b2d64 | bytes 44 */

void FUN_089b2d64(int *param_1,uint param_2,int param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = param_4 << 0x10 | param_3 << 8 | param_2 | 0xdb000000;
  return;
}

