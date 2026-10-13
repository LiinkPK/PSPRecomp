/* Entry 0x08953CC0 | file offset 0x00150C98 | FUN_08953cc0 | bytes 1044 */

void FUN_08953cc0(float param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],float *param_4
                 ,undefined1 (*param_5) [16],int param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_6 < 2) {
    if (0 < param_6) {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)*param_2 =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_4 - *param_4;
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 4) =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[1] - param_4[1];
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 8) =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[2] - param_4[2];
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 0xc) =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[3] - param_4[3];
      goto LAB_0895405c;
    }
  }
  else {
    if (param_6 < 3) {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)*param_2 =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_4 - *param_4;
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 4) =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[1] - param_4[1];
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 8) =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[2] - param_4[2];
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 0xc) =
           ((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[3] - param_4[3];
      goto LAB_0895405c;
    }
    if (param_6 < 4) {
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)*param_2 =
           -(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * *param_4 - *param_4);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 4) =
           -(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[1] - param_4[1]);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 8) =
           -(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[2] - param_4[2]);
      DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
      *(float *)(*param_2 + 0xc) =
           -(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 2.0 * param_4[3] - param_4[3]);
      goto LAB_0895405c;
    }
  }
  *(undefined4 *)*param_2 = 0;
  *(undefined4 *)(*param_2 + 4) = 0;
  *(undefined4 *)(*param_2 + 8) = 0;
  *(undefined4 *)(*param_2 + 0xc) = 0;
LAB_0895405c:
  uVar4 = *(undefined8 *)(*param_2 + 8);
  uVar3 = *(undefined8 *)(*param_2 + 8);
  auVar1 = vadd_q(*param_2,*param_3);
  *(int *)*param_2 = auVar1._0_4_;
  *(int *)(*param_2 + 4) = auVar1._4_4_;
  *(int *)(*param_2 + 8) = auVar1._8_4_;
  *(int *)(*param_2 + 0xc) = auVar1._12_4_;
  vpfxt(0,0,0,0);
  auVar1._4_8_ = uVar3;
  auVar1._0_4_ = 0x3f800000;
  auVar1._12_4_ = 0;
  auVar1 = vmax_q(*param_2,auVar1 << 0x20);
  vpfxt(1,1,1,1);
  auVar2._4_8_ = uVar4;
  auVar2._0_4_ = 0x3f800000;
  auVar2._12_4_ = 0;
  auVar1 = vmin_q(auVar1,auVar2 << 0x20);
  *(int *)*param_2 = auVar1._0_4_;
  *(int *)(*param_2 + 4) = auVar1._4_4_;
  *(int *)(*param_2 + 8) = auVar1._8_4_;
  *(int *)(*param_2 + 0xc) = auVar1._12_4_;
  auVar1 = vsub_q(*param_2,*param_5);
  *(int *)*param_2 = auVar1._0_4_;
  *(int *)(*param_2 + 4) = auVar1._4_4_;
  *(int *)(*param_2 + 8) = auVar1._8_4_;
  *(int *)(*param_2 + 0xc) = auVar1._12_4_;
  if (0.0 < param_1) {
    auVar1 = vscl_q(*param_2,1.0 / param_1);
    *(int *)*param_2 = auVar1._0_4_;
    *(int *)(*param_2 + 4) = auVar1._4_4_;
    *(int *)(*param_2 + 8) = auVar1._8_4_;
    *(int *)(*param_2 + 0xc) = auVar1._12_4_;
  }
  return;
}

