/* Entry 0x0897585C | file offset 0x00172834 | FUN_0897585c | bytes 1408 */

void FUN_0897585c(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined1 (*pauVar10) [12];
  undefined4 *puVar11;
  short sVar12;
  undefined1 (*pauVar13) [12];
  int iVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 auStack_60 [28];
  uint local_44;
  uint local_40;
  uint local_3c;
  
  if ((*param_2 & 1) == 0) {
    bVar7 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar7 = true;
    }
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    fVar17 = param_3[6];
    iVar14 = *(int *)*param_4;
    uVar15 = ((int *)*param_4)[1];
    bVar1 = *(byte *)((int)param_3 + 0x22);
    fVar19 = (float)param_4[1] + fVar17 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar19 < 1.0) {
      param_4[1] = (int)fVar19;
      local_3c = 0;
    }
    else {
      local_3c = (uint)fVar19;
      fVar18 = (float)(int)local_3c;
      if ((int)local_3c < 0) {
        fVar18 = fVar18 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar19 - fVar18);
      param_4[1] = (int)((fVar19 - fVar18) - (float)bVar1 * fVar17);
    }
    if (local_3c != 0) {
      local_44 = 0;
      uVar16 = 0;
      if (local_3c != 0) {
joined_r0x0897597c:
        do {
          if (uVar16 < uVar15) {
            if (*(char *)(iVar14 + uVar16 * 0x40 + 0x3c) != '\0') {
              uVar16 = uVar16 + 1;
              goto joined_r0x0897597c;
            }
            iVar8 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar9 = iVar8 * 0x343fd + 0x269ec3;
            DAT_089da120 = iVar9 * 0x343fd + 0x269ec3;
            local_64 = 0x3f800000;
            local_70 = ((float)(iVar8 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            local_6c = ((float)(iVar9 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            local_68 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(&local_70,&local_70);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar8 = iVar14 + uVar16 * 0x40;
            local_40 = uVar16;
            FUN_089a3a64(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                         (param_3[5] - param_3[4]) + param_3[4],iVar8,&local_70);
            iVar9 = iVar14 + uVar16 * 0x40;
            *(undefined4 *)(iVar9 + 0xc) = 0x3f800000;
            FUN_089a38e0(auStack_60,&DAT_089da360,iVar8);
            FUN_089a3bc8(auStack_60,auStack_60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(param_3[2] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[3] -
                         param_3[3]),iVar9 + 0x20,auStack_60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(*param_3 +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] -
                         param_3[1]),iVar9 + 0x10,auStack_60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(iVar9 + 0x30) =
                 *(short *)((int)param_3 + 0x1e) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 8) - (float)*(ushort *)(param_3 + 8));
            *(ushort *)(iVar9 + 0x32) = *(ushort *)((int)param_3 + 0x1e) / 2;
            *(undefined4 *)(iVar9 + 0x34) = 0x3f800000;
            uVar2 = *(ushort *)((int)param_3 + 0x1e);
            *(undefined1 *)(iVar9 + 0x3c) = 1;
            *(float *)(iVar9 + 0x38) = 2.0 / (float)uVar2;
            uVar16 = local_40;
          }
          local_44 = local_44 + 1;
        } while (local_44 < local_3c);
      }
    }
    uVar16 = 0;
    if (uVar15 != 0) {
      do {
        if (*(char *)(iVar14 + uVar16 * 0x40 + 0x3c) != '\0') {
          iVar8 = iVar14 + uVar16 * 0x40;
          sVar12 = *(short *)(iVar8 + 0x30) + -1;
          *(short *)(iVar8 + 0x30) = sVar12;
          if (sVar12 == 0) {
            *(undefined1 *)(iVar14 + uVar16 * 0x40 + 0x3c) = 0;
          }
          else {
            iVar8 = iVar14 + uVar16 * 0x40;
            if (*(ushort *)(iVar8 + 0x30) < *(ushort *)(iVar8 + 0x32)) {
              iVar8 = iVar14 + uVar16 * 0x40;
              fVar17 = *(float *)(iVar8 + 0x34) - *(float *)(iVar8 + 0x38);
              *(float *)(iVar8 + 0x34) = fVar17;
              if (fVar17 < 0.0) {
                *(undefined4 *)(iVar14 + uVar16 * 0x40 + 0x34) = 0;
              }
            }
            pauVar13 = (undefined1 (*) [12])(iVar14 + uVar16 * 0x40);
            uVar5 = *(undefined4 *)pauVar13[1];
            iVar8 = iVar14 + uVar16 * 0x40;
            pauVar10 = (undefined1 (*) [12])(iVar8 + 0x10);
            uVar6 = *(undefined4 *)(iVar8 + 0x1c);
            uVar20 = vdot_t(*pauVar13,*pauVar13);
            fVar17 = (float)vsqrt_s(uVar20);
            uVar20 = vdot_t(*pauVar10,*pauVar10);
            fVar19 = (float)vsqrt_s(uVar20);
            if (fVar17 <= fVar19) {
              *(undefined1 *)(iVar14 + uVar16 * 0x40 + 0x3c) = 0;
            }
            else {
              iVar8 = iVar14 + uVar16 * 0x40;
              auVar3 = vadd_t(*pauVar13,*pauVar10);
              auVar4 = vadd_t(*pauVar10,*(undefined1 (*) [12])(iVar8 + 0x20));
              puVar11 = (undefined4 *)(iVar14 + uVar16 * 0x40);
              *puVar11 = auVar3._0_4_;
              puVar11[1] = auVar3._4_4_;
              puVar11[2] = auVar3._8_4_;
              puVar11[3] = uVar5;
              *(int *)(iVar8 + 0x10) = auVar4._0_4_;
              *(int *)(iVar8 + 0x14) = auVar4._4_4_;
              *(int *)(iVar8 + 0x18) = auVar4._8_4_;
              *(undefined4 *)(iVar8 + 0x1c) = uVar6;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
  }
  return;
}

