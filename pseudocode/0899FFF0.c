/* Entry 0x0899FFF0 | file offset 0x0019CFC8 | FUN_0899fff0 | bytes 44 */

void FUN_0899fff0(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 >> 8 | 0x5b000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

