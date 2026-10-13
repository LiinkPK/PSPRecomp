/* Entry 0x089A113C | file offset 0x0019E114 | FUN_089a113c | bytes 60 */

void FUN_089a113c(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = (param_3 & 0xff) << 0x10 | (param_2 & 0xff) << 8 | param_1 | 0xdb000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

