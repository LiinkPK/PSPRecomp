/* Entry 0x088C1520 | file offset 0x000BE4F8 | FUN_088c1520 | bytes 88 */

void FUN_088c1520(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_4 == '\x01') {
    FUN_088c6f68(&DAT_09b69270);
    DAT_09b692a0 = 2;
    param_1[1] = &DAT_09b69270;
  }
  return;
}

