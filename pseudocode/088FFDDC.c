/* Entry 0x088FFDDC | file offset 0x000FCDB4 | FUN_088ffddc | bytes 576 */

int FUN_088ffddc(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 auStack_20 [16];
  
  FUN_088ffdcc();
  sceRtcGetCurrentClockLocalTime(auStack_20);
  local_a0 = 0x53534944;
  local_9c = 0x41494449;
  local_98 = 0x4e49465f;
  local_94 = 0x465f4c41;
  local_90 = 0x41544e41;
  local_8c = 0x525f5953;
  local_88 = 0x414c5045;
  local_84 = 0x76612e59;
  local_80 = 0x69;
  DAT_089d8128 = FUN_08882e80();
  FUN_08935828(DAT_089d8128,0,0x3f2280);
  *(undefined4 *)(DAT_089d8128 + 0x3e40) = 0;
  *(undefined4 *)(DAT_089d8128 + 0x3e44) = 0;
  *(undefined4 *)(DAT_089d8128 + 0x3e48) = 0;
  iVar1 = FUN_088ff460(0x1e,2000);
  if (iVar1 < 0x2ee001) {
    uVar2 = FUN_089a62b8();
    if (uVar2 < 0x401) {
      iVar4 = DAT_089d8128 + 0x83e80;
      iVar1 = FUN_089a6364(iVar4,0x200,0x110,DAT_089d8128 + 0x84280,0x80000);
      if (((-1 < iVar1) && (iVar1 = FUN_089a6300(iVar4,0x1e0,0x110), -1 < iVar1)) &&
         (iVar1 = FUN_089a6438(iVar4,1), -1 < iVar1)) {
        uVar3 = FUN_0890047c();
        iVar1 = FUN_089a62e0(iVar4,uVar3);
        if (-1 < iVar1) {
          if (*(char *)(DAT_089d5ec0 + 0x2ccf) == '\0') {
            FUN_089a6410(iVar4,1);
          }
          else {
            FUN_089a6410(iVar4,3);
          }
          FUN_088ff968();
          iVar1 = FUN_088fef64(DAT_089d8128 + 0x104280,&local_a0,DAT_089d8128 + 16000,0x40000,0x1e0,
                               0x110,0x1e,0x5622,2,2000);
        }
      }
    }
    else {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

