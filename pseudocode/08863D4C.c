/* Entry 0x08863D4C | file offset 0x00060D24 | FUN_08863d4c | bytes 244 */

undefined4 FUN_08863d4c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sceKernelCreateCallback("FMI_OpenAsyncCallback",FUN_088636c4,param_1);
  *param_1 = iVar1;
  iVar1 = sceKernelCreateCallback("FMI_ReadAsyncCallback",FUN_088637a8,param_1);
  param_1[1] = iVar1;
  iVar1 = sceKernelCreateCallback("FMI_SizeAsyncCallback",FUN_08863890,param_1);
  param_1[2] = iVar1;
  iVar1 = sceKernelCreateCallback("FMI_SeekAsyncCallback",FUN_08863968,param_1);
  param_1[3] = iVar1;
  if ((((*param_1 < 1) || (param_1[1] < 1)) || (param_1[2] < 1)) || (param_1[3] < 1)) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceKernelCreateCallback("FMI_PowerCallback",&LAB_08863c98,param_1);
    param_1[4] = iVar1;
    scePowerRegisterCallback(3,iVar1);
    uVar2 = 1;
  }
  return uVar2;
}

