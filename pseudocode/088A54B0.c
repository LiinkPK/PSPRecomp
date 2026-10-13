/* Entry 0x088A54B0 | file offset 0x000A2488 | FUN_088a54b0 | bytes 340 */

int FUN_088a54b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_088a59cc();
  if (iVar1 == 0) {
    iVar1 = FUN_088a5a50(param_1);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar2 = param_3;
      if ((param_5 == '\x01') && (iVar3 = FUN_088a51c0(param_4,param_2), iVar2 = 0, iVar3 != 0)) {
        iVar2 = FUN_088a5208(iVar3);
        FUN_08935524(iVar2,param_3,param_4);
      }
      if ((iVar2 == 0) || (iVar2 = FUN_088a5914(param_1,iVar1,iVar2), iVar2 == 0)) {
        iVar1 = 0;
      }
      else {
        *(undefined1 *)(iVar1 + 0x38) = 0;
        FUN_08935af8(iVar1 + 0x38,param_2,0x1f);
        *(int *)(iVar1 + 0x58) = iVar3;
        *(undefined4 *)(iVar1 + 0x60) = 1;
        *(undefined1 *)(iVar1 + 100) = 1;
      }
    }
  }
  else {
    *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
  }
  return iVar1;
}

