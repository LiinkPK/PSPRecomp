/* Entry 0x088ED168 | file offset 0x000EA140 | FUN_088ed168 | bytes 160 */

undefined4 FUN_088ed168(char param_1)

{
  undefined4 uVar1;
  
  if (DAT_089d7f00 == 0) {
    uVar1 = 0;
  }
  else if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x40) == 0) {
    if ((*(uint *)(DAT_089d7f00 + 0x140) & 1) == 0) {
      *(undefined4 *)(DAT_089d7f00 + 0x140) = 0x40;
      *(undefined1 *)(DAT_089d7f00 + 2) = 0;
      if (param_1 != '\0') {
        sceKernelWaitThreadEnd(*(undefined4 *)(DAT_089d7f00 + 0x15c),0);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

