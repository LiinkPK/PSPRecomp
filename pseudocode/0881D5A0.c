/* Entry 0x0881D5A0 | file offset 0x0001A578 | FUN_0881d5a0 | bytes 132 */

undefined4 FUN_0881d5a0(undefined4 param_1,int param_2)

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
    else if (*(char *)(iVar2 + 0x5a0) == '\0') {
      uVar1 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x568);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else if (*(int *)(iVar2 + 8) == 0) {
        uVar1 = 0;
      }
      else if (*(int *)(iVar2 + 0x18) == 1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

