/* Entry 0x089A1E70 | file offset 0x0019EE48 | FUN_089a1e70 | bytes 148 */

void FUN_089a1e70(int param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = param_2 * 3;
  uVar3 = 2;
  if (param_4 != 8) {
    uVar3 = (uint)(param_4 == 6);
  }
  uVar5 = param_5[1];
  puVar4 = *(uint **)(param_1 + 8);
  uVar2 = param_5[2];
  *puVar4 = (iVar1 + 99) * 0x1000000 | *param_5 >> 8;
  *(uint **)(param_1 + 8) = puVar4 + 4;
  puVar4[1] = (iVar1 + 100) * 0x1000000 | uVar5 >> 8;
  puVar4[2] = (iVar1 + 0x65) * 0x1000000 | uVar2 >> 8;
  puVar4[3] = (param_2 + 0x5f) * 0x1000000 | param_3 << 8 | uVar3;
  return;
}

