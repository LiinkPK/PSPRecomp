/* Entry 0x089A1178 | file offset 0x0019E150 | FUN_089a1178 | bytes 36 */

void FUN_089a1178(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 | 0xde000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

