/* Entry 0x088F0CE4 | file offset 0x000EDCBC | FUN_088f0ce4 | bytes 72 */

bool FUN_088f0ce4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088f0c80();
  iVar2 = sceRtcGetDayOfWeek(DAT_09b698c8,DAT_09b698ca,DAT_09b698cc);
  return iVar1 == iVar2;
}

