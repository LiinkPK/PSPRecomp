/* Entry 0x08974DCC | file offset 0x00171DA4 | FUN_08974dcc | bytes 1544 */

void FUN_08974dcc(undefined4 param_1,uint *param_2,int param_3,int *param_4)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  short sVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [12];
  undefined1 (*pauVar17) [16];
  int iVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 in_V2E;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined1 auStack_60 [20];
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 auVar8 [16];
  
  if ((*param_2 & 1) == 0) {
    bVar10 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar10 = true;
    }
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    fVar21 = *(float *)(param_3 + 0x3c);
    iVar18 = *(int *)*param_4;
    uVar19 = ((int *)*param_4)[1];
    bVar1 = *(byte *)(param_3 + 0x46);
    fVar24 = (float)param_4[1] + fVar21 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (fVar24 < 1.0) {
      param_4[1] = (int)fVar24;
      local_44 = 0;
    }
    else {
      local_44 = (uint)fVar24;
      fVar23 = (float)(int)local_44;
      if ((int)local_44 < 0) {
        fVar23 = fVar23 + 4.2949673e+09;
      }
      param_4[1] = (int)(fVar24 - fVar23);
      param_4[1] = (int)((fVar24 - fVar23) - (float)bVar1 * fVar21);
    }
    if (local_44 != 0) {
      local_4c = 0;
      uVar20 = 0;
      if (local_44 != 0) {
joined_r0x08974eec:
        do {
          if (uVar20 < uVar19) {
            if (*(char *)(iVar18 + uVar20 * 0x60 + 0x50) != '\0') {
              uVar20 = uVar20 + 1;
              goto joined_r0x08974eec;
            }
            iVar12 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar13 = iVar12 * 0x343fd + 0x269ec3;
            DAT_089da120 = iVar13 * 0x343fd + 0x269ec3;
            local_64 = 0x3f800000;
            local_70 = ((float)(iVar12 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            local_6c = ((float)(iVar13 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            local_68 = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 - 1.0;
            FUN_089a3bc8(&local_70,&local_70);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            iVar12 = iVar18 + uVar20 * 0x60;
            local_48 = uVar20;
            FUN_089a3a44(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) *
                         (*(float *)(param_3 + 0x38) - *(float *)(param_3 + 0x34)) +
                         *(float *)(param_3 + 0x34),iVar12,&local_70);
            iVar13 = iVar18 + uVar20 * 0x60;
            *(undefined4 *)(iVar13 + 0xc) = 0x3f800000;
            FUN_089a3868(iVar13 + 0x10,iVar12);
            FUN_089a38e0(auStack_60,&DAT_089da360,iVar12);
            FUN_089a3bc8(auStack_60,auStack_60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(*(float *)(param_3 + 0x2c) +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                          *(float *)(param_3 + 0x30) - *(float *)(param_3 + 0x30)),iVar13 + 0x30,
                         auStack_60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            FUN_089a3a44(*(float *)(param_3 + 0x24) +
                         (((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                          *(float *)(param_3 + 0x28) - *(float *)(param_3 + 0x28)),iVar13 + 0x20,
                         auStack_60);
            DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
            *(short *)(iVar13 + 0x40) =
                 *(short *)(param_3 + 0x42) +
                 (short)(int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 *
                              (float)*(ushort *)(param_3 + 0x44) -
                             (float)*(ushort *)(param_3 + 0x44));
            *(ushort *)(iVar13 + 0x42) = *(ushort *)(param_3 + 0x42) / 2;
            *(undefined4 *)(iVar13 + 0x44) = 0x3f800000;
            *(float *)(iVar13 + 0x48) = 2.0 / (float)*(ushort *)(param_3 + 0x42);
            uVar22 = *(undefined4 *)(param_3 + 0x20);
            *(undefined1 *)(iVar13 + 0x50) = 1;
            *(undefined4 *)(iVar13 + 0x4c) = uVar22;
            uVar20 = local_48;
          }
          local_4c = local_4c + 1;
        } while (local_4c < local_44);
      }
    }
    uVar20 = 0;
    if (uVar19 != 0) {
      do {
        if (*(char *)(iVar18 + uVar20 * 0x60 + 0x50) != '\0') {
          iVar12 = iVar18 + uVar20 * 0x60;
          sVar14 = *(short *)(iVar12 + 0x40) + -1;
          *(short *)(iVar12 + 0x40) = sVar14;
          if (sVar14 != 0) {
            iVar12 = iVar18 + uVar20 * 0x60;
            if (*(ushort *)(iVar12 + 0x40) < *(ushort *)(iVar12 + 0x42)) {
              iVar12 = iVar18 + uVar20 * 0x60;
              fVar21 = *(float *)(iVar12 + 0x44) - *(float *)(iVar12 + 0x48);
              *(float *)(iVar12 + 0x44) = fVar21;
              if (fVar21 < 0.0) {
                *(undefined4 *)(iVar18 + uVar20 * 0x60 + 0x44) = 0;
              }
            }
            pauVar15 = (undefined1 (*) [16])(iVar18 + uVar20 * 0x60);
            iVar18 = iVar18 + uVar20 * 0x60;
            pauVar16 = (undefined1 (*) [12])(iVar18 + 0x10);
            uVar22 = *(undefined4 *)*pauVar16;
            uVar36 = *(undefined4 *)(iVar18 + 0x14);
            uVar37 = *(undefined4 *)(iVar18 + 0x18);
            uVar4 = *(undefined4 *)(iVar18 + 0x1c);
            pauVar17 = (undefined1 (*) [16])(iVar18 + 0x20);
            uVar26 = *(undefined4 *)*pauVar17;
            uVar28 = *(undefined4 *)(iVar18 + 0x24);
            uVar30 = *(undefined4 *)(iVar18 + 0x28);
            uVar32 = *(undefined4 *)(iVar18 + 0x2c);
            auVar11 = *(undefined1 (*) [16])(iVar18 + 0x30);
            uVar35 = *(undefined4 *)(iVar18 + 0x4c);
            uVar33 = vdot_t(*(undefined1 (*) [12])*pauVar15,*(undefined1 (*) [12])*pauVar15);
            uVar34 = vdot_t(*(undefined1 (*) [12])*pauVar17,*(undefined1 (*) [12])*pauVar17);
            uVar33 = vsqrt_s(uVar33);
            uVar34 = vsqrt_s(uVar34);
            uVar19 = vcmp_s(3,uVar33,uVar34);
            if ((uVar19 & 1) == 0) {
              auVar2 = vadd_q(*pauVar15,*pauVar17);
              uVar25 = auVar2._0_4_;
              uVar27 = auVar2._4_4_;
              uVar29 = auVar2._8_4_;
              uVar31 = auVar2._12_4_;
            }
            else {
              auVar2 = vidt_q();
              auVar2 = vmov_q(auVar2);
              uVar25 = auVar2._0_4_;
              uVar27 = auVar2._4_4_;
              uVar29 = auVar2._8_4_;
              uVar31 = auVar2._12_4_;
              uVar33 = vsub_s(uVar34,uVar33);
              uVar35 = vsub_s(uVar35,uVar33);
              uVar33 = vzero_s();
              uVar19 = vcmp_s(6,uVar33,uVar35);
              if ((uVar19 & 1) != 0) {
                *(undefined4 *)(iVar18 + 0x50) = uVar33;
                auVar2 = vadd_q(auVar2,*pauVar17);
                uVar25 = auVar2._0_4_;
                uVar27 = auVar2._4_4_;
                uVar29 = auVar2._8_4_;
                uVar31 = auVar2._12_4_;
LAB_08975374:
                do {
                  auVar2._12_4_ = uVar32;
                  auVar2._8_4_ = uVar30;
                  auVar2._4_4_ = uVar28;
                  auVar2._0_4_ = uVar26;
                  auVar2 = vadd_q(auVar2,auVar11);
                  uVar26 = auVar2._0_4_;
                  uVar28 = auVar2._4_4_;
                  uVar30 = auVar2._8_4_;
                  uVar32 = auVar2._12_4_;
                  *(undefined4 *)*pauVar15 = uVar25;
                  *(undefined4 *)(*pauVar15 + 4) = uVar27;
                  *(undefined4 *)(*pauVar15 + 8) = uVar29;
                  *(undefined4 *)(*pauVar15 + 0xc) = uVar31;
                  *(undefined4 *)*pauVar16 = uVar22;
                  *(undefined4 *)(iVar18 + 0x14) = uVar36;
                  *(undefined4 *)(iVar18 + 0x18) = uVar37;
                  *(undefined4 *)(iVar18 + 0x1c) = uVar4;
                  *(undefined4 *)*pauVar17 = uVar26;
                  *(undefined4 *)(iVar18 + 0x24) = uVar28;
                  *(undefined4 *)(iVar18 + 0x28) = uVar30;
                  *(undefined4 *)(iVar18 + 0x2c) = uVar32;
                  *(undefined4 *)(iVar18 + 0x4c) = uVar35;
code_r0x08975354:
                  auVar7._12_4_ = uVar4;
                  auVar7._8_4_ = uVar37;
                  auVar7._4_4_ = uVar36;
                  auVar7._0_4_ = uVar22;
                  auVar8._12_4_ = uVar31;
                  auVar8._8_4_ = uVar29;
                  auVar8._4_4_ = uVar27;
                  auVar8._0_4_ = uVar25;
                  auVar2 = vsub_q(auVar7,auVar8);
                  auVar3 = auVar2._0_12_;
                  uVar22 = vdot_t(auVar3,auVar3);
                  uVar22 = vsqrt_s(uVar22);
                  uVar36 = vmov_s(uVar22);
                  uVar37 = vmov_s(uVar22);
                  auVar5._8_4_ = uVar37;
                  auVar5._4_4_ = uVar36;
                  auVar5._0_4_ = uVar22;
                  auVar3 = vdiv_t(auVar3,auVar5);
                  auVar9._12_4_ = in_V2E;
                  auVar9._8_4_ = auVar3._8_4_;
                  auVar9._4_4_ = auVar3._4_4_;
                  auVar9._0_4_ = auVar3._0_4_;
                  auVar2 = vscl_q(auVar9,uVar35);
                  in_V2E = auVar2._12_4_;
                  auVar6._8_4_ = uVar29;
                  auVar6._4_4_ = uVar27;
                  auVar6._0_4_ = uVar25;
                  auVar3 = vadd_t(auVar6,auVar2._0_12_);
                  uVar22 = auVar3._0_4_;
                  uVar36 = auVar3._4_4_;
                  uVar37 = auVar3._8_4_;
                } while( true );
              }
            }
            auVar3._8_4_ = uVar29;
            auVar3._4_4_ = uVar27;
            auVar3._0_4_ = uVar25;
            auVar3 = vsub_t(auVar3,*pauVar16);
            uVar33 = vdot_t(auVar3,auVar3);
            uVar33 = vsqrt_s(uVar33);
            uVar19 = vcmp_s(2,uVar35,uVar33);
            if ((uVar19 & 1) != 0) goto code_r0x08975354;
            goto LAB_08975374;
          }
          *(undefined1 *)(iVar18 + uVar20 * 0x60 + 0x50) = 0;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar19);
    }
  }
  return;
}

