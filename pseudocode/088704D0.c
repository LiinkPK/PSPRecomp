/* Entry 0x088704D0 | file offset 0x0006D4A8 | FUN_088704d0 | bytes 204 */

undefined4 FUN_088704d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_089d5fd1 == '\0') || (DAT_089d5fd2 != '\0')) || (DAT_089d5fd5 != '\0')) {
    uVar1 = 0;
  }
  else if ((DAT_089d5fd3 == '\0') || (iVar2 = FUN_088f47e0(0x14), iVar2 != 0)) {
    uVar1 = FUN_088713e4(DAT_089d5ff0,param_2);
    iVar2 = FUN_0886fb98(uVar1);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_088716c8(DAT_089d5ff0,uVar1);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

