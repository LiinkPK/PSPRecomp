/* Entry 0x088D9498 | file offset 0x000D6470 | FUN_088d9498 | bytes 128 */

int FUN_088d9498(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_088d93d8();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (param_2 < 7) {
    if (param_2 < *(uint *)(param_1 + 0x1e0)) {
      iVar1 = param_1 + 4 + param_2 * 0x44;
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

