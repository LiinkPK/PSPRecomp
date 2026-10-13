/* Entry 0x08820DD0 | file offset 0x0001DDA8 | FUN_08820dd0 | bytes 776 */

void FUN_08820dd0(float param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(undefined4 *)(param_2 + 0x28) = 0;
  fVar2 = (float)FUN_08820c08();
  fVar3 = (float)FUN_08820be4(param_2);
  fVar4 = (float)FUN_08820c2c(param_2);
  fVar5 = (float)FUN_08820c50(param_2);
  if ((((0.0 <= fVar2) && (0.0 <= fVar3)) && (0.0 < fVar4)) && (0.0 < fVar5)) {
    fVar4 = *(float *)(param_2 + 0xc);
    fVar3 = *(float *)(param_2 + 0x10);
    fVar5 = fVar4 + param_1;
    uVar1 = *(uint *)(param_2 + 8);
    fVar2 = param_1;
    while( true ) {
      fVar7 = fVar2;
      if (fVar3 <= fVar5) {
        fVar7 = fVar3 - fVar4;
      }
      if ((int)uVar1 < 2) {
        if (-1 < (int)uVar1) {
          if ((int)uVar1 < 1) {
            *(float *)(param_2 + 0x28) =
                 *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x14) * fVar7;
          }
          else if (0.0 < fVar3) {
            fVar8 = *(float *)(param_2 + 0x14);
            fVar10 = *(float *)(param_2 + 0x18) - fVar8;
            fVar9 = fVar8 + (fVar10 * fVar4) / fVar3;
            *(float *)(param_2 + 0x28) =
                 fVar9 * fVar7 +
                 ((fVar8 + (fVar10 * (fVar4 + fVar7)) / fVar3) - fVar9) * fVar7 * 0.5 +
                 *(float *)(param_2 + 0x28);
          }
        }
      }
      else if ((int)uVar1 < 3) {
        *(float *)(param_2 + 0x28) = *(float *)(param_2 + 0x28) + *(float *)(param_2 + 0x18) * fVar7
        ;
      }
      else if (((int)uVar1 < 4) && (0.0 < fVar3)) {
        fVar8 = *(float *)(param_2 + 0x18);
        fVar10 = *(float *)(param_2 + 0x14) - fVar8;
        fVar9 = fVar8 + (fVar10 * fVar4) / fVar3;
        *(float *)(param_2 + 0x28) =
             fVar9 * fVar7 + ((fVar8 + (fVar10 * (fVar4 + fVar7)) / fVar3) - fVar9) * fVar7 * 0.5 +
             *(float *)(param_2 + 0x28);
      }
      if (fVar5 < fVar3) break;
      fVar2 = fVar2 - fVar7;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(param_2 + 0xc) = 0;
      if ((int)uVar1 < 0) {
        uVar1 = -(-uVar1 & 3);
      }
      else {
        uVar1 = uVar1 & 3;
      }
      *(uint *)(param_2 + 8) = uVar1;
      if ((int)uVar1 < 2) {
        if (-1 < (int)uVar1) {
          if ((int)uVar1 < 1) {
            fVar3 = (float)FUN_08820be4(param_2);
            *(float *)(param_2 + 0x10) = fVar3;
            uVar1 = *(uint *)(param_2 + 8);
          }
          else {
            uVar6 = FUN_08820c50(param_2);
            *(undefined4 *)(param_2 + 0x10) = uVar6;
            uVar6 = FUN_08820b9c(param_2);
            *(undefined4 *)(param_2 + 0x18) = uVar6;
            fVar3 = *(float *)(param_2 + 0x10);
            uVar1 = *(uint *)(param_2 + 8);
          }
        }
      }
      else if ((int)uVar1 < 3) {
        fVar3 = (float)FUN_08820c08(param_2);
        *(float *)(param_2 + 0x10) = fVar3;
        uVar1 = *(uint *)(param_2 + 8);
      }
      else if ((int)uVar1 < 4) {
        uVar6 = FUN_08820c2c(param_2);
        *(undefined4 *)(param_2 + 0x10) = uVar6;
        uVar6 = FUN_08820b54(param_2);
        *(undefined4 *)(param_2 + 0x14) = uVar6;
        fVar3 = *(float *)(param_2 + 0x10);
        uVar1 = *(uint *)(param_2 + 8);
      }
      fVar4 = *(float *)(param_2 + 0xc);
      fVar5 = fVar4 + fVar2;
    }
    *(float *)(param_2 + 0xc) = fVar4 + param_1;
  }
  return;
}

