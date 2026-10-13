/* Entry 0x089A3B30 | file offset 0x001A0B08 | FUN_089a3b30 | bytes 32 */

undefined4 * FUN_089a3b30(undefined4 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  
  uVar2 = vzero_s();
  auVar1 = vcrsp_t(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = uVar2;
  return param_1;
}

