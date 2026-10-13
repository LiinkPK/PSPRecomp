/* Entry 0x088A68B8 | file offset 0x000A3890 | FUN_088a68b8 | bytes 68 */

void FUN_088a68b8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 != -0x110) {
      *(undefined **)(param_1 + 0x110) = &DAT_089cb188;
    }
    if ((param_2 & 1) != 0) {
      FUN_088a7e48();
    }
  }
  return;
}

