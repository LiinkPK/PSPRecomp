/* Entry 0x088ED0F4 | file offset 0x000EA0CC | FUN_088ed0f4 | bytes 116 */

void FUN_088ed0f4(void)

{
  if ((DAT_089d7f00 != (char *)0x0) && (*DAT_089d7f00 != '\0')) {
    FUN_088ed168(0);
    FUN_088eeb10();
    FUN_089c1c08();
    sceMpegFinish();
    FUN_088ecf90();
    *DAT_089d7f00 = '\0';
  }
  return;
}

