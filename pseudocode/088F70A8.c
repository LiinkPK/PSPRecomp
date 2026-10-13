/* Entry 0x088F70A8 | file offset 0x000F4080 | FUN_088f70a8 | bytes 96 */

void FUN_088f70a8(void)

{
  if (DAT_09b69b04 != -1) {
    (**(code **)(*DAT_089d7f3c + 0x1c))
              ((int)DAT_089d7f3c + (int)*(short *)(*DAT_089d7f3c + 0x18),DAT_09b69b04);
    DAT_09b69b04 = -1;
  }
  return;
}

