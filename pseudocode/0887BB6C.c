/* Entry 0x0887BB6C | file offset 0x00078B44 | FUN_0887bb6c | bytes 92 */

int FUN_0887bb6c(int *param_1)

{
  uint uVar1;
  
  if ((param_1[4] & 0x2000U) == 0) {
    uVar1 = (uint)*(short *)(*param_1 + 0x10);
  }
  else {
    uVar1 = (uint)*(ushort *)(*param_1 + 4);
  }
  return (int)((float)(int)uVar1 * (float)param_1[6]);
}

