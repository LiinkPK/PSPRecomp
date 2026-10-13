/* Entry 0x08850FC0 | file offset 0x0004DF98 | FUN_08850fc0 | bytes 52 */

void FUN_08850fc0(int param_1,undefined2 param_2)

{
  short sVar1;
  
  if (*(short *)(param_1 + 0x608) < 8) {
    sVar1 = *(short *)(param_1 + 0x608);
    *(short *)(param_1 + 0x608) = sVar1 + 1;
    *(undefined2 *)(param_1 + sVar1 * 2 + 0x5f8) = param_2;
  }
  return;
}

