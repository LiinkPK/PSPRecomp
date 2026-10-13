/* Entry 0x088EDA0C | file offset 0x000EA9E4 | FUN_088eda0c | bytes 152 */

void FUN_088eda0c(void)

{
  int iVar1;
  
  iVar1 = DAT_089d7f00 + 0x1c;
  if (*(int *)(DAT_089d7f00 + 0xa0) != 0) {
    sceMpegUnRegistStream(iVar1,*(int *)(DAT_089d7f00 + 0xa0));
    *(undefined4 *)(DAT_089d7f00 + 0xa0) = 0;
    iVar1 = DAT_089d7f00 + 0x1c;
  }
  if (*(int *)(DAT_089d7f00 + 0xa4) != 0) {
    sceMpegUnRegistStream(iVar1,*(int *)(DAT_089d7f00 + 0xa4));
    *(undefined4 *)(DAT_089d7f00 + 0xa4) = 0;
    iVar1 = DAT_089d7f00 + 0x1c;
  }
  if (*(int *)(DAT_089d7f00 + 0xa8) != 0) {
    sceMpegUnRegistStream(iVar1);
    *(undefined4 *)(DAT_089d7f00 + 0xa8) = 0;
    iVar1 = DAT_089d7f00 + 0x1c;
  }
  sceMpegAvcDecodeFlush(iVar1);
  return;
}

