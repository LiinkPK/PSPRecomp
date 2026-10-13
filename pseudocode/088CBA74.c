/* Entry 0x088CBA74 | file offset 0x000C8A4C | FUN_088cba74 | bytes 92 */

void FUN_088cba74(int param_1,uint param_2)

{
  short sVar1;
  
  if (param_2 < 0xb) {
    sVar1 = (&DAT_089cbcc8)[param_2];
    if (sVar1 < 0) {
      sVar1 = 0;
    }
    else if (0x96 < sVar1) {
      sVar1 = 0x96;
    }
    *(char *)(param_1 + 2) = (char)sVar1;
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}

