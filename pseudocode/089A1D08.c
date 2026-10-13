/* Entry 0x089A1D08 | file offset 0x0019ECE0 | FUN_089a1d08 | bytes 172 */

void FUN_089a1d08(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  float fVar5;
  
  uVar3 = *(uint *)(param_1 + 0xdc);
  uVar2 = *(uint *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xe0) = param_2;
  fVar5 = (float)(int)(uVar2 + uVar3) * 0.5;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
    uVar3 = uVar2;
  }
  puVar4 = *(uint **)(param_1 + 8);
  *puVar4 = (uint)(fVar5 - (float)(int)uVar2) >> 8 | 0x44000000;
  *(uint **)(param_1 + 8) = puVar4 + 4;
  puVar4[1] = (uint)(fVar5 + (float)param_2) >> 8 | 0x47000000;
  puVar4[2] = uVar1 | 0xd6000000;
  puVar4[3] = uVar3 | 0xd7000000;
  return;
}

