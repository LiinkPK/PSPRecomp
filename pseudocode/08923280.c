/* Entry 0x08923280 | file offset 0x00120258 | FUN_08923280 | bytes 104 */

undefined4 FUN_08923280(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x20) + 0x12);
  if (sVar1 < 4) {
    if (sVar1 < 3) {
      return 0;
    }
  }
  else if (sVar1 != 5) {
    return 0;
  }
  if (*(short *)(param_1 + 2) != 1) {
    return 0;
  }
  FUN_0892397c(param_1,2);
  return 1;
}

