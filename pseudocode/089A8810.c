/* Entry 0x089A8810 | file offset 0x001A57E8 | FUN_089a8810 | bytes 468 */

void FUN_089a8810(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  
  puVar1 = (uint *)FUN_089a7494();
  fVar4 = ((float)param_5 * 1e+06) / (float)param_4;
  if (fVar4 < 2.1474836e+09) {
    uVar3 = (uint)fVar4;
  }
  else {
    uVar3 = (int)(fVar4 - 2.1474836e+09) | 0x80000000;
  }
  puVar1[6] = 2;
  *puVar1 = uVar3;
  puVar1[9] = param_3;
  puVar1[8] = param_2;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[3] = 0x10010;
  puVar2 = (undefined4 *)FUN_089a74ac(param_1);
  puVar2[5] = param_2 * param_3 * 3;
  *puVar2 = 0x28;
  *(undefined2 *)(puVar2 + 3) = 1;
  *(undefined2 *)((int)puVar2 + 0xe) = 0x18;
  puVar2[4] = 0x47504a4d;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  puVar2 = (undefined4 *)FUN_089a749c(param_1);
  *(short *)((int)puVar2 + 0x36) = (short)param_3;
  puVar2[5] = param_5;
  puVar2[6] = param_4;
  *(short *)(puVar2 + 0xd) = (short)param_2;
  *puVar2 = 0x73646976;
  puVar2[1] = 0x67706a6d;
  puVar2[10] = 10000;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0xb] = 0;
  *(undefined2 *)((int)puVar2 + 0x32) = 0;
  *(undefined2 *)(puVar2 + 0xc) = 0;
  *(uint *)(param_1 + 0x1a0) = param_6 << 0x10 | 0x3030;
  *(undefined2 *)(param_1 + 0x198) = 4;
  *(undefined2 *)(param_1 + 0x19a) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  return;
}

