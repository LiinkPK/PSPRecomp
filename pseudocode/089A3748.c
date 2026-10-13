/* Entry 0x089A3748 | file offset 0x001A0720 | FUN_089a3748 | bytes 52 */

undefined4 * FUN_089a3748(undefined4 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  
  auVar1 = vcrsp_t(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  return param_1;
}

