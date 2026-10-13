/* Entry 0x0893DDFC | file offset 0x0013ADD4 | FUN_0893ddfc | bytes 60 */

void FUN_0893ddfc(void)

{
  undefined4 uVar1;
  
  uVar1 = sceKernelCpuSuspendIntr();
  if (DAT_09af062c == 0) {
    DAT_09af0630 = uVar1;
  }
  DAT_09af062c = DAT_09af062c + 1;
  return;
}

