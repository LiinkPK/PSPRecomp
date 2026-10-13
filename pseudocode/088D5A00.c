/* Entry 0x088D5A00 | file offset 0x000D29D8 | FUN_088d5a00 | bytes 200 */

void FUN_088d5a00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5,
                 uint param_6,int param_7)

{
  FUN_088d3f00();
  if (param_5 != '\0') {
    FUN_088d3f00(param_1,param_2,param_4);
  }
  if ((param_6 & 0xffff) != 0xffff) {
    param_2 = param_2 + (param_6 & 0xffff) * 4;
    if ((param_7 < 1) || (0x22 < param_7)) {
      FUN_088d9cfc(*(undefined4 *)(param_2 + 0x1c));
      FUN_088d9cfc(*(undefined4 *)(param_2 + 0x20));
    }
    else {
      FUN_088d9cd8();
      FUN_088d9cd8(*(undefined4 *)(param_2 + 0x20));
    }
  }
  return;
}

