/* Entry 0x08885608 | file offset 0x000825E0 | FUN_08885608 | bytes 212 */

undefined4 FUN_08885608(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 4) == 0) || (iVar1 = FUN_08884f24(), iVar1 != 0)) {
    if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_08886478(), iVar1 != 0)) {
      if ((*(int *)(param_1 + 8) == 0) || (iVar1 = FUN_08886094(), iVar1 != 0)) {
        if (((param_2 == '\0') && (*(int *)(param_1 + 0x10) != 0)) &&
           (iVar1 = FUN_0888473c(*(int *)(param_1 + 0x10)), iVar1 == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

