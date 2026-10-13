/* Entry 0x089BA814 | file offset 0x001B77EC | FUN_089ba814 | bytes 32 */

short FUN_089ba814(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 != 0) {
    sVar1 = *(short *)(param_1 + 0xe) + 1;
    *(short *)(param_1 + 0xe) = sVar1;
  }
  return sVar1;
}

