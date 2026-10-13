/* Entry 0x089A06D8 | file offset 0x0019D6B0 | FUN_089a06d8 | bytes 284 */

void FUN_089a06d8(uint param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_09af6830;
  uVar3 = ((param_4 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
  if (param_1 != 0) {
    puVar2 = *(uint **)(DAT_09af6830 + 8);
    *puVar2 = param_1 & 0xffffff | 0x12000000;
    *(uint **)(iVar1 + 8) = puVar2 + 1;
  }
  if (param_4 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
    *puVar2 = uVar3;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_4 & 0xffffff | 0x2000000;
  }
  if (param_5 != 0) {
    puVar2 = *(uint **)(iVar1 + 8);
    *puVar2 = ((param_5 & 0xfffffff) >> 0x18) << 0x10 | 0x10000000;
    *(uint **)(iVar1 + 8) = puVar2 + 2;
    puVar2[1] = param_5 & 0xffffff | 0x1000000;
  }
  if ((param_1 & 0x1800) != 0) {
    puVar4 = *(undefined4 **)(iVar1 + 8);
    *puVar4 = 0x4030001;
    *(undefined4 **)(iVar1 + 8) = puVar4 + 3;
    puVar4[1] = uVar3;
    puVar4[2] = param_4 & 0xffffff | 0x2000000;
  }
  puVar2 = *(uint **)(iVar1 + 8);
  *puVar2 = param_3 << 8 | param_2 | 0x5000000;
  *(uint **)(iVar1 + 8) = puVar2 + 1;
  FUN_089a22b8();
  return;
}

