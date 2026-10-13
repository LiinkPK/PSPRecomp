/* Entry 0x0898A5D8 | file offset 0x001875B0 | FUN_0898a5d8 | bytes 816 */

void FUN_0898a5d8(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_2 + 0xb1) != '\0') {
    if (*(short *)(param_2 + 0x88) == 0) {
      iVar3 = *(int *)(param_1 + 4);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x88);
      uVar2 = *(int *)(param_1 + 0x3c) + 1;
      *(uint *)(param_1 + 0x3c) = uVar2;
      if (uVar2 < uVar1) {
        iVar3 = *(int *)(param_1 + 4);
      }
      else {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if (*(char *)(param_2 + 0xb2) == '\0') {
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x38) = 0;
        }
        iVar3 = *(int *)(param_1 + 4);
      }
    }
    iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x2c))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x28));
    iVar3 = *(int *)(iVar3 + 4);
    FUN_0898d150();
    fVar8 = *(float *)(param_2 + 0x44);
    fVar10 = *(float *)(param_2 + 0x48);
    fVar9 = fVar10;
    if (fVar10 <= fVar8) {
      fVar9 = fVar8;
      fVar8 = fVar10;
    }
    if (*(char *)(param_2 + 0xb2) == '\0') {
      iVar4 = 0;
      iVar3 = iVar3 - *(int *)(param_1 + 0x30);
      if (0 < iVar3) {
        do {
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          fVar10 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * (fVar9 - fVar8) + fVar8;
          if (fVar10 < fVar8) {
            fVar10 = 0.0;
          }
          else if (fVar9 < fVar10) {
            fVar10 = 0.0;
          }
          iVar7 = *(int *)(param_1 + 0x30);
          *(int *)(param_1 + 0x30) = iVar7 + 1;
          *(float *)(*(int *)(param_1 + 0x2c) + iVar7 * 4) = fVar10;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
    }
    else {
      iVar7 = *(int *)(param_1 + 0x38);
      iVar4 = 0;
      iVar3 = iVar3 - iVar7;
      if (0 < iVar3) {
        do {
          DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
          fVar10 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * (fVar9 - fVar8) + fVar8;
          if (fVar10 < fVar8) {
            fVar10 = 0.0;
          }
          else if (fVar9 < fVar10) {
            fVar10 = 0.0;
          }
          iVar7 = *(int *)(param_1 + 0x38);
          *(int *)(param_1 + 0x38) = iVar7 + 1;
          *(float *)(*(int *)(param_1 + 0x34) + iVar7 * 4) = fVar10;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
        iVar7 = *(int *)(param_1 + 0x38);
      }
      iVar4 = 0;
      iVar3 = iVar7 - *(int *)(param_1 + 0x30);
      if (0 < iVar3) {
        piVar5 = (int *)(param_1 + 0x30);
        iVar7 = *piVar5;
        while( true ) {
          *piVar5 = iVar7 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar7 * 4) = 0x3f800000;
          iVar4 = iVar4 + 1;
          if (iVar3 <= iVar4) break;
          iVar7 = *piVar5;
        }
        iVar7 = *(int *)(param_1 + 0x38);
      }
      fVar8 = *(float *)(param_2 + 0x4c);
      uVar2 = 0;
      iVar3 = 0;
      if (iVar7 != 0) {
        do {
          pfVar6 = (float *)(*(int *)(param_1 + 0x2c) + iVar3);
          uVar2 = uVar2 + 1;
          *pfVar6 = (*(float *)(*(int *)(param_1 + 0x34) + iVar3) - *pfVar6) * fVar8;
          iVar3 = iVar3 + 4;
        } while (uVar2 < *(uint *)(param_1 + 0x38));
      }
    }
  }
  return;
}

