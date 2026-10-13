/* Entry 0x088A0264 | file offset 0x0009D23C | FUN_088a0264 | bytes 424 */

void FUN_088a0264(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  if (DAT_089d6c40 != -1) {
    iVar2 = FUN_08990578();
    if (iVar2 == 1) {
      iVar2 = FUN_089905dc(&local_20,&local_1c,&local_18);
      if (iVar2 == 1) {
        FUN_08862fc8(DAT_089d6c3c,local_18,0);
      }
      if (local_1c == 0) {
        FUN_08990680(0);
      }
      else {
        iVar2 = FUN_08862f2c(DAT_089d6c3c,local_20,local_1c,FUN_088a074c,0,DAT_09b4cf78);
        if (iVar2 == 0) {
          FUN_0889ff8c(0);
        }
      }
    }
    FUN_088a14d0(DAT_089d6c44,DAT_089d6c88,DAT_089d6c40,0,0);
    if ((DAT_089d6c4c == '\x01') &&
       (DAT_089d6c44 = DAT_089d6c44 + DAT_089d6c48 * *(float *)(DAT_089d69e0 + 0x18),
       DAT_089d6c44 <= 0.0)) {
      FUN_0889ff8c(0);
    }
    if ((DAT_09b4cf78 == '\0') && (uVar3 = sceUmdGetDriveStat(), (uVar3 & 1) != 0)) {
      bVar1 = DAT_089d6c60 == 0;
      FUN_088630e0();
      FUN_0889ff8c(0);
      DAT_089d6c50 = 6;
      if (bVar1) {
        DAT_089d6c60 = 2;
      }
    }
  }
  return;
}

