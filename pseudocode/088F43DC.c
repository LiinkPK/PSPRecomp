/* Entry 0x088F43DC | file offset 0x000F13B4 | FUN_088f43dc | bytes 120 */

void FUN_088f43dc(void)

{
  int iVar1;
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1c;
  
  FUN_088f4638(0);
  sceRtcGetCurrentClockLocalTime(&local_20);
  iVar1 = DAT_089d712c;
  *(undefined2 *)(DAT_089d712c + 0x1de7c) = 0x7d8;
  *(undefined1 *)(iVar1 + 0x1de7e) = 0xc;
  *(undefined1 *)(iVar1 + 0x1de7f) = 0x12;
  iVar1 = DAT_089d712c;
  *(undefined2 *)(DAT_089d712c + 0x1de80) = local_20;
  *(undefined1 *)(iVar1 + 0x1de82) = local_1e;
  *(undefined1 *)(iVar1 + 0x1de83) = local_1c;
  return;
}

