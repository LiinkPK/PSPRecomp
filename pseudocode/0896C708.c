/* Entry 0x0896C708 | file offset 0x001696E0 | FUN_0896c708 | bytes 488 */

void FUN_0896c708(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_90 [2] [48];
  
  if (*(char *)((int)param_3 + 0xe) != '\0') {
    if (*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) == 0) {
      iVar6 = *(int *)(param_2 + 0x88) + 0x50;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x8c) + 0x1c) + 0x54);
    }
    FUN_0896c18c(local_90,iVar6,*(undefined4 *)(*(int *)(param_2 + 0x8c) + 0x50));
    auVar4._60_4_ = 0x3f800000;
    auVar4._0_60_ = ZEXT4860(local_90[0]);
    uVar9 = vone_s();
    auVar2._12_4_ = uVar9;
    auVar2._8_4_ = -(float)param_3[2];
    auVar2._4_4_ = -(float)param_3[1];
    auVar2._0_4_ = *param_3;
    auVar2 = vtfm4_q(auVar4,auVar2);
    auVar5._60_4_ = 0x3f800000;
    auVar5._0_60_ = ZEXT4860(local_90[0]);
    uVar9 = vone_s();
    auVar3._12_4_ = uVar9;
    auVar3._8_4_ = -(float)param_3[6];
    auVar3._4_4_ = -(float)param_3[5];
    auVar3._0_4_ = param_3[4];
    auVar3 = vtfm4_q(auVar5,auVar3);
    iVar8 = 0;
    iVar6 = 0;
    if (0 < *param_1) {
      do {
        puVar7 = (undefined4 *)(param_1[3] + iVar6);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar6),auVar2._0_12_);
        uVar9 = vone_s();
        *puVar7 = auVar1._0_4_;
        puVar7[1] = auVar1._4_4_;
        puVar7[2] = auVar1._8_4_;
        puVar7[3] = uVar9;
        puVar7 = (undefined4 *)(param_1[4] + iVar6);
        auVar1 = vadd_t(*(undefined1 (*) [12])(param_1[1] + iVar6),auVar3._0_12_);
        uVar9 = vone_s();
        *puVar7 = auVar1._0_4_;
        puVar7[1] = auVar1._4_4_;
        puVar7[2] = auVar1._8_4_;
        puVar7[3] = uVar9;
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar8 < *param_1);
    }
  }
  return;
}

