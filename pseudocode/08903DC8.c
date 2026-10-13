/* Entry 0x08903DC8 | file offset 0x00100DA0 | FUN_08903dc8 | bytes 88 */

undefined4 FUN_08903dc8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocMatchingCancelTarget(*param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

