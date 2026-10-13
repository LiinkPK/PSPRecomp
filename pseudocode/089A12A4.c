/* Entry 0x089A12A4 | file offset 0x0019E27C | FUN_089a12a4 | bytes 88 */

void FUN_089a12a4(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 << 8 | param_3 << 4 | param_2 | 0xdf000000;
  *(uint **)(iVar1 + 8) = puVar2 + 3;
  puVar2[1] = param_4 & 0xffffff | 0xe0000000;
  puVar2[2] = param_5 & 0xffffff | 0xe1000000;
  return;
}

