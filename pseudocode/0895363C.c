/* Entry 0x0895363C | file offset 0x00150614 | FUN_0895363c | bytes 360 */

void FUN_0895363c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined1 (*param_5) [16])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_50 [64];
  
  uVar9 = vmul_s(param_1,param_1);
  uVar9 = vmul_s(uVar9,0x3f000000);
  auVar2 = vscl_q(param_5[2],param_1);
  auVar2 = vadd_q(param_5[1],auVar2);
  auVar3 = vscl_q(param_5[3],uVar9);
  auVar2 = vadd_q(auVar2,auVar3);
  *(int *)*param_5 = auVar2._0_4_;
  *(int *)(*param_5 + 4) = auVar2._4_4_;
  *(int *)(*param_5 + 8) = auVar2._8_4_;
  *(int *)(*param_5 + 0xc) = auVar2._12_4_;
  puVar4 = (undefined8 *)(*param_5 + 8);
  auVar2 = vmul_q(*param_5,*(undefined1 (*) [16])(*(int *)(param_3 + 0x88) + 0x40));
  vpfxt(0,0,0,0);
  auVar3._4_8_ = *puVar4;
  auVar3._0_4_ = 0x437f0000;
  auVar3._12_4_ = 0;
  auVar2 = vmax_q(auVar2,auVar3 << 0x20);
  vpfxt(1,1,1,1);
  auVar5._4_8_ = *puVar4;
  auVar5._0_4_ = 0x437f0000;
  auVar5._12_4_ = 0;
  auVar2 = vmin_q(auVar2,auVar5 << 0x20);
  auVar1 = vscl_t(auVar2._0_12_,(auVar2._12_4_ * 0.003921569) / 255.0);
  vzero_s();
  vpfxt(0,0,0,3);
  auVar6._4_4_ = *(undefined4 *)puVar4;
  auVar6._0_4_ = 0x437f0000;
  auVar6._8_4_ = 0;
  auVar1 = vmax_t(auVar1,auVar6 << 0x20);
  vpfxt(1,1,1,3);
  auVar7._4_4_ = *(undefined4 *)puVar4;
  auVar7._0_4_ = 0x437f0000;
  auVar7._8_4_ = 0;
  auVar1 = vmin_t(auVar1,auVar7 << 0x20);
  uVar9 = vone_s();
  if (*(int *)(*(int *)(param_3 + 0x8c) + 0x1c) == 0) {
    iVar8 = *(int *)(param_3 + 0x88) + 0x50;
  }
  else {
    iVar8 = *(int *)(*(int *)(*(int *)(param_3 + 0x8c) + 0x1c) + 0x54);
  }
  FUN_089484a4(param_3,2,&DAT_089d9fd0,*(undefined4 *)(*(int *)(param_3 + 0x8c) + 0x50),iVar8,
               auStack_50,0,0,auVar1._0_4_,auVar1._4_4_,auVar1._8_4_,uVar9);
  return;
}

