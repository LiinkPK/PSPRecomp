/* Entry 0x0893440C | file offset 0x001313E4 | FUN_0893440c | bytes 164 */

undefined4 FUN_0893440c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    param_1 = sceKernelStdout();
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      param_1 = sceKernelStdin();
    }
  }
  else if (param_1 == 2) {
    param_1 = sceKernelStderr();
  }
  uVar1 = 0xfffffff7;
  if (-1 < param_1) {
    uVar1 = sceIoWrite(param_1,param_2,param_3);
  }
  return uVar1;
}

