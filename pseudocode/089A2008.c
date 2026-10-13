/* Entry 0x089A2008 | file offset 0x0019EFE0 | FUN_089a2008 | bytes 68 */

void FUN_089a2008(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_3 << 0x10 | param_4 << 8 | param_5 | 0xc2000000;
  *(uint **)(param_1 + 8) = puVar1 + 3;
  puVar1[1] = param_2 | 0xc3000000;
  puVar1[2] = 0xcb000000;
  return;
}

