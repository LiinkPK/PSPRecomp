/* Entry 0x089A1270 | file offset 0x0019E248 | FUN_089a1270 | bytes 52 */

void FUN_089a1270(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_3 << 0x10 | param_2 << 8 | param_1 | 0xdd000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

