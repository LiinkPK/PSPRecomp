/* Entry 0x08992090 | file offset 0x0018F068 | FUN_08992090 | bytes 176 */

undefined4 * FUN_08992090(undefined4 *param_1)

{
  undefined4 uVar1;
  
  param_1[0x14] = &DAT_089dd380;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  uVar1 = FUN_08990d6c(0x6000);
  param_1[0xd] = uVar1;
  FUN_08935828(uVar1,0,0x6000);
  return param_1;
}

