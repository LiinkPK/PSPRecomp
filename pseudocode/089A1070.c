/* Entry 0x089A1070 | file offset 0x0019E048 | FUN_089a1070 | bytes 132 */

void FUN_089a1070(float param_1,float param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  float fVar3;
  
  iVar1 = DAT_09af6830;
  param_1 = param_2 - param_1;
  fVar3 = 0.0;
  if ((0.0 < param_1) || (param_1 < 0.0)) {
    fVar3 = 1.0 / param_1;
    puVar2 = *(uint **)(DAT_09af6830 + 8);
  }
  else {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
  }
  *puVar2 = param_3 & 0xffffff | 0xcf000000;
  *(uint **)(iVar1 + 8) = puVar2 + 3;
  puVar2[1] = (uint)param_2 >> 8 | 0xcd000000;
  puVar2[2] = (uint)fVar3 >> 8 | 0xce000000;
  return;
}

