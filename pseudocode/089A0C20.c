/* Entry 0x089A0C20 | file offset 0x0019DBF8 | FUN_089a0c20 | bytes 64 */

void FUN_089a0c20(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 & 0xffffff | 0x5c000000;
  *(uint **)(iVar1 + 8) = puVar2 + 2;
  puVar2[1] = param_1 >> 0x18 | 0x5d000000;
  return;
}

