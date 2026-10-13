/* Entry 0x088DE1A8 | file offset 0x000DB180 | FUN_088de1a8 | bytes 64 */

bool FUN_088de1a8(int param_1)

{
  bool bVar1;
  
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
  bVar1 = *(short *)(param_1 + 4) == 0;
  if (bVar1) {
    FUN_088de050();
  }
  return bVar1;
}

