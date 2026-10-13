/* Entry 0x088EC598 | file offset 0x000E9570 | FUN_088ec598 | bytes 156 */

void FUN_088ec598(int param_1)

{
  if (((0 < *(int *)(param_1 + 8)) && (*(int *)(param_1 + 8) < 2)) &&
     ((*(ushort *)(*(int *)(param_1 + 4) + 0x20) & 0x20) != 0)) {
    if (*(code **)(param_1 + 0xc) != (code *)0x0) {
      (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x10));
    }
    *(undefined4 *)(param_1 + 8) = 2;
  }
  return;
}

