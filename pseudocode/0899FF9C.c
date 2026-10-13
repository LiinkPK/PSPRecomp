/* Entry 0x0899FF9C | file offset 0x0019CF74 | FUN_0899ff9c | bytes 44 */

void FUN_0899ff9c(uint param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_2 << 8 | param_1 | 0x36000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

