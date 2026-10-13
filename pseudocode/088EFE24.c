/* Entry 0x088EFE24 | file offset 0x000ECDFC | FUN_088efe24 | bytes 256 */

int FUN_088efe24(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined1 auStack_20 [16];
  
  FUN_088efdc8(auStack_20,*(undefined2 *)(DAT_089d712c + 0x1de84),
               *(undefined1 *)(DAT_089d712c + 0x1de86),*(undefined1 *)(DAT_089d712c + 0x1de87));
  sceRtcGetTick(auStack_20,&local_28);
  FUN_088efdc8(auStack_20,DAT_09b698c8,DAT_09b698ca,DAT_09b698cc);
  sceRtcGetTick(auStack_20,&local_30);
  if (local_2c == local_24 && local_30 < local_28 || local_2c < local_24) {
    iVar2 = -1;
  }
  else {
    iVar1 = FUN_088efcd8(&local_30,&local_28);
    iVar2 = 7;
    iVar3 = 0;
    do {
      if (iVar1 <= iVar3) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 7);
  }
  return iVar2;
}

