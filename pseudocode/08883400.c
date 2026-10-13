/* Entry 0x08883400 | file offset 0x000803D8 | FUN_08883400 | bytes 312 */

undefined4 FUN_08883400(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_089d69df == '\0') {
    if (DAT_089d69dc == '\0') {
      uVar2 = 0;
    }
    else {
      iVar1 = FUN_08883c88(&DAT_09b49128,param_1);
      if ((iVar1 == 0) && (iVar1 = FUN_08883d0c(&DAT_09b49130,param_1), iVar1 == 0)) {
        iVar3 = FUN_0888318c(0x74);
        iVar1 = 0;
        if (iVar3 != 0) {
          FUN_08882f28(iVar3,param_1);
          iVar1 = iVar3;
        }
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          *(undefined4 *)(iVar1 + 0x5c) = param_2;
          *(undefined4 *)(iVar1 + 0x60) = param_3;
          if (DAT_09b4912c == 0) {
            DAT_09b49128 = iVar1;
            DAT_09b4912c = iVar1;
            *(undefined4 *)(iVar1 + 0x6c) = 0;
          }
          else {
            *(int *)(DAT_09b4912c + 0x6c) = iVar1;
            *(undefined4 *)(iVar1 + 0x6c) = 0;
            DAT_09b4912c = iVar1;
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

