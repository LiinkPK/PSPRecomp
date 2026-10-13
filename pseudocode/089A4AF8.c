/* Entry 0x089A4AF8 | file offset 0x001A1AD0 | FUN_089a4af8 | bytes 48 */

undefined4 * FUN_089a4af8(undefined4 *param_1,undefined1 (*param_2) [64],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  
  auVar2 = vtfm4_q(*param_2,*param_3);
  uVar3 = vrcp_s(auVar2._12_4_);
  auVar1 = vscl_t(auVar2._0_12_,uVar3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = uVar3;
  return param_1;
}

