/* Entry 0x0881D624 | file offset 0x0001A5FC | FUN_0881d624 | bytes 136 */

undefined4 FUN_0881d624(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else if (*(int *)(iVar2 + 0x46c) == 0) {
      uVar1 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x568);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else if (*(int *)(iVar2 + 4) == 1) {
        if (*(int *)(iVar2 + 8) == 2) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

