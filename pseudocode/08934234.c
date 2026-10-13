/* Entry 0x08934234 | file offset 0x0013120C | FUN_08934234 | bytes 232 */

/* WARNING: Removing unreachable block (ram,0x0893425c) */
/* WARNING: Removing unreachable block (ram,0x08934278) */
/* WARNING: Removing unreachable block (ram,0x08934288) */
/* WARNING: Removing unreachable block (ram,0x089342b8) */

void FUN_08934234(void)

{
  undefined4 uVar1;
  
  uVar1 = sceKernelStopUnloadSelfModuleWithStatus(1,0,0,0,0);
  sceKernelPrintf("libc:%s: something wrong 0x%08X\n","_exit",uVar1);
  trap(0);
  return;
}

