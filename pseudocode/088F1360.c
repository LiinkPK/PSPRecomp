/* Entry 0x088F1360 | file offset 0x000EE338 | FUN_088f1360 | bytes 228 */

int FUN_088f1360(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 auStack_20 [8];
  
  FUN_088efdc8(&local_30,*(undefined2 *)(DAT_089d712c + 0x1de84),
               *(undefined1 *)(DAT_089d712c + 0x1de86),*(undefined1 *)(DAT_089d712c + 0x1de87));
  iVar3 = 0;
  do {
    iVar1 = FUN_088f0c80();
    iVar2 = sceRtcGetDayOfWeek(local_30,local_2e,local_2c);
    iVar4 = iVar3;
    if (iVar1 == iVar2) break;
    sceRtcGetTick(&local_30,auStack_20);
    sceRtcTickAddDays(auStack_20,auStack_20,1);
    sceRtcSetTick(&local_30,auStack_20);
    iVar3 = iVar3 + 1;
    iVar4 = 0;
  } while (iVar3 < 7);
  iVar3 = FUN_088f1094();
  if (iVar3 != 0) {
    iVar4 = iVar4 + 7;
  }
  return iVar4;
}

