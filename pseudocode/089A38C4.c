/* Entry 0x089A38C4 | file offset 0x001A089C | FUN_089a38c4 | bytes 28 */

undefined4 * FUN_089a38c4(undefined4 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)param_2[1];
  auVar1 = vadd_t(*param_2,*param_3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = uVar2;
  return param_1;
}

