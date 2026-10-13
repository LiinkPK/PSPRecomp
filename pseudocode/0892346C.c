/* Entry 0x0892346C | file offset 0x00120444 | FUN_0892346c | bytes 84 */

undefined4 FUN_0892346c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x20) + 0x12);
  uVar2 = 0;
  if (sVar1 < 4) {
    if (sVar1 < 3) {
      return 0;
    }
  }
  else if (sVar1 != 5) {
    return 0;
  }
  if ((0 < *(short *)(param_1 + 2)) && (*(short *)(param_1 + 2) < 3)) {
    uVar2 = 1;
  }
  return uVar2;
}

