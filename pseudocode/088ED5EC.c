/* Entry 0x088ED5EC | file offset 0x000EA5C4 | FUN_088ed5ec | bytes 544 */

void FUN_088ed5ec(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(uint *)(DAT_089d7f00 + 0x144) & 0x80) == 0) {
    iVar1 = sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c),&PTR_caseD_893c500_089d0000,0,0,2);
    *param_2 = iVar1;
    if (iVar1 < 0x800) {
      FUN_088edb7c();
    }
    else {
      sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c));
      uVar2 = *(uint *)(DAT_089d7f00 + 0x140);
      while ((uVar2 & 8) != 0) {
        iVar1 = FUN_088ee5e0(*(undefined4 *)(DAT_089d7f00 + 0x144));
        if (((iVar1 != 0) &&
            (iVar1 = sceIoRead(*(undefined4 *)(DAT_089d7f00 + 0x14c),param_1 + iVar3,0x800 - iVar3),
            0 < iVar1)) && (iVar3 = iVar3 + iVar1, 0x7ff < iVar3)) {
          if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x40) != 0) {
            return;
          }
          *(undefined4 *)(DAT_089d7f00 + 0x140) = 0x10;
        }
        sceKernelDelayThreadCB(13000);
        uVar2 = *(uint *)(DAT_089d7f00 + 0x140);
      }
    }
  }
  else {
    sceIoLseek(*(undefined4 *)(DAT_089d7f00 + 0x14c),param_2,*(undefined4 *)(DAT_089d7f00 + 0x150),0
               ,0);
    *param_2 = *(int *)(DAT_089d7f00 + 0x154) << 0xb;
    uVar2 = *(uint *)(DAT_089d7f00 + 0x140);
    while ((uVar2 & 8) != 0) {
      iVar3 = FUN_088ee5e0(*(undefined4 *)(DAT_089d7f00 + 0x144));
      if ((iVar3 != 0) &&
         (iVar3 = sceIoRead(*(undefined4 *)(DAT_089d7f00 + 0x14c),param_1,1), 0 < iVar3)) {
        if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x40) != 0) {
          return;
        }
        *(undefined4 *)(DAT_089d7f00 + 0x140) = 0x10;
      }
      sceKernelDelayThreadCB(13000);
      uVar2 = *(uint *)(DAT_089d7f00 + 0x140);
    }
  }
  return;
}

