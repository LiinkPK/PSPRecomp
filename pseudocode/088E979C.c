/* Entry 0x088E979C | file offset 0x000E6774 | FUN_088e979c | bytes 112 */

void FUN_088e979c(int param_1,int param_2,undefined4 param_3)

{
  FUN_08844588(DAT_089d4960);
  if (param_2 != 0) {
    FUN_089359e8(param_2);
    FUN_089359a4(param_1 + 0x3c,param_2);
  }
  *(undefined4 *)(param_1 + 0x1864) = param_3;
  *(undefined1 *)(param_1 + 0x1b06) = 0;
  FUN_088e8dc4(param_1);
  return;
}

