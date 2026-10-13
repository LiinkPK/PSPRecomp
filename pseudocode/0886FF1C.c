/* Entry 0x0886FF1C | file offset 0x0006CEF4 | FUN_0886ff1c | bytes 96 */

undefined4 FUN_0886ff1c(void)

{
  if (DAT_09b26bb8 == '\0') {
    FUN_0886fda4(&DAT_09b26b18);
  }
  else {
    DAT_09b26b2c = FUN_088707f0(&DAT_09b26b18);
  }
  DAT_089d5fbc = 0xffffffff;
  sceKernelExitDeleteThread(0);
  return 0;
}

