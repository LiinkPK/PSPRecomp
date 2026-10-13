/* Entry 0x08835378 | file offset 0x00032350 | FUN_08835378 | bytes 80 */

void FUN_08835378(int param_1)

{
  if ((*(byte *)(param_1 + 0x196) & 0x20) == 0) {
    FUN_088352e8(param_1,0xb,0);
  }
  else {
    FUN_088352e8(param_1,0xb,1);
  }
  return;
}

