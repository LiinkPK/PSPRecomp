/* Entry 0x0899FFC8 | file offset 0x0019CFA0 | FUN_0899ffc8 | bytes 40 */

void FUN_0899ffc8(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 & 7 | 0x53000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  return;
}

