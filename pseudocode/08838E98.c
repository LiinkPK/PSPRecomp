/* Entry 0x08838E98 | file offset 0x00035E70 | FUN_08838e98 | bytes 432 */

undefined4 FUN_08838e98(int param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0x534) + iVar6;
    if (((*(char *)(*(int *)(param_1 + 0x534) + 0x303) == '\0') && (*(int *)(iVar5 + 0x1a0) != 0))
       && (*(char *)(iVar5 + 0x1b4) != '\0')) {
      local_50 = *(undefined4 *)(iVar5 + 0x180);
      local_48 = *(undefined4 *)(iVar5 + 0x188);
      local_44 = *(undefined4 *)(iVar5 + 0x18c);
      local_4c = 0;
      iVar4 = FUN_089a3b70(&local_50);
      if (iVar4 == 1) {
        FUN_089a3868(&local_50,iVar5 + 400);
      }
      iVar5 = FUN_089a3b70(&local_50);
      if (iVar5 != 1) {
        auVar3._4_4_ = local_4c;
        auVar3._0_4_ = local_50;
        auVar3._8_4_ = local_48;
        auVar2._4_4_ = local_4c;
        auVar2._0_4_ = local_50;
        auVar2._8_4_ = local_48;
        auVar1._4_4_ = local_4c;
        auVar1._0_4_ = local_50;
        auVar1._8_4_ = local_48;
        uVar9 = vdot_t(auVar1,auVar2);
        uVar10 = vzero_s();
        uVar11 = vcmp_s(8,uVar9,local_50);
        local_40 = vsqrt_s(uVar9);
        vrcp_s(local_40);
        uVar9 = vcmovt_s(uVar10,(byte)uVar11 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar3,uVar9);
        local_50 = auVar1._0_4_;
        local_4c = auVar1._4_4_;
        local_48 = auVar1._8_4_;
        uVar9 = FUN_08868128(param_1 + 0x90,&local_50,0);
        fVar8 = (float)FUN_089a4500(uVar9);
        if (fVar8 < 1.5707964) {
          return 1;
        }
      }
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 0x40;
  } while (iVar7 < 6);
  return 0;
}

