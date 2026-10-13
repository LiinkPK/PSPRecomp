/* Entry 0x08903D6C | file offset 0x00100D44 | FUN_08903d6c | bytes 92 */

undefined4 FUN_08903d6c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocMatchingCancelTarget(*param_1,(int)param_1 + 0x11d);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      FUN_08905848((int)param_1 + 0x11d);
      uVar2 = 1;
    }
  }
  return uVar2;
}

