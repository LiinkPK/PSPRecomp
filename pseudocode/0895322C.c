/* Entry 0x0895322C | file offset 0x00150204 | FUN_0895322c | bytes 784 */

void FUN_0895322c(float param_1,undefined4 param_2,int param_3,float *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar2 = *(int *)(param_3 + 0x90);
  iVar3 = *(int *)(param_3 + 0x8c);
  iVar4 = iVar3 + (uint)*(ushort *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 4) * 2);
  fVar9 = -(*param_4 *
           *(float *)(iVar3 + (uint)*(ushort *)(*(int *)(iVar2 + 8) + (*(int *)(iVar2 + 4) + 1) * 2)
                     + 100)) + param_4[1];
  if (fVar9 <= *(float *)(iVar4 + 100)) {
    fVar10 = *(float *)(iVar4 + 0x94);
    fVar8 = *(float *)(iVar4 + 0x84);
    uVar1 = *(ushort *)(*(int *)(*(int *)(iVar3 + 0x4c) + (uint)**(ushort **)(iVar2 + 8) * 4) + 4);
    if (0.0 < fVar10 * param_1 + fVar8) {
      fVar12 = *(float *)(iVar4 + 0x74) - fVar9;
      fVar6 = fVar8 * fVar8 - fVar10 * 0.5 * 4.0 * fVar12;
      if (fVar10 == 0.0) {
        fVar12 = fVar12 / fVar8;
        fVar11 = *(float *)(iVar4 + 0x60);
        fVar5 = (float)(int)*(short *)(param_4 + 2);
        fVar13 = *(float *)(iVar4 + 0x68);
        fVar14 = (float)(int)*(short *)((int)param_4 + 0xe) * 0.098;
        if (fVar12 < 0.0) {
          fVar12 = -fVar12;
        }
        fVar12 = fVar12 - (float)uVar1;
      }
      else {
        if (fVar6 < 0.0) {
          return;
        }
        fVar7 = fVar10 * 0.5 * 2.0;
        fVar12 = (float)uVar1;
        fVar5 = (float)(int)*(short *)(param_4 + 2);
        fVar11 = *(float *)(iVar4 + 0x60);
        fVar13 = *(float *)(iVar4 + 0x68);
        fVar14 = (float)(int)*(short *)((int)param_4 + 0xe) * 0.098;
        if (fVar6 == 0.0) {
          fVar12 = -fVar8 / fVar7 - fVar12;
        }
        else {
          fVar12 = (SQRT(fVar6) - fVar8) / fVar7 - fVar12;
        }
      }
      fVar14 = fVar14 / 100.0;
      fVar8 = -((fVar5 / 100.0) * (fVar10 * fVar12 + fVar8));
      if ((-fVar8 < fVar14) || (0.0 <= fVar8)) {
        *(float *)(iVar4 + 0x70) = fVar11;
        *(float *)(iVar4 + 0x74) = fVar9;
        *(float *)(iVar4 + 0x78) = fVar13;
        FUN_08935828(iVar4 + 0x80,0,0x10);
        FUN_08935828(iVar4 + 0x90,0,0x10);
      }
      else {
        fVar5 = fVar12 * fVar12;
        *(float *)(iVar4 + 0x94) = fVar14;
        *(float *)(iVar4 + 0x84) = fVar8 - fVar14 * fVar12;
        *(float *)(iVar4 + 0x74) = fVar14 * 0.5 * fVar5 + -(fVar12 * fVar8) + fVar9;
        fVar9 = *(float *)(iVar4 + 0x90) * fVar12;
        fVar6 = *(float *)(iVar4 + 0x98) * fVar12;
        fVar10 = ((float)(int)*(short *)(param_4 + 3) / 100.0) * (fVar9 + *(float *)(iVar4 + 0x80));
        fVar8 = ((float)(int)*(short *)(param_4 + 3) / 100.0) * (fVar6 + *(float *)(iVar4 + 0x88));
        *(float *)(iVar4 + 0x80) = fVar10 - fVar9;
        *(float *)(iVar4 + 0x70) =
             *(float *)(iVar4 + 0x90) * 0.5 * fVar5 + -(fVar12 * fVar10) + fVar11;
        *(float *)(iVar4 + 0x88) = fVar8 - fVar6;
        *(float *)(iVar4 + 0x78) =
             *(float *)(iVar4 + 0x98) * 0.5 * fVar5 + -(fVar12 * fVar8) + fVar13;
      }
    }
  }
  return;
}

