/* Entry 0x089A001C | file offset 0x0019CFF4 | FUN_089a001c | bytes 68 */

void FUN_089a001c(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 >> 8 | 0x48000000;
  *(uint **)(iVar1 + 8) = puVar2 + 2;
  puVar2[1] = param_2 >> 8 | 0x49000000;
  return;
}

