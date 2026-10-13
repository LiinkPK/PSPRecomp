/* Entry 0x0898B920 | file offset 0x001888F8 | FUN_0898b920 | bytes 88 */

void FUN_0898b920(int param_1,undefined4 *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = vscl_q(*param_3,0x3c000000);
  auVar1 = vmul_q(**(undefined1 (**) [16])(param_1 + 8),auVar1);
  auVar1 = vscl_q(auVar1,0x3b800000);
  auVar1 = vsat0_q(auVar1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = auVar1._12_4_;
  return;
}

