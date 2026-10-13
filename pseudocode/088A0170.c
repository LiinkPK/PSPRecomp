/* Entry 0x088A0170 | file offset 0x0009D148 | FUN_088a0170 | bytes 228 */

void FUN_088a0170(void)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_110 [256];
  
  uVar1 = sceUmdGetDriveStat();
  if ((uVar1 & 0x20) != 0) {
    FUN_088a04a8(auStack_110,&DAT_09b4cef0,DAT_09b4cf78);
    DAT_089d6c3c = FUN_08862e5c(auStack_110,FUN_088a05b0,0,DAT_09b4cf78);
    if (DAT_089d6c3c < 0) {
      DAT_089d6c3c = -1;
      DAT_089d6c50 = 0;
    }
    else if ((DAT_09b4cf78 == '\x01') && (iVar2 = sceNpDrmEdataSetupKey(), iVar2 < 0)) {
      FUN_0886300c(DAT_089d6c3c);
      DAT_089d6c3c = -1;
      DAT_089d6c40 = 0xffffffff;
      DAT_089d6c50 = 0;
    }
    else {
      DAT_089d6c50 = 2;
    }
  }
  return;
}

