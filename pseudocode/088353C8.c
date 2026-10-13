/* Entry 0x088353C8 | file offset 0x000323A0 | FUN_088353c8 | bytes 80 */

void FUN_088353c8(int param_1)

{
  if ((*(byte *)(param_1 + 0x196) & 0x10) == 0) {
    FUN_088352e8(param_1,0xf,0);
  }
  else {
    FUN_088352e8(param_1,0xf,1);
  }
  return;
}

