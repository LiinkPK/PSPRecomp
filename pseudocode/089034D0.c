/* Entry 0x089034D0 | file offset 0x001004A8 | FUN_089034d0 | bytes 212 */

undefined4 FUN_089034d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = sceNetAdhocDiscoverGetStatus();
  if (iVar1 < 2) {
    if ((0 < iVar1) && (iVar1 = sceNetAdhocDiscoverUpdate(), iVar1 < 0)) {
      uVar2 = 4;
    }
  }
  else if (iVar1 < 3) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < 0) {
      uVar2 = 4;
    }
    else if (iVar1 < 2) {
      if (iVar1 == 0) {
        uVar2 = 1;
      }
    }
    else if (iVar1 < 3) {
      uVar2 = 2;
    }
    else if (iVar1 < 4) {
      uVar2 = 3;
    }
  }
  return uVar2;
}

