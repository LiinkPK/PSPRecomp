/* Entry 0x08903C58 | file offset 0x00100C30 | FUN_08903c58 | bytes 84 */

undefined4 FUN_08903c58(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocMatchingStop(*param_1);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      FUN_08904978(param_1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

