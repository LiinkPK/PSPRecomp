/* Entry 0x08923E98 | file offset 0x00120E70 | FUN_08923e98 | bytes 60 */

undefined4 FUN_08923e98(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x20) + 0x12);
  if (sVar1 < 4) {
    if (2 < sVar1) {
      return 1;
    }
  }
  else if (sVar1 == 5) {
    return 1;
  }
  return 0;
}

