/* Entry 0x0897E3E8 | file offset 0x0017B3C0 | FUN_0897e3e8 | bytes 1288 */

void FUN_0897e3e8(undefined4 param_1,uint *param_2,float *param_3,int *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  short sVar8;
  undefined1 (*pauVar9) [12];
  undefined1 (*pauVar10) [16];
  uint uVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  
  if ((*param_2 & 1) == 0) {
    bVar6 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar6 = true;
    }
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    fVar17 = param_3[5];
    iVar12 = *(int *)*param_4;
    uVar13 = ((int *)*param_4)[1];
    bVar1 = *(byte *)((int)param_3 + 0x1e);
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
      uVar16 = 0;
      uVar15 = 0;
      if (uVar18 != 0) {
joined_r0x0897e508:
        do {
          if (uVar15 < uVar13) {
            if (*(char *)(iVar12 + uVar15 * 0x40 + 0x3c) != '\0') {
              uVar15 = uVar15 + 1;
              goto joined_r0x0897e508;
            }
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar7 = iVar12 + uVar15 * 0x40;
            pfVar14 = (float *)(iVar7 + 0x10);
            *pfVar14 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(float *)(iVar7 + 0x14) =
                 ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            uVar11 = DAT_089da120 >> 0x10;
            *(undefined4 *)(iVar7 + 0x1c) = 0;
            *(float *)(iVar7 + 0x18) = ((float)(uVar11 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(pfVar14,pfVar14);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(param_3[2] +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[3] -
                         param_3[3]),iVar7 + 0x20,pfVar14);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(*param_3 +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_3[1] -
                         param_3[1]),pfVar14,pfVar14);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0,iVar12 + uVar15 * 0x40,
                         pfVar14);
            *(undefined4 *)(iVar7 + 0xc) = 0x3f800000;
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(iVar7 + 0x30) =
                 *(short *)((int)param_3 + 0x1a) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 7) - (float)*(ushort *)(param_3 + 7));
            *(ushort *)(iVar7 + 0x32) = *(ushort *)((int)param_3 + 0x1a) / 2;
            *(undefined4 *)(iVar7 + 0x34) = 0x3f800000;
            uVar2 = *(ushort *)((int)param_3 + 0x1a);
            *(undefined1 *)(iVar7 + 0x3c) = 1;
            *(float *)(iVar7 + 0x38) = 2.0 / (float)uVar2;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
    }
    fVar17 = param_3[4];
    uVar18 = 0;
    if (uVar13 != 0) {
      do {
        if (*(char *)(iVar12 + uVar18 * 0x40 + 0x3c) != '\0') {
          iVar7 = iVar12 + uVar18 * 0x40;
          sVar8 = *(short *)(iVar7 + 0x30) + -1;
          *(short *)(iVar7 + 0x30) = sVar8;
          if (sVar8 == 0) {
            *(undefined1 *)(iVar12 + uVar18 * 0x40 + 0x3c) = 0;
          }
          else {
            iVar7 = iVar12 + uVar18 * 0x40;
            if (*(ushort *)(iVar7 + 0x30) < *(ushort *)(iVar7 + 0x32)) {
              iVar7 = iVar12 + uVar18 * 0x40;
              fVar20 = *(float *)(iVar7 + 0x34) - *(float *)(iVar7 + 0x38);
              *(float *)(iVar7 + 0x34) = fVar20;
              if (fVar20 < 0.0) {
                *(undefined4 *)(iVar12 + uVar18 * 0x40 + 0x34) = 0;
              }
            }
            pauVar9 = (undefined1 (*) [12])(iVar12 + uVar18 * 0x40);
            uVar5 = *(undefined4 *)pauVar9[1];
            iVar7 = iVar12 + uVar18 * 0x40;
            pauVar10 = (undefined1 (*) [16])(iVar7 + 0x10);
            auVar3 = vadd_t(*pauVar9,*(undefined1 (*) [12])*pauVar10);
            auVar4 = vadd_q(*pauVar10,*(undefined1 (*) [16])(iVar7 + 0x20));
            auVar4 = vsub_q(auVar4,ZEXT416((uint)fVar17) << 0x20);
            *(int *)*pauVar9 = auVar3._0_4_;
            *(int *)(*pauVar9 + 4) = auVar3._4_4_;
            *(int *)(*pauVar9 + 8) = auVar3._8_4_;
            *(undefined4 *)pauVar9[1] = uVar5;
            *(int *)*pauVar10 = auVar4._0_4_;
            *(int *)(iVar7 + 0x14) = auVar4._4_4_;
            *(int *)(iVar7 + 0x18) = auVar4._8_4_;
            *(int *)(iVar7 + 0x1c) = auVar4._12_4_;
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar13);
    }
  }
  return;
}

