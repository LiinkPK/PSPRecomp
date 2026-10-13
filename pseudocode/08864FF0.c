/* Entry 0x08864FF0 | file offset 0x00061FC8 | FUN_08864ff0 | bytes 76 */

undefined4 *
FUN_08864ff0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  param_1[0xc] = &DAT_089c9348;
  *param_1 = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = param_4;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}

