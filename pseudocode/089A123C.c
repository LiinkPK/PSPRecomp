/* Entry 0x089A123C | file offset 0x0019E214 | FUN_089a123c | bytes 52 */

void FUN_089a123c(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_3 << 0x10 | param_2 << 8 | param_1 | 0xdc000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

