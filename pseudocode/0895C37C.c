/* Entry 0x0895C37C | file offset 0x00159354 | FUN_0895c37c | bytes 1300 */

void FUN_0895c37c(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  
  uVar14 = *(undefined4 *)
            (*(int *)(param_2 + 0x8c) +
             (uint)*(ushort *)
                    (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                    (*(int *)(*(int *)(param_2 + 0x90) + 4) + 3) * 2) + 0x60);
  uVar12 = FUN_089a04c4(1);
  FUN_089a03dc(1);
  FUN_089a03dc(2);
  FUN_089a03dc(5);
  bVar2 = *(byte *)(param_3 + 3);
  if (bVar2 == 0) {
    FUN_089a12a4(0,6,7,0,0);
  }
  else if (bVar2 < 2) {
    FUN_089a12a4(0,6,10,0,0xffffffff);
  }
  else if (bVar2 < 3) {
    FUN_089a12a4(2,6,10,0,0xffffffff);
  }
  FUN_089a0384(9);
  bVar1 = *(char *)((int)param_3 + 0xf) != '\0';
  iVar13 = *(int *)(param_2 + 0x8c) +
           (uint)*(ushort *)
                  (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                  (*(int *)(*(int *)(param_2 + 0x90) + 4) + 1) * 2);
  puVar9 = (undefined8 *)(iVar13 + 0x68);
  auVar3 = vmul_q(*(undefined1 (*) [16])(iVar13 + 0x60),
                  *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
  vpfxt(0,0,0,0);
  auVar5._4_8_ = *puVar9;
  auVar5._0_4_ = 0x437f0000;
  auVar5._12_4_ = 0;
  auVar3 = vmax_q(auVar3,auVar5 << 0x20);
  vpfxt(1,1,1,1);
  auVar7._4_8_ = *puVar9;
  auVar7._0_4_ = 0x437f0000;
  auVar7._12_4_ = 0;
  auVar3 = vmin_q(auVar3,auVar7 << 0x20);
  FUN_089a0c8c((int)auVar3._8_4_ << 0x10 | (int)auVar3._12_4_ << 0x18 | (int)auVar3._0_4_ |
               (int)auVar3._4_4_ << 8);
  FUN_0896fbf4();
  local_60 = *(float *)(*(int *)(param_2 + 0x8c) +
                        (uint)*(ushort *)
                               (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                               *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x68) * 0.017453292;
  uVar17 = vcst_s(5);
  uVar17 = vmul_s(local_60,uVar17);
  auVar7 = vrot_q(uVar17,1,2,0,0);
  auVar8 = vrot_q(uVar17,3,1,0,0);
  auVar3 = vidt_q();
  auVar5 = vidt_q();
  auVar6._60_4_ = auVar5._12_4_;
  auVar6._56_4_ = auVar3._12_4_;
  auVar6._52_4_ = auVar8._12_4_;
  auVar6._48_4_ = auVar7._12_4_;
  auVar6._44_4_ = auVar5._8_4_;
  auVar6._40_4_ = auVar3._8_4_;
  auVar6._36_4_ = auVar8._8_4_;
  auVar6._32_4_ = auVar7._8_4_;
  auVar6._28_4_ = auVar5._4_4_;
  auVar6._24_4_ = auVar3._4_4_;
  auVar6._20_4_ = auVar8._4_4_;
  auVar6._16_4_ = auVar7._4_4_;
  auVar6._12_4_ = auVar5._0_4_;
  auVar6._8_4_ = auVar3._0_4_;
  auVar6._4_4_ = auVar8._0_4_;
  auVar6._0_4_ = auVar7._0_4_;
  auVar10._60_4_ = DAT_089da05c;
  auVar10._56_4_ = DAT_089da04c;
  auVar10._52_4_ = DAT_089da03c;
  auVar10._48_4_ = DAT_089da02c;
  auVar10._44_4_ = DAT_089da058;
  auVar10._40_4_ = DAT_089da048;
  auVar10._36_4_ = DAT_089da038;
  auVar10._32_4_ = DAT_089da028;
  auVar10._28_4_ = DAT_089da054;
  auVar10._24_4_ = DAT_089da044;
  auVar10._20_4_ = DAT_089da034;
  auVar10._16_4_ = DAT_089da024;
  auVar10._12_4_ = DAT_089da050;
  auVar10._8_4_ = DAT_089da040;
  auVar10._4_4_ = DAT_089da030;
  auVar10._0_4_ = DAT_089da020;
  auVar6 = vmmul_q(auVar6,auVar10);
  auVar11._4_4_ = auVar6._16_4_;
  auVar11._0_4_ = auVar6._0_4_;
  auVar11._8_4_ = auVar6._32_4_;
  auVar11._12_4_ = auVar6._48_4_;
  auVar11._16_4_ = auVar6._4_4_;
  auVar11._20_4_ = auVar6._20_4_;
  auVar11._24_4_ = auVar6._36_4_;
  auVar11._28_4_ = auVar6._52_4_;
  auVar11._32_4_ = auVar6._8_4_;
  auVar11._36_4_ = auVar6._24_4_;
  auVar11._40_4_ = auVar6._40_4_;
  auVar11._44_4_ = auVar6._56_4_;
  auVar11._48_4_ = auVar6._12_4_;
  auVar11._52_4_ = auVar6._28_4_;
  auVar11._56_4_ = auVar6._44_4_;
  auVar11._60_4_ = auVar6._60_4_;
  uVar18 = vone_s();
  auVar3._8_8_ = (ulonglong)uVar18 << 0x20;
  auVar3._4_4_ = param_3[1];
  auVar3._0_4_ = *param_3;
  auVar3 = vtfm4_q(auVar11,auVar3);
  auVar4 = auVar3._0_12_;
  uVar17 = vdot_t(auVar4,auVar4);
  uVar16 = vzero_s();
  uVar19 = vcmp_s(8,uVar17,auVar3._0_4_);
  vrsq_s(uVar17);
  uVar17 = vcmovt_s(uVar16,(byte)uVar19 & 1);
  vpfxd(4,4,4,5);
  auVar4 = vscl_t(auVar4,uVar17);
  vone_s();
  uVar14 = FUN_0895b774(uVar14);
  auVar4 = vscl_t(auVar4,uVar14);
  local_70 = auVar4._0_4_;
  local_6c = auVar4._4_4_;
  local_68 = auVar4._8_4_;
  vzero_s();
  local_a0 = 0x3f800000;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x3f800000;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0x3f800000;
  local_74 = 0;
  local_64 = 0x3f800000;
  FUN_089a04f4(2,&local_a0);
  iVar13 = *(int *)(param_2 + 0xac);
  if (*(char *)((int)param_3 + 0xd) == '\x01') {
    *(undefined4 *)(iVar13 + 0x40) = 1;
    iVar15 = 0;
    if (*(char *)((int)param_3 + 0xe) != '\0') {
      do {
        FUN_08973714(iVar13,1);
        FUN_0897371c(iVar13,bVar1,bVar1,1,1);
        FUN_089a0520(4,0x183,10,0,*(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 4));
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)(uint)*(byte *)((int)param_3 + 0xe));
    }
    *(int *)(param_1 + 8) = 1 - *(int *)(param_1 + 8);
  }
  else {
    *(undefined4 *)(iVar13 + 0x40) = 0;
    FUN_08973714(iVar13,0);
    FUN_0897371c(iVar13,bVar1,bVar1,1,1);
    iVar13 = 0;
    if (*(char *)((int)param_3 + 0xe) != '\0') {
      do {
        FUN_089a0520(4,0x183,10,0,*(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 4));
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)*(byte *)((int)param_3 + 0xe));
    }
    *(int *)(param_1 + 8) = 1 - *(int *)(param_1 + 8);
  }
  FUN_0896fbc0();
  FUN_089a0438(1,uVar12);
  *(undefined4 *)(*(int *)(param_2 + 0xa4) + 0x18) = 0xfffffffe;
  return;
}

