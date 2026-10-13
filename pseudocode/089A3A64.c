/* Entry 0x089A3A64 | file offset 0x001A0A3C | FUN_089a3a64 | bytes 32 */

undefined4 * FUN_089a3a64(undefined4 param_1,undefined4 *param_2,undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)param_3[1];
  auVar1 = vscl_t(*param_3,param_1);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = uVar2;
  return param_2;
}

