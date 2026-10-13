/* Entry 0x088EEB10 | file offset 0x000EBAE8 | FUN_088eeb10 | bytes 588 */

undefined4 FUN_088eeb10(void)

{
  undefined4 uVar1;
  
  if (DAT_089d7f00 == 0) {
    uVar1 = 0;
  }
  else if (*(char *)(DAT_089d7f00 + 1) == '\0') {
    uVar1 = 0;
  }
  else {
    if (0 < *(int *)(DAT_089d7f00 + 0x15c)) {
      sceKernelWaitThreadEnd(*(int *)(DAT_089d7f00 + 0x15c),0);
    }
    if (*(int *)(DAT_089d7f00 + 0x1d0) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x1d0));
      *(undefined4 *)(DAT_089d7f00 + 0x1d0) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 0x1d4) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x1d4));
      *(undefined4 *)(DAT_089d7f00 + 0x1d4) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 0x168) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x168));
      *(undefined4 *)(DAT_089d7f00 + 0x168) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 400) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 400));
      *(undefined4 *)(DAT_089d7f00 + 400) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 0x1a4) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x1a4));
      *(undefined4 *)(DAT_089d7f00 + 0x1a4) = 0;
    }
    if (0 < *(int *)(DAT_089d7f00 + 0x1bc)) {
      sceKernelDeleteSema(*(int *)(DAT_089d7f00 + 0x1bc));
      *(undefined4 *)(DAT_089d7f00 + 0x1bc) = 0xffffffff;
    }
    if (0 < *(int *)(DAT_089d7f00 + 0x1c0)) {
      sceKernelDeleteSema(*(int *)(DAT_089d7f00 + 0x1c0));
      *(undefined4 *)(DAT_089d7f00 + 0x1c0) = 0xffffffff;
    }
    sceMpegFreeAvcEsBuf(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0xac));
    sceMpegDelete(DAT_089d7f00 + 0x1c);
    sceMpegRingbufferDestruct(DAT_089d7f00 + 0x20);
    if (*(int *)(DAT_089d7f00 + 0x138) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x138));
      *(undefined4 *)(DAT_089d7f00 + 0x138) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 0x134) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x134));
      *(undefined4 *)(DAT_089d7f00 + 0x134) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 0x130) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x130));
      *(undefined4 *)(DAT_089d7f00 + 0x130) = 0;
    }
    if (*(int *)(DAT_089d7f00 + 0x148) != 0) {
      (*(code *)PTR_FUN_089d7efc)(*(int *)(DAT_089d7f00 + 0x148));
      *(undefined4 *)(DAT_089d7f00 + 0x148) = 0;
    }
    *(undefined1 *)(DAT_089d7f00 + 1) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

