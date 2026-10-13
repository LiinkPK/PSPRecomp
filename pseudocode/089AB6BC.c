/* Entry 0x089AB6BC | file offset 0x001A8694 | FUN_089ab6bc | bytes 32 */

short FUN_089ab6bc(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 != 0) {
    sVar1 = *(short *)(param_1 + 0xe) + 1;
    *(short *)(param_1 + 0xe) = sVar1;
  }
  return sVar1;
}

