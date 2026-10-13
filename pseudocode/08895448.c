/* Entry 0x08895448 | file offset 0x00092420 | FUN_08895448 | bytes 52 */

void FUN_08895448(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089ca890;
    if ((param_2 & 1) != 0) {
      FUN_088954fc();
    }
  }
  return;
}

