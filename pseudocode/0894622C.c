/* Entry 0x0894622C | file offset 0x00143204 | FUN_0894622c | bytes 1236 */

void FUN_0894622c(undefined4 param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [36];
  undefined1 auVar5 [64];
  undefined1 auVar6 [36];
  undefined1 auVar7 [64];
  undefined2 uVar8;
  int iVar9;
  undefined4 *puVar10;
  float fVar11;
  int iVar12;
  undefined4 in_V3C;
  undefined4 in_V3D;
  undefined4 in_V3E;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_30;
  float local_2c;
  
  iVar9 = *(int *)(param_2 + 0x1d0);
  puVar10 = (undefined4 *)(param_2 + 0x50);
  if (*(char *)(param_2 + 1) == '\0') {
    if (iVar9 == 0) {
      FUN_08935828((undefined4 *)(param_2 + 0x10),0,0x10);
      FUN_08935828(param_2 + 0x20,0,0x10);
      *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
      *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
      auVar5 = vmidt_q();
      uVar13 = vmul_s(auVar5._0_4_,*(undefined4 *)(param_2 + 0x30));
      uVar14 = vmul_s(auVar5._20_4_,*(undefined4 *)(param_2 + 0x34));
      uVar15 = vmul_s(auVar5._40_4_,*(undefined4 *)(param_2 + 0x38));
      *puVar10 = uVar13;
      *(int *)(param_2 + 0x54) = auVar5._4_4_;
      *(int *)(param_2 + 0x58) = auVar5._8_4_;
      *(int *)(param_2 + 0x5c) = auVar5._12_4_;
      *(int *)(param_2 + 0x60) = auVar5._16_4_;
      *(undefined4 *)(param_2 + 100) = uVar14;
      *(int *)(param_2 + 0x68) = auVar5._24_4_;
      *(int *)(param_2 + 0x6c) = auVar5._28_4_;
      *(int *)(param_2 + 0x70) = auVar5._32_4_;
      *(int *)(param_2 + 0x74) = auVar5._36_4_;
      *(undefined4 *)(param_2 + 0x78) = uVar15;
      *(int *)(param_2 + 0x7c) = auVar5._44_4_;
      *(int *)(param_2 + 0x80) = auVar5._48_4_;
      *(int *)(param_2 + 0x84) = auVar5._52_4_;
      *(int *)(param_2 + 0x88) = auVar5._56_4_;
      *(int *)(param_2 + 0x8c) = auVar5._60_4_;
      FUN_08945930(puVar10,puVar10,param_2 + 0x20,*(undefined1 *)(param_2 + 0x1d8));
      auVar5._60_4_ = *(undefined4 *)(param_2 + 0x10c);
      auVar5._56_4_ = *(undefined4 *)(param_2 + 0xfc);
      auVar5._52_4_ = *(undefined4 *)(param_2 + 0xec);
      auVar5._48_4_ = *(undefined4 *)(param_2 + 0xdc);
      auVar5._44_4_ = *(undefined4 *)(param_2 + 0x108);
      auVar5._40_4_ = *(undefined4 *)(param_2 + 0xf8);
      auVar5._36_4_ = *(undefined4 *)(param_2 + 0xe8);
      auVar5._32_4_ = *(undefined4 *)(param_2 + 0xd8);
      auVar5._28_4_ = *(undefined4 *)(param_2 + 0x104);
      auVar5._24_4_ = *(undefined4 *)(param_2 + 0xf4);
      auVar5._20_4_ = *(undefined4 *)(param_2 + 0xe4);
      auVar5._16_4_ = *(undefined4 *)(param_2 + 0xd4);
      auVar5._12_4_ = *(undefined4 *)(param_2 + 0x100);
      auVar5._8_4_ = *(undefined4 *)(param_2 + 0xf0);
      auVar5._4_4_ = *(undefined4 *)(param_2 + 0xe0);
      auVar5._0_4_ = *(undefined4 *)(param_2 + 0xd0);
      auVar7._60_4_ = *(undefined4 *)(param_2 + 0x8c);
      auVar7._56_4_ = *(undefined4 *)(param_2 + 0x7c);
      auVar7._52_4_ = *(undefined4 *)(param_2 + 0x6c);
      auVar7._48_4_ = *(undefined4 *)(param_2 + 0x5c);
      auVar7._44_4_ = *(undefined4 *)(param_2 + 0x88);
      auVar7._40_4_ = *(undefined4 *)(param_2 + 0x78);
      auVar7._36_4_ = *(undefined4 *)(param_2 + 0x68);
      auVar7._32_4_ = *(undefined4 *)(param_2 + 0x58);
      auVar7._28_4_ = *(undefined4 *)(param_2 + 0x84);
      auVar7._24_4_ = *(undefined4 *)(param_2 + 0x74);
      auVar7._20_4_ = *(undefined4 *)(param_2 + 100);
      auVar7._16_4_ = *(undefined4 *)(param_2 + 0x54);
      auVar7._12_4_ = *(undefined4 *)(param_2 + 0x80);
      auVar7._8_4_ = *(undefined4 *)(param_2 + 0x70);
      auVar7._4_4_ = *(undefined4 *)(param_2 + 0x60);
      auVar7._0_4_ = *puVar10;
      auVar5 = vmmul_q(auVar5,auVar7);
      *puVar10 = auVar5._0_4_;
      *(int *)(param_2 + 0x54) = auVar5._16_4_;
      *(int *)(param_2 + 0x58) = auVar5._32_4_;
      *(int *)(param_2 + 0x5c) = auVar5._48_4_;
      *(int *)(param_2 + 0x60) = auVar5._4_4_;
      *(int *)(param_2 + 100) = auVar5._20_4_;
      *(int *)(param_2 + 0x68) = auVar5._36_4_;
      *(int *)(param_2 + 0x6c) = auVar5._52_4_;
      *(int *)(param_2 + 0x70) = auVar5._8_4_;
      *(int *)(param_2 + 0x74) = auVar5._24_4_;
      *(int *)(param_2 + 0x78) = auVar5._40_4_;
      *(int *)(param_2 + 0x7c) = auVar5._56_4_;
      *(int *)(param_2 + 0x80) = auVar5._12_4_;
      *(int *)(param_2 + 0x84) = auVar5._28_4_;
      *(int *)(param_2 + 0x88) = auVar5._44_4_;
      *(int *)(param_2 + 0x8c) = auVar5._60_4_;
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
    }
    else if (*(int *)(param_2 + 0x17c) == 0) {
      auVar1 = vadd_t(*(undefined1 (*) [12])(param_2 + 0x90),*(undefined1 (*) [12])(iVar9 + 0x10));
      auVar2 = vadd_t(*(undefined1 (*) [12])(param_2 + 0xa0),*(undefined1 (*) [12])(iVar9 + 0x20));
      auVar3 = vmul_t(*(undefined1 (*) [12])(param_2 + 0xb0),*(undefined1 (*) [12])(iVar9 + 0x30));
      auVar5 = vmidt_q();
      uVar13 = vmov_s(auVar3._0_4_);
      uVar14 = vmov_s(auVar3._4_4_);
      uVar15 = vmov_s(auVar3._8_4_);
      *(undefined4 *)(param_2 + 0x10) = auVar1._0_4_;
      *(int *)(param_2 + 0x14) = auVar1._4_4_;
      *(int *)(param_2 + 0x18) = auVar1._8_4_;
      *(undefined4 *)(param_2 + 0x1c) = in_V3C;
      *(undefined4 *)(param_2 + 0x20) = auVar2._0_4_;
      *(int *)(param_2 + 0x24) = auVar2._4_4_;
      *(int *)(param_2 + 0x28) = auVar2._8_4_;
      *(undefined4 *)(param_2 + 0x2c) = in_V3D;
      *(int *)(param_2 + 0x30) = auVar3._0_4_;
      *(int *)(param_2 + 0x34) = auVar3._4_4_;
      *(int *)(param_2 + 0x38) = auVar3._8_4_;
      *(undefined4 *)(param_2 + 0x3c) = in_V3E;
      *puVar10 = uVar13;
      *(int *)(param_2 + 0x54) = auVar5._16_4_;
      *(int *)(param_2 + 0x58) = auVar5._32_4_;
      *(int *)(param_2 + 0x5c) = auVar5._48_4_;
      *(int *)(param_2 + 0x60) = auVar5._4_4_;
      *(undefined4 *)(param_2 + 100) = uVar14;
      *(int *)(param_2 + 0x68) = auVar5._36_4_;
      *(int *)(param_2 + 0x6c) = auVar5._52_4_;
      *(int *)(param_2 + 0x70) = auVar5._8_4_;
      *(int *)(param_2 + 0x74) = auVar5._24_4_;
      *(undefined4 *)(param_2 + 0x78) = uVar15;
      *(int *)(param_2 + 0x7c) = auVar5._56_4_;
      *(int *)(param_2 + 0x80) = auVar5._12_4_;
      *(int *)(param_2 + 0x84) = auVar5._28_4_;
      *(int *)(param_2 + 0x88) = auVar5._44_4_;
      *(int *)(param_2 + 0x8c) = auVar5._60_4_;
      FUN_08945930(puVar10,puVar10,(undefined4 *)(param_2 + 0x20),*(undefined1 *)(param_2 + 0x1d8));
      auVar4._32_4_ = *(undefined4 *)(param_2 + 0xf8);
      auVar4._28_4_ = *(undefined4 *)(param_2 + 0xe8);
      auVar4._24_4_ = *(undefined4 *)(param_2 + 0xd8);
      auVar4._20_4_ = *(undefined4 *)(param_2 + 0xf4);
      auVar4._16_4_ = *(undefined4 *)(param_2 + 0xe4);
      auVar4._12_4_ = *(undefined4 *)(param_2 + 0xd4);
      auVar4._8_4_ = *(undefined4 *)(param_2 + 0xf0);
      auVar4._4_4_ = *(undefined4 *)(param_2 + 0xe0);
      auVar4._0_4_ = *(undefined4 *)(param_2 + 0xd0);
      auVar6._32_4_ = *(undefined4 *)(param_2 + 0x78);
      auVar6._28_4_ = *(undefined4 *)(param_2 + 0x68);
      auVar6._24_4_ = *(undefined4 *)(param_2 + 0x58);
      auVar6._20_4_ = *(undefined4 *)(param_2 + 0x74);
      auVar6._16_4_ = *(undefined4 *)(param_2 + 100);
      auVar6._12_4_ = *(undefined4 *)(param_2 + 0x54);
      auVar6._8_4_ = *(undefined4 *)(param_2 + 0x70);
      auVar6._4_4_ = *(undefined4 *)(param_2 + 0x60);
      auVar6._0_4_ = *puVar10;
      auVar4 = vmmul_t(auVar4,auVar6);
      uVar13 = vzero_s();
      uVar14 = vzero_s();
      uVar15 = vzero_s();
      *puVar10 = auVar4._0_4_;
      *(int *)(param_2 + 0x54) = auVar4._12_4_;
      *(int *)(param_2 + 0x58) = auVar4._24_4_;
      *(undefined4 *)(param_2 + 0x5c) = uVar13;
      *(int *)(param_2 + 0x60) = auVar4._4_4_;
      *(int *)(param_2 + 100) = auVar4._16_4_;
      *(int *)(param_2 + 0x68) = auVar4._28_4_;
      *(undefined4 *)(param_2 + 0x6c) = uVar14;
      *(int *)(param_2 + 0x70) = auVar4._8_4_;
      *(int *)(param_2 + 0x74) = auVar4._20_4_;
      *(int *)(param_2 + 0x78) = auVar4._32_4_;
      *(undefined4 *)(param_2 + 0x7c) = uVar15;
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x80);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x84);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x88);
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
      *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
    }
    else {
      FUN_08970d9c(param_2,iVar9,(undefined1 (*) [12])(iVar9 + 0x10),puVar10);
    }
    goto LAB_08946680;
  }
  if (iVar9 == 0) {
    *(undefined4 *)(param_2 + 0x194) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    auVar5 = vmidt_q();
    *puVar10 = auVar5._0_4_;
    *(int *)(param_2 + 0x54) = auVar5._4_4_;
    *(int *)(param_2 + 0x58) = auVar5._8_4_;
    *(int *)(param_2 + 0x5c) = auVar5._12_4_;
    *(int *)(param_2 + 0x60) = auVar5._16_4_;
    *(int *)(param_2 + 100) = auVar5._20_4_;
    *(int *)(param_2 + 0x68) = auVar5._24_4_;
    *(int *)(param_2 + 0x6c) = auVar5._28_4_;
    *(int *)(param_2 + 0x70) = auVar5._32_4_;
    *(int *)(param_2 + 0x74) = auVar5._36_4_;
    *(int *)(param_2 + 0x78) = auVar5._40_4_;
    *(int *)(param_2 + 0x7c) = auVar5._44_4_;
    *(int *)(param_2 + 0x80) = auVar5._48_4_;
    *(int *)(param_2 + 0x84) = auVar5._52_4_;
    *(int *)(param_2 + 0x88) = auVar5._56_4_;
    *(int *)(param_2 + 0x8c) = auVar5._60_4_;
LAB_089465f0:
    fVar11 = *(float *)(param_2 + 0x194);
  }
  else {
    if (*(int *)(param_2 + 0x17c) != 0) {
      local_30 = 0.0;
      local_2c = 0.0;
      FUN_08970d9c(param_2,iVar9,iVar9 + 0x10,puVar10);
      FUN_0896ff84(param_2 + 0x80,&local_30);
      *(undefined4 *)(param_2 + 0x80) = 0;
      *(undefined4 *)(param_2 + 0x84) = 0;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(float *)(param_2 + 0x194) = *(float *)(param_2 + 0x90) + local_30;
      *(float *)(param_2 + 0x198) = *(float *)(param_2 + 0x94) + local_2c;
      goto LAB_089465f0;
    }
    *(float *)(param_2 + 0x194) = *(float *)(param_2 + 0x90) + *(float *)(iVar9 + 0x10);
    *(float *)(param_2 + 0x198) = *(float *)(param_2 + 0x94) + *(float *)(iVar9 + 0x14);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    auVar1 = vadd_t(*(undefined1 (*) [12])(param_2 + 0xa0),*(undefined1 (*) [12])(iVar9 + 0x20));
    uVar13 = vone_s();
    *(undefined4 *)(param_2 + 0x20) = auVar1._0_4_;
    *(int *)(param_2 + 0x24) = auVar1._4_4_;
    *(int *)(param_2 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(param_2 + 0x2c) = uVar13;
    auVar1 = vmul_t(*(undefined1 (*) [12])(param_2 + 0xb0),*(undefined1 (*) [12])(iVar9 + 0x30));
    uVar13 = vone_s();
    *(undefined4 *)(param_2 + 0x30) = auVar1._0_4_;
    *(int *)(param_2 + 0x34) = auVar1._4_4_;
    *(int *)(param_2 + 0x38) = auVar1._8_4_;
    *(undefined4 *)(param_2 + 0x3c) = uVar13;
    auVar5 = vmidt_q();
    uVar13 = vmul_s(auVar5._0_4_,*(undefined4 *)(param_2 + 0x30));
    uVar14 = vmul_s(auVar5._20_4_,*(undefined4 *)(param_2 + 0x34));
    uVar15 = vmul_s(auVar5._40_4_,*(undefined4 *)(param_2 + 0x38));
    *puVar10 = uVar13;
    *(int *)(param_2 + 0x54) = auVar5._4_4_;
    *(int *)(param_2 + 0x58) = auVar5._8_4_;
    *(int *)(param_2 + 0x5c) = auVar5._12_4_;
    *(int *)(param_2 + 0x60) = auVar5._16_4_;
    *(undefined4 *)(param_2 + 100) = uVar14;
    *(int *)(param_2 + 0x68) = auVar5._24_4_;
    *(int *)(param_2 + 0x6c) = auVar5._28_4_;
    *(int *)(param_2 + 0x70) = auVar5._32_4_;
    *(int *)(param_2 + 0x74) = auVar5._36_4_;
    *(undefined4 *)(param_2 + 0x78) = uVar15;
    *(int *)(param_2 + 0x7c) = auVar5._44_4_;
    *(int *)(param_2 + 0x80) = auVar5._48_4_;
    *(int *)(param_2 + 0x84) = auVar5._52_4_;
    *(int *)(param_2 + 0x88) = auVar5._56_4_;
    *(int *)(param_2 + 0x8c) = auVar5._60_4_;
    FUN_0894562c(puVar10,puVar10,(undefined4 *)(param_2 + 0x20),param_2 + 0x10,
                 *(undefined1 *)(param_2 + 0x1d8));
    fVar11 = *(float *)(param_2 + 0x194);
  }
  iVar9 = (int)(1808.0 - fVar11);
  if (iVar9 < 1) {
    iVar9 = 1;
  }
  else if (0xfff < iVar9) {
    iVar9 = 0xfff;
  }
  iVar12 = (int)(*(float *)(param_2 + 0x198) + 1912.0);
  *(float *)(param_2 + 0x194) = (float)iVar9;
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  else if (0xfff < iVar12) {
    iVar12 = 0xfff;
  }
  *(float *)(param_2 + 0x198) = (float)iVar12;
LAB_08946680:
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_2 + 0xcc);
  if (*(short *)(param_2 + 0x192) == 0) {
    uVar8 = FUN_089701c4(*(undefined1 *)(*(int *)(param_2 + 0x1cc) + 10),
                         *(undefined1 *)(*(int *)(param_2 + 0x1cc) + 0xb),param_2 + 0x80);
    *(undefined2 *)(param_2 + 400) = uVar8;
  }
  else {
    *(undefined2 *)(param_2 + 400) = 0x136;
  }
  return;
}

