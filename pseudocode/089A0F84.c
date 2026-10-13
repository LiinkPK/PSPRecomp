/* Entry 0x089A0F84 | file offset 0x0019DF5C | FUN_089a0f84 | bytes 68 */

void FUN_089a0f84(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  puVar2 = *(uint **)(DAT_09af6830 + 8);
  *puVar2 = param_1 >> 8 | 0x4a000000;
  *(uint **)(iVar1 + 8) = puVar2 + 2;
  puVar2[1] = param_2 >> 8 | 0x4b000000;
  return;
}

