/* Entry 0x08863E40 | file offset 0x00060E18 | FUN_08863e40 | bytes 100 */

void FUN_08863e40(undefined4 *param_1)

{
  sceKernelDeleteCallback(*param_1);
  sceKernelDeleteCallback(param_1[1]);
  sceKernelDeleteCallback(param_1[2]);
  sceKernelDeleteCallback(param_1[3]);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  scePowerUnregisterCallback(3);
  sceKernelDeleteCallback(param_1[4]);
  param_1[4] = 0;
  return;
}

