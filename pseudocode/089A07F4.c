/* Entry 0x089A07F4 | file offset 0x0019D7CC | FUN_089a07f4 | bytes 316 */

void FUN_089a07f4(uint param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_09af6830;
  uVar3 = ((param_6 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
  if (param_1 != 0) {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
    *puVar2 = param_1 & 0xffffff | 0x12000000;
    *(uint **)(iVar1 + 8) = puVar2 + 1;
  }
  if (param_6 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
    *puVar2 = uVar3;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_6 & 0xffffff | 0x2000000;
  }
  if (param_7 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
    *puVar2 = ((param_7 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_7 & 0xffffff | 0x1000000;
  }
  if ((param_1 & 0x1800) != 0) {
    puVar4 = *(undefined4 **)(iVar1 + 8);
    *puVar4 = 0x4030001;
    *(undefined4 **)(iVar1 + 8) = puVar4 + 3;
    puVar4[1] = uVar3;
    puVar4[2] = param_6 & 0xffffff | 0x2000000;
  }
  puVar2 = *(uint **)(iVar1 + 8);
  *puVar2 = param_5 << 0x12 | param_4 << 0x10 | param_3 << 8 | param_2 | 0x6000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  FUN_089a22b8();
  return;
}

