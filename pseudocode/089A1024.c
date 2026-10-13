/* Entry 0x089A1024 | file offset 0x0019DFFC | FUN_089a1024 | bytes 76 */

void FUN_089a1024(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = ((param_2 & 0xfffffff) >> 0x18) << 0x10 | 0xb1000000;
  *(uint **)(iVar1 + 8) = puVar2 + 3;
  puVar2[1] = param_2 & 0xffffff | 0xb0000000;
  puVar2[2] = param_1 | 0xc4000000;
  return;
}

