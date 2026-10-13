/* Entry 0x0881C3F0 | file offset 0x000193C8 | FUN_0881c3f0 | bytes 120 */

void FUN_0881c3f0(int param_1,undefined4 param_2,char param_3)

{
  if (*(char *)(param_1 + 8) != '\x01') {
    if (param_3 == '\x01') {
      FUN_08895c58();
      FUN_08895cd0(DAT_089d6ae0,param_2);
    }
    else {
      FUN_08895c80(DAT_089d6ae0);
      FUN_08895ca8(DAT_089d6ae0,param_2);
    }
  }
  return;
}

