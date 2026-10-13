/* Entry 0x089A498C | file offset 0x001A1964 | FUN_089a498c | bytes 72 */

undefined4 * FUN_089a498c(undefined4 *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = (param_2 & 0xffff) >> 0xc;
  auVar1._8_4_ = (param_2 & 0xfff) >> 8;
  auVar1._4_4_ = (param_2 & 0xff) >> 4;
  auVar1._0_4_ = param_2 & 0xf;
  auVar1 = vi2f_q(auVar1,0);
  auVar1 = vscl_q(auVar1,0x3d888889);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  return param_1;
}

