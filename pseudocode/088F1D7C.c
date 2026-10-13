/* Entry 0x088F1D7C | file offset 0x000EED54 | FUN_088f1d7c | bytes 172 */

int FUN_088f1d7c(void)

{
  int iVar1;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  FUN_088efdc8(auStack_30,*(undefined2 *)(DAT_089d712c + 0x1de80),
               *(undefined1 *)(DAT_089d712c + 0x1de82),*(undefined1 *)(DAT_089d712c + 0x1de83));
  sceRtcGetTick(auStack_30,auStack_20);
  sceRtcGetCurrentClockLocalTime(&local_40);
  FUN_088efdc8(auStack_30,local_40,local_3e,local_3c);
  sceRtcGetTick(auStack_30,auStack_18);
  iVar1 = FUN_088efcd8(auStack_18,auStack_20);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

