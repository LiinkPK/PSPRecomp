/* Entry 0x089A3F68 | file offset 0x001A0F40 | FUN_089a3f68 | bytes 40 */

undefined4 * FUN_089a3f68(undefined4 *param_1,undefined4 *param_2,undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [36];
  undefined4 uVar3;
  
  uVar3 = vmov_s(*(undefined4 *)param_3[1]);
  auVar2._24_12_ = *(undefined1 (*) [12])(param_2 + 8);
  auVar2._20_4_ = param_2[6];
  auVar2._16_4_ = param_2[5];
  auVar2._12_4_ = param_2[4];
  auVar2._8_4_ = param_2[2];
  auVar2._4_4_ = param_2[1];
  auVar2._0_4_ = *param_2;
  auVar1 = vtfm3_t(auVar2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = uVar3;
  return param_1;
}

