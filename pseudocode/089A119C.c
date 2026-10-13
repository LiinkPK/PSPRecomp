/* Entry 0x089A119C | file offset 0x0019E174 | FUN_089a119c | bytes 36 */

void FUN_089a119c(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 | 0xe7000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

