/* Entry 0x0897F3E4 | file offset 0x0017C3BC | FUN_0897f3e4 | bytes 2260 */

void FUN_0897f3e4(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  bool bVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  float *pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float local_c0 [5];
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [12];
  undefined1 auStack_90 [16];
  undefined1 local_80 [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  float local_50;
  float local_4c;
  uint local_48;
  uint local_44;
  
  if ((*param_2 & 1) == 0) {
    bVar4 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar4 = true;
    }
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    fVar17 = param_3[7];
    iVar11 = *(int *)*param_4;
    uVar12 = ((int *)*param_4)[1];
    bVar1 = *(byte *)((int)param_3 + 0x26);
    fVar20 = (float)param_4[1] + fVar17 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar20 < 1.0) {
      param_4[1] = (int)fVar20;
      uVar18 = 0;
    }
    else {
      uVar18 = (uint)fVar20;
      fVar19 = (float)(int)uVar18;
      if ((int)uVar18 < 0) {
        fVar19 = fVar19 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar20 - fVar19);
      param_4[1] = (int)((fVar20 - fVar19) - (float)bVar1 * fVar17);
    }
    if (uVar18 != 0) {
      fVar20 = *param_3;
      fVar19 = param_3[1];
      fVar17 = param_3[2];
      uVar14 = 0;
      uVar8 = 0;
      if (uVar18 != 0) {
joined_r0x0897f530:
        do {
          if (uVar8 < uVar12) {
            if (*(char *)(iVar11 + uVar8 * 0x40 + 0x30) != '\0') {
              uVar8 = uVar8 + 1;
              goto joined_r0x0897f530;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar15 = (float *)(iVar11 + uVar8 * 0x40);
            *pfVar15 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar20 * 0.5 -
                       fVar20 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar9 = pfVar15 + 4;
            pfVar15[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * fVar19 * 0.5 -
                         fVar19 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar10 = DAT_089da120 >> 0x10;
            pfVar15[3] = 1.0;
            pfVar15[2] = ((float)(uVar10 & 0x7fff) / 32767.0) * 2.0 * fVar17 * 0.5 - fVar17 * 0.5;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *pfVar9 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar15[5] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar15[6] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            local_48 = uVar14;
            FUN_089a3bc8(pfVar9,pfVar9);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar15[8] = param_3[3] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[4] -
                         param_3[4]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar15[9] = param_3[5] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[6] -
                         param_3[6]);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)((int)pfVar15 + 0x32) =
                 *(short *)((int)param_3 + 0x22) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 9) - (float)*(ushort *)(param_3 + 9));
            *(ushort *)(pfVar15 + 0xd) = *(ushort *)((int)param_3 + 0x22) / 2;
            pfVar15[10] = 1.0;
            uVar2 = *(ushort *)((int)param_3 + 0x22);
            *(undefined1 *)(pfVar15 + 0xc) = 1;
            pfVar15[0xb] = 2.0 / (float)uVar2;
            uVar14 = local_48;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar18);
      }
    }
    local_c0[3] = 0.0;
    local_a4 = 0;
    local_c0[0] = *param_3 * -0.5 - 0.0001;
    local_c0[1] = param_3[1] * -0.5 - 0.0001;
    local_c0[2] = param_3[2] * -0.5 - 0.0001;
    local_c0[4] = *param_3 * 0.5 + 0.0001;
    local_ac = param_3[1] * 0.5 + 0.0001;
    uVar18 = 0;
    local_a8 = param_3[2] * 0.5 + 0.0001;
    if (uVar12 != 0) {
      do {
        if (*(char *)(iVar11 + uVar18 * 0x40 + 0x30) != '\0') {
          iVar6 = iVar11 + uVar18 * 0x40;
          sVar7 = *(short *)(iVar6 + 0x32) + -1;
          *(short *)(iVar6 + 0x32) = sVar7;
          if (sVar7 == 0) {
            *(undefined1 *)(iVar11 + uVar18 * 0x40 + 0x30) = 0;
          }
          else {
            iVar6 = iVar11 + uVar18 * 0x40;
            if (*(ushort *)(iVar6 + 0x32) < *(ushort *)(iVar6 + 0x34)) {
              iVar6 = iVar11 + uVar18 * 0x40;
              fVar17 = *(float *)(iVar6 + 0x28) - *(float *)(iVar6 + 0x2c);
              *(float *)(iVar6 + 0x28) = fVar17;
              if (fVar17 < 0.0) {
                *(undefined4 *)(iVar11 + uVar18 * 0x40 + 0x28) = 0;
              }
            }
            iVar13 = iVar11 + uVar18 * 0x40;
            FUN_089a3868(local_a0,iVar13);
            iVar6 = iVar11 + uVar18 * 0x40;
            FUN_089a3a44(*(undefined4 *)(iVar6 + 0x20),auStack_90,iVar6 + 0x10);
            FUN_089a38c4(iVar13,iVar13,auStack_90);
            fVar17 = *(float *)(iVar6 + 0x20);
            while( true ) {
              FUN_089a3868(local_80,iVar11 + uVar18 * 0x40);
              uVar14 = 0;
              bVar4 = false;
              uVar8 = 0xffffffff;
              do {
                uVar16 = 0;
                uVar10 = uVar14;
                do {
                  bVar5 = false;
                  if (uVar10 == 0) {
                    if (*(float *)(local_80 + uVar16 * 4) < local_c0[uVar14 * 4 + uVar16]) {
                      bVar5 = true;
                    }
                  }
                  else if (local_c0[uVar14 * 4 + uVar16] < *(float *)(local_80 + uVar16 * 4)) {
                    bVar5 = true;
                  }
                  if (bVar5) {
                    fVar20 = *(float *)(local_80 + uVar16 * 4) - *(float *)(local_a0 + uVar16 * 4);
                    if (fVar20 < 0.0) {
                      fVar20 = -fVar20;
                    }
                    fVar19 = local_c0[uVar14 * 4 + uVar16] - *(float *)(local_a0 + uVar16 * 4);
                    if (fVar19 < 0.0) {
                      fVar19 = -fVar19;
                    }
                    if (fVar20 == 0.0) {
                      fVar19 = 0.0;
                    }
                    else {
                      fVar19 = fVar19 / fVar20;
                    }
                    auVar3 = vsub_t(local_a0,local_80);
                    uVar21 = vdot_t(auVar3,auVar3);
                    local_50 = (float)vsqrt_s(uVar21);
                    local_44 = uVar10;
                    FUN_089a3a44(local_50 * fVar19,auStack_70,iVar11 + uVar18 * 0x40 + 0x10);
                    FUN_089a38c4(local_80,local_a0,auStack_70);
                    if (local_c0[uVar14 * 4 + uVar16] < 0.0) {
                      fVar20 = -0.0001;
                    }
                    else {
                      fVar20 = 0.0001;
                    }
                    bVar4 = true;
                    *(float *)(local_80 + uVar16 * 4) = local_c0[uVar14 * 4 + uVar16] + fVar20;
                    uVar8 = uVar16;
                    uVar10 = local_44;
                  }
                  uVar16 = uVar16 + 1;
                } while (uVar16 < 3);
                uVar14 = uVar10 + 1;
              } while (uVar14 < 2);
              if (!bVar4) break;
              auVar3 = vsub_t(local_80,local_a0);
              uVar21 = vdot_t(auVar3,auVar3);
              local_4c = (float)vsqrt_s(uVar21);
              fVar17 = fVar17 - local_4c;
              if (fVar17 <= 0.0) break;
              if (uVar8 == 0xffffffff) {
                return;
              }
              iVar6 = iVar11 + uVar18 * 0x40 + 0x10;
              pfVar9 = (float *)(iVar6 + uVar8 * 4);
              *pfVar9 = -*pfVar9;
              FUN_089a3a44(fVar17,auStack_60,iVar6);
              FUN_089a3868(local_a0,local_80);
              FUN_089a38c4(iVar11 + uVar18 * 0x40,local_a0,auStack_60);
            }
            iVar6 = iVar11 + uVar18 * 0x40;
            *(float *)(iVar6 + 0x20) = *(float *)(iVar6 + 0x20) + *(float *)(iVar6 + 0x24);
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar12);
    }
  }
  return;
}

