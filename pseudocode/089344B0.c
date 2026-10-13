/* Entry 0x089344B0 | file offset 0x00131488 | FUN_089344b0 | bytes 60 */

void FUN_089344b0(void)

{
  if (DAT_09af02b8 != 0) {
    sceKernelFreePartitionMemory(DAT_09af02b8);
    DAT_09af02b8 = 0;
  }
  return;
}

