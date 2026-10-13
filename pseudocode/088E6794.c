/* Entry 0x088E6794 | file offset 0x000E376C | FUN_088e6794 | bytes 72 */

void FUN_088e6794(int param_1,char param_2)

{
  FUN_088e67dc();
  if (param_2 == '\0') {
    FUN_088665c4(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

