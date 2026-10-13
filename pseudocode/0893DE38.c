/* Entry 0x0893DE38 | file offset 0x0013AE10 | FUN_0893de38 | bytes 52 */

void FUN_0893de38(void)

{
  DAT_09af062c = DAT_09af062c + -1;
  if (DAT_09af062c == 0) {
    sceKernelCpuResumeIntr(DAT_09af0630);
  }
  return;
}

