/* Entry 0x08902C50 | file offset 0x000FFC28 | FUN_08902c50 | bytes 180 */

undefined4 FUN_08902c50(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  
  iVar1 = sceNetAdhocInit();
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    FUN_08935828(&local_20,0,0x10);
    local_20 = 0;
    FUN_08935bb4(auStack_1c,param_2,9);
    iVar1 = sceNetAdhocctlInit(0x1c00,0x1e,&local_20);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = sceNetAdhocctlAddHandler(FUN_089033a4,param_1);
      if (iVar1 < 0) {
        uVar2 = 0;
      }
      else {
        *param_1 = iVar1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

