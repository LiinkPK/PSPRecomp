/* Entry 0x089A0E60 | file offset 0x0019DE38 | FUN_089a0e60 | bytes 44 */

void FUN_089a0e60(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_2 << 8 | param_1 | 0xc7000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

