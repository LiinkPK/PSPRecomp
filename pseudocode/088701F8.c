/* Entry 0x088701F8 | file offset 0x0006D1D0 | FUN_088701f8 | bytes 304 */

int FUN_088701f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((DAT_089d5fd1 == '\0') || (DAT_089d5fd2 != '\0')) || (DAT_089d5fd5 != '\0')) {
    iVar2 = 0;
  }
  else if ((DAT_089d5fd3 == '\0') || (iVar2 = FUN_088f47e0(0x14), iVar2 != 0)) {
    uVar1 = FUN_088713e4(DAT_089d5ff0,param_2);
    iVar2 = FUN_0886fb98(uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_08870098(param_1,uVar1,iVar2,param_3,param_4);
      if (iVar2 < 1) {
        if (iVar2 == -0x7ffffff0) {
          DAT_089d5fcc = DAT_089d5fcc + 1;
        }
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

