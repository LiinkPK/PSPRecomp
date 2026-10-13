/* Entry 0x088EFF98 | file offset 0x000ECF70 | FUN_088eff98 | bytes 248 */

void FUN_088eff98(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 auStack_20 [8];
  
  FUN_088efdc8(&local_30,*(undefined2 *)(DAT_089d712c + 0x1de84),
               *(undefined1 *)(DAT_089d712c + 0x1de86),*(undefined1 *)(DAT_089d712c + 0x1de87));
  sceRtcGetTick(&local_30,auStack_20);
  sceRtcTickAddDays(auStack_20,auStack_20,7);
  sceRtcSetTick(&local_30,auStack_20);
  for (param_1 = 7 - param_1; param_1 < 7; param_1 = param_1 + 1) {
    iVar1 = FUN_088f0c80();
    iVar2 = sceRtcGetDayOfWeek(local_30,local_2e,local_2c);
    if (iVar1 == iVar2) {
      uVar3 = FUN_088f0c80();
      FUN_088f0c98(uVar3);
    }
    sceRtcTickAddDays(auStack_20,auStack_20,1);
    sceRtcSetTick(&local_30,auStack_20);
  }
  return;
}

