/* Entry 0x08906BDC | file offset 0x00103BB4 | FUN_08906bdc | bytes 188 */

undefined4 * FUN_08906bdc(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_08993560(param_1 + 1,0x10,0x80,FUN_08906bb4);
  param_1[0x201] = 0;
  FUN_08993560(param_1 + 0x202,3,0x2e0,FUN_08906594);
  FUN_08993560(param_1 + 0x42a,3,0xc,&LAB_08906ba0);
  param_1[0x434] = &DAT_089cdcc0;
  param_1[0x435] = param_1;
  FUN_0890c384(param_1 + 0x436);
  param_1[0x591] = 0xffffffff;
  param_1[0x595] = 0xffffffff;
  param_1[0x596] = 0;
  param_1[0x597] = 0xffffffff;
  param_1[0x598] = 0;
  param_1[0x5b6] = 0;
  param_1[0x5b7] = 0;
  param_1[0x5b8] = 0;
  *(undefined1 *)(param_1 + 0x5b9) = 0;
  *(undefined1 *)((int)param_1 + 0x16e5) = 0;
  *(undefined1 *)(param_1 + 0x599) = 0;
  return param_1;
}

