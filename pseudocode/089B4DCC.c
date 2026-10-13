/* Entry 0x089B4DCC | file offset 0x001B1DA4 | FUN_089b4dcc | bytes 488 */

void FUN_089b4dcc(float param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  if (param_2 != (uint *)0x0) {
    iVar4 = 0x10;
    puVar3 = param_2;
    do {
      while ((short)puVar3[4] == 0) {
        fVar6 = (float)puVar3[8] + (float)puVar3[10] * param_1;
        fVar7 = (float)puVar3[9] + param_1 * (float)puVar3[0xb];
        puVar3[8] = (uint)fVar6;
        puVar3[9] = (uint)fVar7;
        if (10.0 <= fVar6) {
          fVar6 = fVar6 - 10.0;
          puVar3[8] = (uint)fVar6;
        }
        if (10.0 <= fVar7) {
          fVar7 = fVar7 - 10.0;
          puVar3[9] = (uint)fVar7;
        }
        if (fVar6 <= -10.0) {
          fVar6 = fVar6 + 10.0;
          puVar3[8] = (uint)fVar6;
        }
        if (-10.0 < fVar7) {
          fVar5 = (float)param_2[0xc1];
          goto LAB_089b4ea8;
        }
        iVar4 = iVar4 + -1;
        puVar3[9] = (uint)(fVar7 + 10.0);
        fVar5 = (float)param_2[0xc1];
        *puVar3 = (uint)(fVar6 + (float)param_2[0xc0]) >> 8 | 0x4a000000;
        puVar3[1] = (uint)(fVar7 + 10.0 + fVar5) >> 8 | 0x4b000000;
        puVar3 = puVar3 + 0xc;
        if (iVar4 == 0) {
          return;
        }
      }
      fVar5 = param_1 + (float)puVar3[7];
      puVar3[7] = (uint)fVar5;
      if ((float)(int)(short)puVar3[6] <= fVar5) {
        fVar5 = fVar5 - (float)(int)(short)puVar3[6];
        puVar3[7] = (uint)fVar5;
      }
      iVar8 = (int)fVar5 / (int)*(short *)((int)puVar3 + 0x12);
      if (*(short *)((int)puVar3 + 0x12) == 0) {
        trap(7);
      }
      if (iVar8 < *(short *)((int)puVar3 + 0x1a)) {
        sVar1 = (short)puVar3[5];
      }
      else {
        iVar8 = (*(short *)((int)puVar3 + 0x1a) * 2 - iVar8) + -2;
        sVar1 = (short)puVar3[5];
      }
      iVar2 = (int)sVar1;
      if (iVar2 == 0) {
        trap(7);
      }
      fVar6 = (float)(iVar8 % iVar2) / (float)iVar2;
      fVar7 = (float)(iVar8 / iVar2) / (float)(int)*(short *)((int)puVar3 + 0x16);
      puVar3[8] = (uint)fVar6;
      puVar3[9] = (uint)fVar7;
      fVar5 = (float)param_2[0xc1];
LAB_089b4ea8:
      iVar4 = iVar4 + -1;
      *puVar3 = (uint)(fVar6 + (float)param_2[0xc0]) >> 8 | 0x4a000000;
      puVar3[1] = (uint)(fVar7 + fVar5) >> 8 | 0x4b000000;
      puVar3 = puVar3 + 0xc;
    } while (iVar4 != 0);
  }
  return;
}

