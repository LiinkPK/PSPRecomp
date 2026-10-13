/* Entry 0x08860DC0 | file offset 0x0005DD98 | FUN_08860dc0 | bytes 56 */

bool FUN_08860dc0(void)

{
  uint uVar1;
  
  uVar1 = sceKernelGetGPI();
  return (uVar1 & 2) != 0;
}

