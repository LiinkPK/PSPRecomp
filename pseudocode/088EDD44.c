/* Entry 0x088EDD44 | file offset 0x000EAD1C | FUN_088edd44 | bytes 528 */

undefined4 FUN_088edd44(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar4 = 0;
  bVar1 = false;
  uVar3 = *(uint *)(DAT_089d7f00 + 0x140);
  while ((uVar3 & 0x10) != 0) {
    if ((bVar1) && (iVar2 = (**(code **)(DAT_089d7f00 + 0x1cc))(), iVar2 != 0)) {
      FUN_088ee58c();
      *(float *)(DAT_089d7f00 + 0x1dc) = *(float *)(DAT_089d7f00 + 0x1dc) + 4180.0;
      *(int *)(DAT_089d7f00 + 0x19c) = *(int *)(DAT_089d7f00 + 0x19c) + -1;
      iVar5 = (iVar5 + 1) % *(int *)(DAT_089d7f00 + 0x198);
      uVar3 = uVar4 + 1;
      uVar4 = uVar3 & 1;
      if ((int)uVar3 < 0) {
        uVar4 = -uVar4;
      }
      FUN_088ee5b8();
      bVar1 = false;
    }
    if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x20) == 0) {
      iVar2 = FUN_088ee5e0(*(undefined4 *)(DAT_089d7f00 + 0x144));
      if ((iVar2 == 0) || (*(int *)(DAT_089d7f00 + 0x19c) < 1)) {
        if (((*(uint *)(DAT_089d7f00 + 0x10) & 0x20) == 0) &&
           ((*(uint *)(DAT_089d7f00 + 0x10) & 4) != 0)) {
          *(uint *)(DAT_089d7f00 + 0x10) = *(uint *)(DAT_089d7f00 + 0x10) | 0x20;
        }
      }
      else {
        (**(code **)(DAT_089d7f00 + 0x1c8))
                  (*(int *)(DAT_089d7f00 + 0x1a4) + uVar4 * 0x2000,
                   *(int *)(DAT_089d7f00 + 0x194) + iVar5 * *(int *)(DAT_089d7f00 + 0x1a0),0x2000);
        bVar1 = true;
      }
    }
    else {
      iVar2 = *(int *)(DAT_089d7f00 + 0x1a4) + uVar4 * 0x2000;
      FUN_08935828(iVar2,0,4);
      FUN_089c1ba0(0,0,0,iVar2);
    }
    sceKernelDelayThreadCB(500);
    uVar3 = *(uint *)(DAT_089d7f00 + 0x140);
  }
  *(undefined4 *)(DAT_089d7f00 + 0x164) = 0xffffffff;
  sceKernelExitDeleteThread(0);
  return 0;
}

