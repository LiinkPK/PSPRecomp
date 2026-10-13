/* Entry 0x088EF908 | file offset 0x000EC8E0 | FUN_088ef908 | bytes 968 */

undefined4 FUN_088ef908(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_820 [2048];
  int local_20;
  
  FUN_088ed504();
  if ((*(uint *)(DAT_089d7f00 + 0x140) & 8) == 0) {
    FUN_088edb7c();
    uVar2 = 1;
  }
  else {
    FUN_088ed5ec(auStack_820,&local_20);
    if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x10) == 0) {
      FUN_088edb7c();
      uVar2 = 1;
    }
    else {
      FUN_088ed80c(auStack_820);
      if ((*(int *)(DAT_089d7f00 + 0x160) == -1) ||
         (iVar5 = sceKernelStartThread(*(undefined4 *)(DAT_089d7f00 + 0x160),0,0), -1 < iVar5)) {
        if ((*(int *)(DAT_089d7f00 + 0x164) == -1) ||
           (iVar5 = sceKernelStartThread(*(undefined4 *)(DAT_089d7f00 + 0x164),0,0), -1 < iVar5)) {
          if ((*(uint *)(DAT_089d7f00 + 0x144) & 0x80) == 0) {
            iVar5 = *(int *)(DAT_089d7f00 + 0x158);
          }
          else {
            iVar5 = *(int *)(DAT_089d7f00 + 0x158) << 0xb;
          }
          uVar3 = *(uint *)(DAT_089d7f00 + 0x140);
          while ((uVar3 & 0x10) != 0) {
            if (((((*(uint *)(DAT_089d7f00 + 0x140) & 0x20) == 0) &&
                 ((*(uint *)(DAT_089d7f00 + 0x10) & 1) == 0)) &&
                (iVar1 = FUN_088ee5e0(*(undefined4 *)(DAT_089d7f00 + 0x144)), iVar1 != 0)) &&
               (iVar1 = sceMpegRingbufferAvailableSize(DAT_089d7f00 + 0x20), 0 < iVar1)) {
              iVar4 = iVar1;
              if (0x20 < iVar1) {
                iVar4 = 0x20;
              }
              if (local_20 < iVar4 * 0x800 + iVar5) {
                iVar4 = (int)((local_20 - iVar5) + ((uint)(local_20 - iVar5 >> 0xb) >> 0x15)) >> 0xb
                ;
              }
              if (((0 < iVar4) &&
                  (iVar1 = sceMpegRingbufferPut(DAT_089d7f00 + 0x20,iVar4,iVar1), -1 < iVar1)) &&
                 (iVar5 = iVar5 + iVar1 * 0x800, local_20 <= iVar5)) {
                uVar3 = *(uint *)(DAT_089d7f00 + 0x10) | 1;
                *(uint *)(DAT_089d7f00 + 0x10) = uVar3;
                if ((*(uint *)(DAT_089d7f00 + 0x144) & 0x80) == 0) {
                  sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c),uVar3,
                             *(int *)(DAT_089d7f00 + 0x158),*(int *)(DAT_089d7f00 + 0x158) >> 0x1f,0
                            );
                  iVar5 = *(int *)(DAT_089d7f00 + 0x158);
                }
                else {
                  sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c),*(int *)(DAT_089d7f00 + 0x150),
                             *(int *)(DAT_089d7f00 + 0x150) + *(int *)(DAT_089d7f00 + 0x158),0,0);
                  iVar5 = *(int *)(DAT_089d7f00 + 0x158) << 0xb;
                }
              }
            }
            sceKernelDelayThreadCB(13000);
            uVar3 = *(uint *)(DAT_089d7f00 + 0x140);
          }
          if (*(int *)(DAT_089d7f00 + 0x160) != -1) {
            sceKernelWaitThreadEnd(*(undefined4 *)(DAT_089d7f00 + 0x160),0);
          }
          if (*(int *)(DAT_089d7f00 + 0x164) != 1) {
            sceKernelWaitThreadEnd(*(undefined4 *)(DAT_089d7f00 + 0x164),0);
            FUN_08935828(*(undefined4 *)(DAT_089d7f00 + 0x1a4),0,4);
            FUN_089c1ba0(0,0,0,*(undefined4 *)(DAT_089d7f00 + 0x1a4));
          }
          FUN_088eda0c();
          *(undefined4 *)(DAT_089d7f00 + 0x1b0) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1b4) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1b8) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1d8) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1dc) = 0;
          if (*(int *)(DAT_089d7f00 + 0x14c) != -1) {
            sceIoClose(*(undefined4 *)(DAT_089d7f00 + 0x14c));
            *(undefined4 *)(DAT_089d7f00 + 0x14c) = 0xffffffff;
          }
          *(undefined1 *)(DAT_089d7f00 + 2) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x140) = 1;
          *(undefined4 *)(DAT_089d7f00 + 0x15c) = 0xffffffff;
          sceKernelExitDeleteThread(0);
          uVar2 = 0;
        }
        else {
          FUN_088edb7c();
          uVar2 = 1;
        }
      }
      else {
        FUN_088edb7c();
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

