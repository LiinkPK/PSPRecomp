/* Entry 0x088F7108 | file offset 0x000F40E0 | FUN_088f7108 | bytes 84 */

void FUN_088f7108(void)

{
  if (DAT_09b69b08 != 0) {
    (**(code **)(*DAT_089d7f3c + 0x24))
              ((int)DAT_089d7f3c + (int)*(short *)(*DAT_089d7f3c + 0x20),DAT_09b69b08);
    DAT_09b69b08 = 0;
  }
  return;
}

