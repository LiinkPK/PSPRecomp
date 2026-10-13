/* Entry 0x088DE224 | file offset 0x000DB1FC | FUN_088de224 | bytes 56 */

int FUN_088de224(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 8);
  *(undefined2 *)(param_1 + 4) = 1;
  FUN_088de1a8();
  return (int)sVar1;
}

