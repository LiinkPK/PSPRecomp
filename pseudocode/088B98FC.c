/* Entry 0x088B98FC | file offset 0x000B68D4 | FUN_088b98fc | bytes 156 */

int FUN_088b98fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == -1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = FUN_088c7f78(param_1);
    if (iVar1 == 1) {
      iVar1 = FUN_088c7fe4(param_1);
      if (iVar1 != 0) {
        iVar2 = iVar1 + 0x5e;
      }
    }
    else {
      iVar2 = FUN_088c0f8c(param_1);
      iVar2 = FUN_0887afbc(&DAT_09b4e828,(int)*(short *)(iVar2 + 2),0);
    }
  }
  return iVar2;
}

