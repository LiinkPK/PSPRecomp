/* Entry 0x089237AC | file offset 0x00120784 | FUN_089237ac | bytes 60 */

undefined4 FUN_089237ac(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x20) + 0x16);
  if (sVar1 < 0x134) {
    if (sVar1 == 0xcf) {
      return 1;
    }
  }
  else if (sVar1 < 0x136) {
    return 1;
  }
  return 0;
}

