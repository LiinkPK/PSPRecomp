/* Entry 0x089C3CDC | file offset 0x001C0CB4 | FUN_089c3cdc | bytes 484 */

void FUN_089c3cdc(undefined4 *param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [12];
  undefined1 (*pauVar14) [12];
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_V0E;
  undefined1 auStack_60 [64];
  float local_20;
  
  uVar6 = FUN_08983db4(*(undefined1 *)(param_2 + 0x3a),0,1,2);
  FUN_08983cd8(uVar6);
  FUN_089a03dc(9);
  FUN_089a03dc(4);
  FUN_08983b74(4);
  if (&stack0x00000000 != (undefined1 *)0x89da3d0) {
    puVar8 = *(undefined1 **)
              (*(int *)(*(int *)(DAT_09b6f478 + 0x8c) + 0x48) +
              (uint)*(ushort *)(*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) + 2) * 4);
    FUN_089477b4(0x3f800000,DAT_09b6f478,*(int *)(DAT_09b6f478 + 0x8c),&DAT_089da370,*puVar8,
                 puVar8[1],puVar8[2],auStack_60);
  }
  uVar16 = param_1[1];
  pauVar13 = (undefined1 (*) [12])*param_1;
  iVar7 = FUN_08974a3c(*(undefined4 *)(DAT_09b6f478 + 0xb0),uVar16 << 5);
  if (iVar7 != 0) {
    uVar15 = 0;
    local_20 = *(float *)(param_2 + 0x18) * 0.5;
    iVar9 = 0;
    if (uVar16 != 0) {
      pauVar4 = pauVar13 + 1;
      pauVar14 = pauVar13;
      do {
        pauVar5 = (undefined1 (*) [12])(*pauVar4 + 4);
        iVar10 = iVar9 + 1;
        puVar11 = (undefined4 *)(iVar7 + iVar9 * 0x10);
        iVar9 = iVar9 + 2;
        puVar12 = (undefined4 *)(iVar7 + iVar10 * 0x10);
        uVar6 = vdot_t(*pauVar5,*pauVar5);
        uVar6 = vsqrt_s(uVar6);
        uVar17 = vmov_s(uVar6);
        uVar18 = vmov_s(uVar6);
        auVar2._8_4_ = uVar18;
        auVar2._4_4_ = uVar17;
        auVar2._0_4_ = uVar6;
        auVar2 = vdiv_t(*pauVar5,auVar2);
        auVar3._12_4_ = in_V0E;
        auVar3._8_4_ = auVar2._8_4_;
        auVar3._4_4_ = auVar2._4_4_;
        auVar3._0_4_ = auVar2._0_4_;
        auVar3 = vscl_q(auVar3,local_20);
        in_V0E = auVar3._12_4_;
        auVar1 = vsub_t(*pauVar13,auVar3._0_12_);
        auVar2 = vadd_t(*pauVar13,auVar3._0_12_);
        puVar11[1] = auVar1._0_4_;
        puVar11[2] = auVar1._4_4_;
        puVar11[3] = auVar1._8_4_;
        puVar12[1] = auVar2._0_4_;
        puVar12[2] = auVar2._4_4_;
        puVar12[3] = auVar2._8_4_;
        uVar6 = *(undefined4 *)(pauVar14[2] + 8);
        *puVar12 = uVar6;
        *puVar11 = uVar6;
        uVar15 = uVar15 + 1;
        pauVar14 = (undefined1 (*) [12])(pauVar14[5] + 4);
        pauVar4 = (undefined1 (*) [12])(pauVar4[5] + 4);
        pauVar13 = (undefined1 (*) [12])(pauVar13[5] + 4);
      } while (uVar15 < uVar16);
    }
    if (iVar9 != 0) {
      FUN_089a0520(1,0x19c,iVar9,0,iVar7);
    }
  }
  return;
}

