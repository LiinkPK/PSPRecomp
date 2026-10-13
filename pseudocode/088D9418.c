/* Entry 0x088D9418 | file offset 0x000D63F0 | FUN_088d9418 | bytes 128 */

int FUN_088d9418(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_088d93d8();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (param_2 < 7) {
    if (param_2 < *(uint *)(param_1 + 0x1e0)) {
      iVar1 = param_1 + param_2 * 0x44 + 4;
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

