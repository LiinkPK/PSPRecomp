/* Entry 0x0899F9B0 | file offset 0x0019C988 | FUN_0899f9b0 | bytes 180 */

int FUN_0899f9b0(uint param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  if (DAT_09af67f8 == 1) {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
    *puVar2 = (param_1 & 0xfffffff) >> 0x10 | 0xe110000;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_1 & 0xffff | 0xc000000;
  }
  else {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
    *puVar2 = ((param_1 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_1 & 0xffffff | 0xa000000;
  }
  iVar1 = FUN_089a22b8();
  if (0 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

