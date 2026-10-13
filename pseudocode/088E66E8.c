/* Entry 0x088E66E8 | file offset 0x000E36C0 | FUN_088e66e8 | bytes 64 */

void FUN_088e66e8(undefined4 *param_1,char param_2)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  if (param_2 == '\0') {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

