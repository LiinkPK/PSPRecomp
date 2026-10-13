/* Entry 0x0897A928 | file offset 0x00177900 | FUN_0897a928 | bytes 2436 */

void FUN_0897a928(undefined4 param_1,uint *param_2,int param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 (*pauVar4) [12];
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 local_100 [12];
  undefined4 local_f4;
  undefined1 auStack_f0 [16];
  undefined1 local_e0 [12];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [12];
  float local_74;
  undefined1 auStack_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  uint local_44;
  uint local_40;
  
  if ((*param_2 & 1) == 0) {
    bVar3 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    fVar14 = *(float *)(param_3 + 0x20);
    iVar6 = *(int *)*param_4;
    uVar7 = ((int *)*param_4)[1];
    bVar1 = *(byte *)(param_3 + 0x2a);
    fVar17 = (float)param_4[1] + fVar14 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar17 < 1.0) {
      param_4[1] = (int)fVar17;
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)fVar17;
      fVar16 = (float)(int)uVar15;
      if ((int)uVar15 < 0) {
        fVar16 = fVar16 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar17 - fVar16);
      param_4[1] = (int)((fVar17 - fVar16) - (float)bVar1 * fVar14);
    }
    if (uVar15 != 0) {
      uVar11 = 0;
      uVar8 = 0;
      if (uVar15 != 0) {
joined_r0x0897aa48:
        do {
          if (uVar8 < uVar7) {
            if (*(char *)(iVar6 + uVar8 * 0x40 + 0x34) != '\0') {
              uVar8 = uVar8 + 1;
              goto joined_r0x0897aa48;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar9 = (float *)(iVar6 + uVar8 * 0x40);
            *pfVar9 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar9[1] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar9[2] = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            local_44 = uVar11;
            local_40 = uVar8;
            FUN_089a3bc8(pfVar9,pfVar9);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                         *(float *)(param_3 + 0x1c),pfVar9,pfVar9);
            iVar10 = iVar6 + uVar8 * 0x40;
            *(undefined4 *)(iVar10 + 0xc) = 0x3f800000;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            pfVar9 = (float *)(iVar10 + 0x10);
            *pfVar9 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(float *)(iVar10 + 0x14) =
                 ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar8 = DAT_089da120 >> 0x10;
            *(undefined4 *)(iVar10 + 0x1c) = 0;
            *(float *)(iVar10 + 0x18) = ((float)(uVar8 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(pfVar9,pfVar9);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(float *)(iVar10 + 0x20) =
                 *(float *)(param_3 + 0xc) +
                 (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                  *(float *)(param_3 + 0x10) - *(float *)(param_3 + 0x10));
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(float *)(iVar10 + 0x24) =
                 *(float *)(param_3 + 0x14) +
                 (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                  *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x18));
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(iVar10 + 0x28) =
                 *(short *)(param_3 + 0x26) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0x28) -
                             (float)*(ushort *)(param_3 + 0x28));
            *(ushort *)(iVar10 + 0x2a) = *(ushort *)(param_3 + 0x26) / 2;
            *(undefined4 *)(iVar10 + 0x2c) = 0x3f800000;
            uVar2 = *(ushort *)(param_3 + 0x26);
            *(undefined1 *)(iVar10 + 0x34) = 1;
            *(float *)(iVar10 + 0x30) = 2.0 / (float)uVar2;
            uVar8 = local_40;
            uVar11 = local_44;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar15);
      }
    }
    uVar15 = 0;
    if (uVar7 != 0) {
      do {
        if (*(char *)(iVar6 + uVar15 * 0x40 + 0x34) != '\0') {
          iVar10 = iVar6 + uVar15 * 0x40;
          sVar5 = *(short *)(iVar10 + 0x28) + -1;
          *(short *)(iVar10 + 0x28) = sVar5;
          if (sVar5 == 0) {
            *(undefined1 *)(iVar6 + uVar15 * 0x40 + 0x34) = 0;
          }
          else {
            iVar10 = iVar6 + uVar15 * 0x40;
            if (*(ushort *)(iVar10 + 0x28) < *(ushort *)(iVar10 + 0x2a)) {
              iVar10 = iVar6 + uVar15 * 0x40;
              fVar14 = *(float *)(iVar10 + 0x2c) - *(float *)(iVar10 + 0x30);
              *(float *)(iVar10 + 0x2c) = fVar14;
              if (fVar14 < 0.0) {
                *(undefined4 *)(iVar6 + uVar15 * 0x40 + 0x2c) = 0;
              }
            }
            iVar12 = iVar6 + uVar15 * 0x40;
            FUN_089a3868(local_100,iVar12);
            iVar10 = iVar6 + uVar15 * 0x40;
            FUN_089a3a44(*(undefined4 *)(iVar10 + 0x20),auStack_f0,iVar10 + 0x10);
            FUN_089a38c4(iVar12,iVar12,auStack_f0);
            fVar14 = *(float *)(iVar10 + 0x20);
            do {
              pauVar4 = (undefined1 (*) [12])(iVar6 + uVar15 * 0x40);
              uVar18 = vdot_t(*pauVar4,*pauVar4);
              local_60 = (float)vsqrt_s(uVar18);
              if (local_60 <= *(float *)(param_3 + 0x1c)) goto LAB_0897b250;
              FUN_089a38e0(local_e0,local_100,&DAT_089da360);
              FUN_089a3bc8(auStack_d0,local_e0);
              fVar17 = (float)FUN_089a3b10(iVar6 + uVar15 * 0x40 + 0x10,auStack_d0);
              if (1.0 <= fVar17) {
                FUN_089a3a44(*(float *)(param_3 + 0x1c) - 0.001,local_100,auStack_d0);
                uVar18 = vdot_t(local_e0,local_e0);
                local_5c = (float)vsqrt_s(uVar18);
                fVar17 = *(float *)(param_3 + 0x1c) - local_5c;
              }
              else if (fVar17 <= -1.0) {
                FUN_089a3a44(0.001 - *(float *)(param_3 + 0x1c),local_100,auStack_d0);
                uVar18 = vdot_t(local_e0,local_e0);
                local_58 = (float)vsqrt_s(uVar18);
                fVar17 = *(float *)(param_3 + 0x1c) - local_58;
              }
              else {
                fVar16 = (float)FUN_089a3b10(iVar6 + uVar15 * 0x40 + 0x10,local_e0);
                if (fVar16 < 0.0) {
                  fVar16 = -fVar16;
                }
                uVar18 = vdot_t(local_100,local_100);
                local_54 = (float)vsqrt_s(uVar18);
                fVar17 = local_54 * local_54 - fVar16 * fVar16;
                if (0.0 < fVar17) {
                  fVar17 = SQRT(fVar17);
                  fVar13 = *(float *)(param_3 + 0x1c);
                }
                else {
                  fVar17 = 0.0;
                  fVar13 = *(float *)(param_3 + 0x1c);
                }
                fVar17 = fVar13 * fVar13 - fVar17 * fVar17;
                if (0.0 < fVar17) {
                  fVar17 = SQRT(fVar17);
                }
                else {
                  fVar17 = 0.0;
                }
                fVar17 = fVar17 - fVar16;
                FUN_089a3a44(fVar17,auStack_b0,iVar6 + uVar15 * 0x40 + 0x10);
                FUN_089a38c4(local_100,local_100,auStack_b0);
                FUN_089a3bc8(auStack_a0,local_100);
                FUN_089a3a44(*(float *)(param_3 + 0x1c) - 0.001,local_100,auStack_a0);
              }
              local_f4 = 0x3f800000;
              iVar10 = iVar6 + uVar15 * 0x40 + 0x10;
              FUN_089a3868(auStack_90,iVar10);
              FUN_089a38e0(auStack_80,&DAT_089da400,local_100);
              local_74 = -local_74;
              FUN_089a3bc8(auStack_80,auStack_80);
              fVar16 = (float)FUN_089a3b10(auStack_80,auStack_90);
              FUN_089a3a44(fVar16 * 2.0,iVar10,auStack_80);
              FUN_089a38e0(iVar10,auStack_90,iVar10);
              FUN_089a3bc8(iVar10,iVar10);
              fVar14 = fVar14 - fVar17;
              if (fVar14 < 0.0) {
                fVar14 = 0.0;
              }
              FUN_089a3a44(fVar14,auStack_c0,iVar6 + uVar15 * 0x40 + 0x10);
              FUN_089a38c4(iVar6 + uVar15 * 0x40,local_100,auStack_c0);
            } while (0.001 <= fVar14);
            pauVar4 = (undefined1 (*) [12])(iVar6 + uVar15 * 0x40);
            uVar18 = vdot_t(*pauVar4,*pauVar4);
            local_50 = (float)vsqrt_s(uVar18);
            if (*(float *)(param_3 + 0x1c) < local_50) {
              iVar10 = iVar6 + uVar15 * 0x40;
              FUN_089a3868(iVar10,local_100);
              FUN_089a38e0(auStack_70,&DAT_089da400,iVar10);
              local_64 = -local_64;
              FUN_089a3bc8(auStack_70,auStack_70);
              FUN_089a3a44(0xbf800000,iVar6 + uVar15 * 0x40 + 0x10,auStack_70);
            }
LAB_0897b250:
            iVar10 = iVar6 + uVar15 * 0x40;
            *(float *)(iVar10 + 0x20) = *(float *)(iVar10 + 0x20) + *(float *)(iVar10 + 0x24);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar7);
    }
  }
  return;
}

