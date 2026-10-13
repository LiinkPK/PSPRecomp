/* Entry 0x08863208 | file offset 0x000601E0 | FUN_08863208 | bytes 204 */

undefined4 FUN_08863208(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08863d4c();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceKernelCreateCallback("FILE_MANAGER_DVD_DvdUmdCallback",&LAB_08863624,param_1);
    *(int *)(param_1 + 0x158) = iVar1;
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = sceUmdRegisterUMDCallBack();
      if (iVar1 < 0) {
        sceKernelDeleteCallback(*(undefined4 *)(param_1 + 0x158));
        uVar2 = 0;
      }
      else {
        iVar1 = sceUmdCheckMedium();
        if (iVar1 == 0) {
          sceUmdWaitDriveStat(2);
        }
        iVar1 = sceUmdActivate(1,"disc0:");
        if (iVar1 < 0) {
          uVar2 = 0;
        }
        else {
          sceUmdWaitDriveStat(0x20);
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

