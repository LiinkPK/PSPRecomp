/* Entry 0x08870154 | file offset 0x0006D12C | FUN_08870154 | bytes 164 */

undefined4 FUN_08870154(void)

{
  int iVar1;
  
  if (-1 < DAT_089d5fbc) {
    sceKernelTerminateThread();
    iVar1 = sceKernelWaitThreadEnd(DAT_089d5fbc,0);
    if (iVar1 != 0) {
      return 0x80000017;
    }
    DAT_089d5fbc = -1;
  }
  DAT_089d5fbc = sceKernelCreateThread("MS Write",FUN_0886ff1c,0x21,0x1000,0x4000,0);
  sceKernelStartThread(DAT_089d5fbc,0,0);
  sceKernelChangeThreadPriority(0,0);
  return 1;
}

