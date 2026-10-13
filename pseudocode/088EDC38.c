/* Entry 0x088EDC38 | file offset 0x000EAC10 | FUN_088edc38 | bytes 268 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_088edc38(void)

{
  int local_30;
  int local_2c [4];
  
  local_30 = 0;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x10) != 0) {
    do {
      if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x20) == 0) {
        local_30 = *(int *)(DAT_089d7f00 + 0x16c) + local_2c[0] * *(int *)(DAT_089d7f00 + 0x17c);
        FUN_088edf54(&local_30,local_2c);
        FUN_088ee158(local_2c + 1);
        FUN_088ee364(local_2c + 1,local_2c + 3,local_2c + 2);
      }
      sceKernelDelayThreadCB(13000);
    } while ((*(uint *)(DAT_089d7f00 + 0x140) & 0x10) != 0);
  }
  sceMpegAvcDecodeFlush(DAT_089d7f00 + 0x1c);
  *(undefined4 *)(DAT_089d7f00 + 0x160) = 0xffffffff;
  sceKernelExitDeleteThread(0);
  return 0;
}

