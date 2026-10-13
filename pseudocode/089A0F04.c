/* Entry 0x089A0F04 | file offset 0x0019DEDC | FUN_089a0f04 | bytes 128 */

void FUN_089a0f04(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = (param_1 + 0xa8) * 0x1000000 | ((param_5 & 0xfffffff) >> 0x18) << 0x10 | param_4;
  *(uint **)(iVar1 + 8) = puVar2 + 4;
  puVar2[1] = (param_1 + 0xa0) * 0x1000000 | param_5 & 0xffffff;
  puVar2[2] = (param_1 + 0xb8) * 0x1000000 | (0x1f - LZCOUNT(param_3)) * 0x100 |
              0x1fU - LZCOUNT(param_2);
  puVar2[3] = 0xcb000000;
  return;
}

