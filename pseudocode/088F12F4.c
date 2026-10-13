/* Entry 0x088F12F4 | file offset 0x000EE2CC | FUN_088f12f4 | bytes 108 */

void FUN_088f12f4(int param_1,undefined1 param_2)

{
  if (param_1 < 2) {
    if (-1 < param_1) {
      if (param_1 < 1) {
        *(undefined1 *)(DAT_089d712c + 0x1de8b) = param_2;
      }
      else {
        *(undefined1 *)(DAT_089d712c + 0x1de8c) = param_2;
      }
    }
  }
  else if (param_1 < 3) {
    *(undefined1 *)(DAT_089d712c + 0x1de8d) = param_2;
  }
  else if (param_1 < 4) {
    *(undefined1 *)(DAT_089d712c + 0x1de8e) = param_2;
  }
  return;
}

