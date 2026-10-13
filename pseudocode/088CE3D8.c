/* Entry 0x088CE3D8 | file offset 0x000CB3B0 | FUN_088ce3d8 | bytes 88 */

void FUN_088ce3d8(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_088da060();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_088ce3c4(param_1);
  return;
}

