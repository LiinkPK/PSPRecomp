/* Entry 0x088F6860 | file offset 0x000F3838 | FUN_088f6860 | bytes 136 */

void FUN_088f6860(char param_1)

{
  if (param_1 == '\0') {
    if (DAT_089d8364 != 0) {
      FUN_0890e948();
    }
    if (DAT_089d7f38 != 0) {
      FUN_0886278c();
      DAT_089d7f38 = 0;
    }
    if (DAT_089d7f40 != 0) {
      FUN_0886278c();
      DAT_089d7f40 = 0;
    }
  }
  DAT_089d7f3c = &DAT_09b69b00;
  return;
}

