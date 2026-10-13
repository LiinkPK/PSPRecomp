/* Entry 0x089232E8 | file offset 0x001202C0 | FUN_089232e8 | bytes 136 */

undefined4 FUN_089232e8(int param_1)

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
  if (*(short *)(param_1 + 2) != 2) {
    return 0;
  }
  FUN_0892397c(param_1,1);
  FUN_08924ce4(param_1,2,0);
  return 1;
}

