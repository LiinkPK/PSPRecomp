/* Entry 0x089A05F0 | file offset 0x0019D5C8 | FUN_089a05f0 | bytes 232 */

void FUN_089a05f0(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = DAT_09af6830;
  if (param_2 != 0) {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
    *puVar2 = param_2 & 0xffffff | 0x12000000;
    *(uint **)(iVar1 + 8) = puVar2 + 1;
  }
  if (param_5 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
    *puVar2 = ((param_5 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_5 & 0xffffff | 0x2000000;
  }
  if (param_6 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
    *puVar2 = ((param_6 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_6 & 0xffffff | 0x1000000;
  }
  if (0 < param_4) {
    puVar2 = *(uint **)(iVar1 + 8);
    do {
      param_4 = param_4 + -1;
      *puVar2 = (param_1 & 7) << 0x10 | param_3 | 0x4000000;
      puVar2 = puVar2 + 1;
    } while (param_4 != 0);
    *(uint **)(iVar1 + 8) = puVar2;
  }
  FUN_089a22b8();
  return;
}

