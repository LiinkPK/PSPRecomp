/* Entry 0x0889A2F0 | file offset 0x000972C8 | FUN_0889a2f0 | bytes 2488 */

undefined4 FUN_0889a2f0(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined **ppuVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_50 [12];
  
  iVar3 = FUN_08935490(param_2,&DAT_089cab28,3);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      FUN_08935524(param_1 + 0x38,param_2,0x20);
      piVar11 = (int *)(param_2 + 0x20);
      ppuVar13 = &PTR_s__leap_089d6c18;
      if (0 < *(int *)(param_1 + 0x3c)) {
        *(int **)(param_1 + 0x58) = piVar11;
        iVar3 = param_2 + 0x40;
        if (0 < *piVar11) {
          *(int *)(param_1 + 0x6c) = iVar3;
          iVar3 = iVar3 + *piVar11 * 0x3c;
        }
        if (0 < *(int *)(param_2 + 0x24)) {
          *(int *)(param_1 + 0x5c) = iVar3;
          iVar3 = iVar3 + *(int *)(param_2 + 0x24) * 0x3c;
        }
        piVar7 = piVar11;
        if (0 < *(int *)(param_2 + 0x28)) {
          *(int *)(param_1 + 0x60) = iVar3;
          iVar3 = iVar3 + *(int *)(param_2 + 0x28) * 0x60;
          iVar6 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0xf0),*(int *)(param_2 + 0x28) << 2,0,0,1,0
                              );
          *(int *)(param_1 + 100) = iVar6;
          iVar10 = 0;
          iVar8 = *(int *)(*(int *)(param_1 + 0x58) + 8);
          if (0 < iVar8) {
            iVar12 = 0;
            iVar9 = 0;
            do {
              *(int *)(iVar6 + iVar9) = *(int *)(param_1 + 0x60) + iVar12;
              iVar9 = iVar9 + 4;
              *(short *)(*(int *)(param_1 + 0x60) + iVar12 + 0x22) = (short)iVar10;
              iVar10 = iVar10 + 1;
              iVar8 = *(int *)(*(int *)(param_1 + 0x58) + 8);
              iVar12 = iVar12 + 0x60;
              iVar6 = *(int *)(param_1 + 100);
            } while (iVar10 < iVar8);
          }
          FUN_08934b3c(iVar6,iVar8,4,FUN_088973ec);
          piVar7 = *(int **)(param_1 + 0x58);
        }
        if (0 < piVar7[3]) {
          *(int *)(param_1 + 0x68) = iVar3;
          iVar3 = iVar3 + piVar7[3] * 0x2c;
        }
        if (0 < piVar7[4]) {
          *(int *)(param_1 + 0x98) = iVar3;
          iVar3 = iVar3 + piVar7[4] * 0xc;
        }
        if (0 < piVar7[5]) {
          *(int *)(param_1 + 0x70) = iVar3;
          iVar3 = iVar3 + piVar7[5] * 0x4c;
          uVar15 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0xf0),piVar7[5] << 2,0,0,1,0);
          *(undefined4 *)(param_1 + 0x74) = uVar15;
          uVar4 = 0;
          iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x14);
          if (0 < iVar6) {
            iVar8 = 0;
            iVar10 = 0;
            do {
              iVar6 = *(int *)(param_1 + 0x70) + iVar8;
              uVar1 = *(ushort *)(iVar6 + 0x24);
              *(ushort *)(iVar6 + 0x24) = uVar1 & 0xfffd | (uVar1 & 1) << 1;
              iVar6 = *(int *)(param_1 + 0x70) + iVar8;
              *(ushort *)(iVar6 + 0x24) = *(ushort *)(iVar6 + 0x24) & 0xfff3;
              iVar6 = *(int *)(param_1 + 0x70) + iVar8;
              *(ushort *)(iVar6 + 0x24) =
                   *(ushort *)(iVar6 + 0x24) & 0xf | (ushort)((uVar4 & 0xfff) << 4);
              *(int *)(*(int *)(param_1 + 0x74) + iVar10) = *(int *)(param_1 + 0x70) + iVar8;
              uVar4 = uVar4 + 1;
              iVar6 = *(int *)(*(int *)(param_1 + 0x58) + 0x14);
              iVar8 = iVar8 + 0x4c;
              iVar10 = iVar10 + 4;
            } while ((int)uVar4 < iVar6);
          }
          FUN_08934b3c(*(undefined4 *)(param_1 + 0x74),iVar6,4,FUN_088973ec);
          piVar7 = *(int **)(param_1 + 0x58);
        }
        if (0 < piVar7[6]) {
          *(int *)(param_1 + 0x9c) = iVar3;
          iVar3 = iVar3 + piVar7[6] * 4;
        }
        if (0 < piVar7[7]) {
          *(int *)(param_1 + 0x78) = iVar3;
        }
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x3c));
      }
      iVar3 = *(int *)(param_1 + 0x58);
      iVar6 = *(int *)(iVar3 + 0xc);
      if (0 < iVar6) {
        iVar8 = 0;
        iVar3 = 0;
        if (0 < iVar6) {
          iVar10 = *(int *)(param_1 + 0x68);
          do {
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + *(short *)(iVar10 + 0x2a);
            iVar10 = iVar10 + 0x2c;
          } while (iVar8 < iVar6);
        }
        iVar8 = iVar6 * iVar3 * 0xc;
        iVar10 = iVar6 * 0x18 + iVar8;
        iVar3 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0xf0),iVar10 + iVar6 * 8,0,0,1,0);
        *(int *)(param_1 + 0x8c) = iVar3;
        *(int *)(param_1 + 0x90) = iVar3 + iVar8;
        *(int *)(param_1 + 0x94) = iVar10 + iVar3;
        iVar3 = *(int *)(param_1 + 0x58);
        iVar8 = 0;
        iVar6 = *(int *)(iVar3 + 0xc);
        if (0 < iVar6) {
          iVar10 = *(int *)(param_1 + 0x68);
          iVar12 = 0;
          do {
            iVar9 = iVar10 + iVar12;
            sVar2 = *(short *)(iVar9 + 0x2a);
            iVar14 = 0;
            fVar16 = 0.0;
            if (0 < sVar2) {
              do {
                FUN_0889732c(fVar16,param_1,iVar8,
                             *(int *)(param_1 + 0x8c) + (*(short *)(iVar9 + 0x28) + iVar14) * 0xc);
                iVar10 = *(int *)(param_1 + 0x68);
                iVar14 = iVar14 + 1;
                iVar9 = iVar10 + iVar12;
                fVar16 = 1.0 / (float)(sVar2 + -1) + fVar16;
              } while (iVar14 < *(short *)(iVar9 + 0x2a));
              iVar3 = *(int *)(param_1 + 0x58);
              iVar6 = *(int *)(iVar3 + 0xc);
            }
            iVar8 = iVar8 + 1;
            iVar12 = iVar12 + 0x2c;
          } while (iVar8 < iVar6);
        }
        iVar8 = 0;
        iVar10 = 0;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            iVar3 = *(int *)(param_1 + 0x68) + iVar12;
            FUN_0885bc4c(*(int *)(param_1 + 0x90) + iVar10,
                         *(int *)(param_1 + 0x8c) + *(short *)(iVar3 + 0x28) * 0xc,
                         (int)*(short *)(iVar3 + 0x2a));
            iVar3 = *(int *)(param_1 + 0x58);
            iVar8 = iVar8 + 1;
            iVar6 = *(int *)(iVar3 + 0xc);
            iVar10 = iVar10 + 0x18;
            iVar12 = iVar12 + 0x2c;
          } while (iVar8 < iVar6);
        }
        iVar8 = 0;
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            uVar15 = FUN_08898c2c(0,0x40800000,param_1,iVar8,auStack_50);
            *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar6) = uVar15;
            uVar15 = FUN_08898c2c(0x3f800000,0xc0800000,param_1,iVar8,auStack_50);
            iVar8 = iVar8 + 1;
            *(undefined4 *)(*(int *)(param_1 + 0x94) + iVar6 + 4) = uVar15;
            iVar3 = *(int *)(param_1 + 0x58);
            iVar6 = iVar6 + 8;
          } while (iVar8 < *(int *)(iVar3 + 0xc));
        }
      }
      iVar8 = 0;
      iVar6 = param_1;
      do {
        *(undefined4 *)(iVar6 + 0x80) = 0;
        *(undefined4 *)(iVar6 + 0x7c) = 0;
        iVar10 = 0;
        iVar12 = 0;
        if (0 < *(int *)(iVar3 + 8)) {
          do {
            iVar3 = FUN_08935c14(*(int *)(param_1 + 0x60) + iVar12,*ppuVar13);
            if (iVar3 != 0) {
              *(int *)(iVar6 + 0x7c) = *(int *)(iVar6 + 0x7c) + 1;
            }
            iVar3 = *(int *)(param_1 + 0x58);
            iVar10 = iVar10 + 1;
            iVar12 = iVar12 + 0x60;
          } while (iVar10 < *(int *)(iVar3 + 8));
        }
        if (0 < *(int *)(iVar6 + 0x7c)) {
          uVar15 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0xf0),*(int *)(iVar6 + 0x7c) * 2,0,0,1,0);
          *(undefined4 *)(iVar6 + 0x80) = uVar15;
          iVar3 = *(int *)(param_1 + 0x58);
          iVar12 = 0;
          iVar10 = 0;
          if (0 < *(int *)(iVar3 + 8)) {
            iVar9 = 0;
            do {
              iVar3 = FUN_08935c14(*(int *)(param_1 + 0x60) + iVar9,*ppuVar13);
              if (iVar3 != 0) {
                iVar3 = iVar10 * 2;
                iVar10 = iVar10 + 1;
                *(short *)(*(int *)(iVar6 + 0x80) + iVar3) = (short)iVar12;
              }
              iVar3 = *(int *)(param_1 + 0x58);
              iVar12 = iVar12 + 1;
              iVar9 = iVar9 + 0x60;
            } while (iVar12 < *(int *)(iVar3 + 8));
          }
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 8;
        ppuVar13 = ppuVar13 + 1;
      } while (iVar8 < 2);
      if (0 < *(int *)(param_1 + 0x40)) {
        FUN_08896bf0(param_1 + 0xac,piVar11);
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x40));
      }
      if (0 < *(int *)(param_1 + 0x44)) {
        *(int *)(param_1 + 0xcc) = *piVar11;
        *(int **)(param_1 + 0xd0) = piVar11 + 1;
        *(int **)(param_1 + 0xd4) = piVar11 + 1 + *(int *)(param_1 + 0xcc);
        *(undefined1 *)(param_1 + 200) = 1;
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x44));
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      if (0 < (int)*(uint *)(param_1 + 0x48)) {
        uVar4 = *(uint *)(param_1 + 0x48) >> 6;
        *(uint *)(param_1 + 0xa0) = uVar4;
        *(int **)(param_1 + 0xa4) = piVar11;
        uVar15 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0xf0),uVar4 * 0xa0,0,0,1,0);
        *(undefined4 *)(param_1 + 0xa8) = uVar15;
        iVar3 = 0;
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0xa0)) {
          iVar8 = 0;
          do {
            FUN_0889e440(*(int *)(param_1 + 0xa8) + iVar6,*(int *)(param_1 + 0xa4) + iVar8);
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 0xa0;
            iVar8 = iVar8 + 0x40;
          } while (iVar3 < *(int *)(param_1 + 0xa0));
        }
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x48));
      }
      if (0 < *(int *)(param_1 + 0x4c)) {
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x4c));
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x50));
      }
      if (*(int *)(param_1 + 0x54) < 1) {
        *(int **)(param_1 + 4) = piVar11;
      }
      else {
        piVar11 = (int *)((int)piVar11 + *(int *)(param_1 + 0x54));
        *(int **)(param_1 + 4) = piVar11;
      }
      piVar7 = piVar11 + 0x14;
      *(int **)(param_1 + 8) = piVar7;
      piVar7 = piVar7 + piVar11[0xd] * 4;
      *(int **)(param_1 + 0xc) = piVar7;
      piVar7 = piVar7 + piVar11[0xe] * 4;
      *(int **)(param_1 + 0x10) = piVar7;
      iVar3 = piVar11[0xf];
      *(int **)(param_1 + 0x14) = piVar7 + iVar3 * 4;
      iVar6 = piVar11[1];
      iVar8 = piVar11[3];
      piVar5 = piVar7 + iVar3 * 4 + piVar11[0x10] * 6;
      piVar7 = piVar5 + iVar6 * iVar8 * 0x36 + 1;
      *(int **)(param_1 + 0x24) = piVar7;
      if (piVar11[2] == 1) {
        *(int **)(param_1 + 0x34) = piVar7;
        piVar7 = piVar5;
      }
      else {
        piVar7 = (int *)((int)piVar7 + piVar5[iVar6 * iVar8 * 0x36] * 2);
        *(int **)(param_1 + 0x34) = piVar7 + piVar11[2] * piVar11[1] * piVar11[3] * 0x36 + 1;
      }
      iVar6 = 0;
      iVar3 = param_1;
      do {
        iVar8 = iVar6 * piVar11[1];
        iVar6 = iVar6 + 1;
        *(int **)(iVar3 + 0x18) = piVar5 + iVar8 * piVar11[3] * 0x12;
        iVar3 = iVar3 + 4;
      } while (iVar6 < 3);
      iVar6 = 0;
      iVar3 = param_1;
      do {
        iVar8 = iVar6 * piVar11[2];
        iVar6 = iVar6 + 1;
        *(int **)(iVar3 + 0x28) = piVar7 + iVar8 * piVar11[1] * piVar11[3] * 0x12;
        iVar3 = iVar3 + 4;
      } while (iVar6 < 3);
      *(int *)(param_1 + 0xd8) = piVar11[4];
      *(int *)(param_1 + 0xdc) = piVar11[5];
      *(int *)(param_1 + 0xe0) = piVar11[6];
      uVar15 = 1;
      *(int *)(param_1 + 0xe4) = piVar11[10];
      *(int *)(param_1 + 0xe8) = piVar11[0xb];
      *(int *)(param_1 + 0xec) = piVar11[0xc];
    }
    else {
      uVar15 = 0;
    }
  }
  else {
    uVar15 = 0;
  }
  return uVar15;
}

