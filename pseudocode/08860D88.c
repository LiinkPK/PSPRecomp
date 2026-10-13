/* Entry 0x08860D88 | file offset 0x0005DD60 | FUN_08860d88 | bytes 56 */

bool FUN_08860d88(void)

{
  uint uVar1;
  
  uVar1 = sceKernelGetGPI();
  return (uVar1 & 1) != 0;
}

