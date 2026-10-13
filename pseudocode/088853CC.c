/* Entry 0x088853CC | file offset 0x000823A4 | FUN_088853cc | bytes 128 */

void FUN_088853cc(int param_1,char param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_08884bc0();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0888630c();
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_08885ef0();
  }
  if ((param_2 == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_088844c4(*(int *)(param_1 + 0x10));
  }
  return;
}

