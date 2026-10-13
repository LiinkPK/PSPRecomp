/* Entry 0x088F0E34 | file offset 0x000EDE0C | FUN_088f0e34 | bytes 472 */

undefined4 FUN_088f0e34(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  uint local_40;
  uint local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  uVar4 = 0;
  if (((*(short *)(DAT_089d712c + 0x1df84) == 0) && (*(char *)(DAT_089d712c + 0x1df86) == '\0')) &&
     (*(char *)(DAT_089d712c + 0x1df87) == '\0')) {
    uVar4 = 0;
  }
  else {
    FUN_088efdc8(&local_50,*(short *)(DAT_089d712c + 0x1df84),*(char *)(DAT_089d712c + 0x1df86),
                 *(char *)(DAT_089d712c + 0x1df87));
    sceRtcGetTick(&local_50,&local_40);
    sceRtcGetCurrentClockLocalTime(&local_38);
    FUN_088efdc8(&local_50,local_38,local_36,local_34);
    sceRtcGetTick(&local_50,&local_28);
    if (local_24 == local_3c && local_28 < local_40 || local_24 < local_3c) {
      uVar4 = 0;
    }
    else {
      iVar1 = FUN_088efcd8(&local_28,&local_40);
      if (iVar1 < 7) {
        sceRtcSetTick(&local_50,&local_40);
        sceRtcGetTick(&local_50,&local_20);
        iVar1 = FUN_088f0e04();
        iVar3 = 0;
        do {
          if (local_24 == local_1c && local_28 < local_20 || local_24 < local_1c) {
            return 0;
          }
          iVar2 = sceRtcGetDayOfWeek(local_50,local_4e,local_4c);
          if (iVar1 == iVar2) {
            return 1;
          }
          sceRtcGetTick(&local_50,&local_20);
          sceRtcTickAddDays(&local_20,&local_20,1);
          sceRtcSetTick(&local_50,&local_20);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 7);
      }
      else {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

