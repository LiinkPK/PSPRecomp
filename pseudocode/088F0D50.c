/* Entry 0x088F0D50 | file offset 0x000EDD28 | FUN_088f0d50 | bytes 72 */

void FUN_088f0d50(void)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1c;
  
  sceRtcGetCurrentClockLocalTime(&local_20);
  iVar1 = DAT_089d712c;
  *(undefined2 *)(DAT_089d712c + 0x1df84) = local_20;
  *(undefined1 *)(iVar1 + 0x1df86) = local_1e;
  *(undefined1 *)(iVar1 + 0x1df87) = local_1c;
  return;
}

