/* Entry 0x088860C8 | file offset 0x000830A0 | FUN_088860c8 | bytes 84 */

bool FUN_088860c8(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_1 == 0) {
    bVar1 = true;
  }
  else if (param_1[1] != 0) {
    bVar1 = (int)*(short *)(param_1[1] + 0xc) == (uint)*(ushort *)(&DAT_089c9fda + param_1[2] * 6);
  }
  return bVar1;
}

