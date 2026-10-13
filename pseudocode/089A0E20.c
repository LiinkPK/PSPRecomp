/* Entry 0x089A0E20 | file offset 0x0019DDF8 | FUN_089a0e20 | bytes 64 */

void FUN_089a0e20(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  iVar1 = DAT_09af6830;
  iVar2 = *(int *)(DAT_09af6830 + 0xe4);
  puVar3 = *(uint **)(DAT_09af6830 + 8);
  *(int *)(DAT_09af6830 + 0xec) = param_2;
  *(uint *)(iVar1 + 0xe8) = param_1;
  *(uint **)(iVar1 + 8) = puVar3 + 1;
  *puVar3 = iVar2 << 0x10 | param_2 << 8 | param_1 | 0xc9000000;
  return;
}

