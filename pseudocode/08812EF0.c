/* Entry 0x08812EF0 | file offset 0x0000FEC8 | FUN_08812ef0 | bytes 276 */

void FUN_08812ef0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      return;
    }
    if (0 < iVar1) {
      iVar1 = *param_2;
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          return;
        }
      }
      else if (iVar1 != 3) {
        return;
      }
      FUN_088127b8(param_2,param_1,param_3);
      FUN_089a3a64(0xbf800000,param_3,param_3);
      return;
    }
  }
  else if (iVar1 != 3) {
    return;
  }
  iVar1 = *param_2;
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      return;
    }
    if (0 < iVar1) {
      FUN_088127b8(param_1,param_2,param_3);
      return;
    }
  }
  else if (iVar1 != 3) {
    return;
  }
  FUN_08812414(param_1,param_2,param_3);
  return;
}

