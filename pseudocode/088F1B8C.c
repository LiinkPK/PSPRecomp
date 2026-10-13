/* Entry 0x088F1B8C | file offset 0x000EEB64 | FUN_088f1b8c | bytes 112 */

void FUN_088f1b8c(void)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1c;
  
  sceRtcGetCurrentClockLocalTime(&local_20);
  iVar1 = DAT_089d712c;
  *(undefined2 *)(DAT_089d712c + 0x1df80) = local_20;
  *(undefined1 *)(iVar1 + 0x1df82) = local_1e;
  *(undefined1 *)(iVar1 + 0x1df83) = local_1c;
  iVar1 = DAT_089d712c;
  *(undefined2 *)(DAT_089d712c + 0x1df3c) = DAT_089d7f14;
  *(undefined2 *)(iVar1 + 0x1df3e) = DAT_089d7f16;
  return;
}

