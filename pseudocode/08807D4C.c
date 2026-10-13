/* Entry 0x08807D4C | file offset 0x00004D24 | FUN_08807d4c | bytes 288 */

undefined4 FUN_08807d4c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088378c4(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_0880ac84(*(int *)(param_2 + 0x3ac) + 0x28,param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x542) == '\x03')) {
        iVar1 = *(int *)(iVar1 + 0x5d4);
      }
      if ((iVar1 != 0) && (*(char *)(iVar1 + 0x542) == '\x01')) {
        iVar1 = *(int *)(iVar1 + 0x1108);
      }
      if ((param_2 != 0) && (*(char *)(param_2 + 0x542) == '\x03')) {
        param_2 = *(int *)(param_2 + 0x5d4);
      }
      if ((param_2 != 0) && (*(char *)(param_2 + 0x542) == '\x01')) {
        param_2 = *(int *)(param_2 + 0x1108);
      }
      if (iVar1 == param_2) {
        uVar2 = 0;
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

