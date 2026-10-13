/* Entry 0x089A49D4 | file offset 0x001A19AC | FUN_089a49d4 | bytes 80 */

undefined4 * FUN_089a49d4(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined4 in_V0C;
  
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = (param_3 & 0x7fff) >> 10;
  auVar1._4_4_ = (param_3 & 0x3ff) >> 5;
  auVar1._0_4_ = param_3 & 0x1f;
  auVar1 = vi2f_q(auVar1,0);
  auVar1 = vscl_q(auVar1,0x3d042108);
  if ((param_3 & 0x8000) == 0) {
    param_1 = 0;
  }
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  param_2[3] = param_1;
  return param_2;
}

