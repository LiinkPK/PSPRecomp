/* Entry 0x08835418 | file offset 0x000323F0 | FUN_08835418 | bytes 80 */

void FUN_08835418(int param_1)

{
  if ((*(byte *)(param_1 + 0x196) & 8) == 0) {
    FUN_088352e8(param_1,10,0);
  }
  else {
    FUN_088352e8(param_1,10,1);
  }
  return;
}

