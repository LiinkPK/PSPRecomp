/* Entry 0x089A34F4 | file offset 0x001A04CC | FUN_089a34f4 | bytes 52 */

undefined4 * FUN_089a34f4(undefined4 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  
  auVar1 = vadd_t(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  return param_1;
}

