/* Entry 0x089A09A8 | file offset 0x0019D980 | FUN_089a09a8 | bytes 232 */

void FUN_089a09a8(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7,uint param_8,int iStackX_0,uint uStackX_4,uint uStackX_8)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  if (((param_2 + param_4 | param_8 + param_4) & 0xfffffc00) == 0) {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
    *puVar2 = ((param_7 & 0xfffffff) >> 0x18) << 0x10 | 0xb3000000 | param_6;
    *(uint **)(iVar1 + 8) = puVar2 + 8;
    puVar2[1] = param_7 & 0xffffff | 0xb2000000;
    puVar2[2] = param_3 << 10 | param_2 | 0xeb000000;
    puVar2[3] = ((uStackX_8 & 0xfffffff) >> 0x18) << 0x10 | 0xb5000000 | uStackX_4;
    puVar2[4] = uStackX_8 & 0xffffff | 0xb4000000;
    puVar2[5] = iStackX_0 << 10 | param_8 | 0xec000000;
    puVar2[6] = (param_5 + -1) * 0x400 | param_4 - 1U | 0xee000000;
    puVar2[7] = param_1 == 3 | 0xea000000;
  }
  return;
}

