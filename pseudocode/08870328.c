/* Entry 0x08870328 | file offset 0x0006D300 | FUN_08870328 | bytes 424 */

undefined4
FUN_08870328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_089d5fd1 == '\0') || (DAT_089d5fd2 != '\0')) || (DAT_089d5fd5 != '\0')) {
    uVar1 = 0;
  }
  else if (DAT_089d5fd4 == '\0') {
    if ((DAT_089d5fd3 == '\0') || (iVar2 = FUN_088f47e0(0x14), iVar2 != 0)) {
      uVar1 = FUN_088713e4(DAT_089d5ff0,param_2);
      iVar2 = FUN_0886fb98(uVar1);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        FUN_088716c8(DAT_089d5ff0,uVar1);
        FUN_0886fd08(param_1,uVar1,iVar2);
        DAT_09b26bb8 = 1;
        DAT_09b26bb9 = 1;
        DAT_09b26b30 = param_5;
        DAT_09b26b34 = param_6;
        DAT_09b26bba = param_7;
        FUN_089359a4(&DAT_09b26b38,param_2);
        DAT_089d5fd4 = '\0';
        iVar2 = FUN_08870154(param_1);
        if (iVar2 < 1) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    DAT_089d5fd4 = '\0';
    uVar1 = 0;
  }
  return uVar1;
}

