/* Entry 0x089908D8 | file offset 0x0018D8B0 | FUN_089908d8 | bytes 144 */

undefined4 FUN_089908d8(int param_1,undefined1 param_2)

{
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  if (*(int *)(DAT_089da420 + param_1 * 0x3c + 0x178) == 0x10) {
    FUN_089a504c(param_1,param_2);
  }
  sceKernelSignalSema(*(undefined4 *)(DAT_089da420 + 0x2c),1);
  return 0;
}

