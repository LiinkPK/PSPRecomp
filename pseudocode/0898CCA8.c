/* Entry 0x0898CCA8 | file offset 0x00189C80 | FUN_0898cca8 | bytes 928 */

void FUN_0898cca8(undefined4 *param_1,float *param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 (*pauVar6) [64];
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  pauVar6 = *(undefined1 (**) [64])(*(int *)(DAT_09b6f478 + 0x8c) + 0x50);
  if (*(char *)((int)param_2 + 0x1d) == '\0') {
    uVar9 = vone_s();
    auVar3._12_4_ = uVar9;
    auVar3._8_4_ = DAT_089da368;
    auVar3._4_4_ = DAT_089da364;
    auVar3._0_4_ = DAT_089da360;
    auVar2 = vtfm4_q(*pauVar6,auVar3);
    *param_1 = auVar2._0_4_;
    param_1[1] = auVar2._4_4_;
    param_1[2] = auVar2._8_4_;
    param_1[3] = auVar2._12_4_;
  }
  else {
    bVar1 = *(byte *)((int)param_2 + 0x1e);
    if (bVar1 == 0) {
      iVar7 = DAT_089da120 * 0x343fd + 0x269ec3;
      iVar8 = iVar7 * 0x343fd + 0x269ec3;
      DAT_089da120 = iVar8 * 0x343fd + 0x269ec3;
      uVar9 = vone_s();
      auVar4._12_4_ = uVar9;
      auVar4._8_4_ = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_2[2] -
                     param_2[2];
      auVar4._4_4_ = ((float)(iVar8 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_2[1] - param_2[1];
      auVar4._0_4_ = ((float)(iVar7 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_2 - *param_2;
      auVar2 = vtfm4_q(*pauVar6,auVar4);
      *param_1 = auVar2._0_4_;
      param_1[1] = auVar2._4_4_;
      param_1[2] = auVar2._8_4_;
      param_1[3] = auVar2._12_4_;
    }
    else if (bVar1 < 2) {
      iVar7 = DAT_089da120 * 0x343fd + 0x269ec3;
      iVar8 = iVar7 * 0x343fd + 0x269ec3;
      DAT_089da120 = iVar8 * 0x343fd + 0x269ec3;
      uVar9 = vone_s();
      auVar2._12_4_ = uVar9;
      auVar2._8_4_ = ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * param_2[2];
      auVar2._4_4_ = ((float)(iVar8 >> 0x10 & 0x7fff) / 32767.0) * param_2[1];
      auVar2._0_4_ = ((float)(iVar7 >> 0x10 & 0x7fff) / 32767.0) * *param_2;
      auVar2 = vtfm4_q(*pauVar6,auVar2);
      *param_1 = auVar2._0_4_;
      param_1[1] = auVar2._4_4_;
      param_1[2] = auVar2._8_4_;
      param_1[3] = auVar2._12_4_;
    }
    else if (bVar1 < 3) {
      iVar7 = DAT_089da120 * 0x343fd + 0x269ec3;
      iVar8 = iVar7 * 0x343fd + 0x269ec3;
      DAT_089da120 = iVar8 * 0x343fd + 0x269ec3;
      uVar9 = vone_s();
      auVar5._12_4_ = uVar9;
      auVar5._8_4_ = -(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * param_2[2]);
      auVar5._4_4_ = -(((float)(iVar8 >> 0x10 & 0x7fff) / 32767.0) * param_2[1]);
      auVar5._0_4_ = -(((float)(iVar7 >> 0x10 & 0x7fff) / 32767.0) * *param_2);
      auVar2 = vtfm4_q(*pauVar6,auVar5);
      *param_1 = auVar2._0_4_;
      param_1[1] = auVar2._4_4_;
      param_1[2] = auVar2._8_4_;
      param_1[3] = auVar2._12_4_;
    }
  }
  return;
}

