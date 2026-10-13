/* Entry 0x08903FDC | file offset 0x00100FB4 | FUN_08903fdc | bytes 92 */

undefined4 FUN_08903fdc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = sceNetAdhocMatchingSetHelloOpt(*param_1,param_3,param_2);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

