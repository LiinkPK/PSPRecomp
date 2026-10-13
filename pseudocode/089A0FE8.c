/* Entry 0x089A0FE8 | file offset 0x0019DFC0 | FUN_089a0fe8 | bytes 60 */

void FUN_089a0fe8(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_4 << 0x10 | param_3 << 8 | param_2 << 2 | param_1 | 0xc5000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

