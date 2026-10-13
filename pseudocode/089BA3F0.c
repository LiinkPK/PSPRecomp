/* Entry 0x089BA3F0 | file offset 0x001B73C8 | FUN_089ba3f0 | bytes 36 */

undefined4 * FUN_089ba3f0(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  vpfxt(2,3,2,3);
  auVar2 = vmul_q(*param_3,*param_2);
  uVar1 = vadd_p(auVar2._0_8_,*(undefined8 *)*param_2);
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulonglong)uVar1 >> 0x20);
  param_1[2] = auVar2._8_4_;
  param_1[3] = auVar2._12_4_;
  return param_1;
}

