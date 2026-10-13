/* Entry 0x088ED504 | file offset 0x000EA4DC | FUN_088ed504 | bytes 232 */

void FUN_088ed504(void)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x40) == 0) {
    *(undefined4 *)(DAT_089d7f00 + 0x140) = 4;
    uVar2 = *(uint *)(DAT_089d7f00 + 0x140);
    while ((uVar2 & 4) != 0) {
      iVar1 = FUN_088ee5e0(*(undefined4 *)(DAT_089d7f00 + 0x144));
      if ((iVar1 != 0) &&
         (iVar1 = sceIoOpen(*(undefined4 *)(DAT_089d7f00 + 0x148),1,0x1ff), -1 < iVar1)) {
        *(int *)(DAT_089d7f00 + 0x14c) = iVar1;
        if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x40) != 0) {
          return;
        }
        *(undefined4 *)(DAT_089d7f00 + 0x140) = 8;
      }
      sceKernelDelayThreadCB(13000);
      uVar2 = *(uint *)(DAT_089d7f00 + 0x140);
    }
  }
  return;
}

