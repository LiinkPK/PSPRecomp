/* Entry 0x088A5830 | file offset 0x000A2808 | FUN_088a5830 | bytes 84 */

void FUN_088a5830(int param_1)

{
  if (*(int *)(param_1 + 0x124c) != -1) {
    FUN_089411f4(*(undefined4 *)(DAT_089d6d80 + 8),*(int *)(param_1 + 0x124c));
    *(undefined4 *)(param_1 + 0x124c) = 0xffffffff;
    FUN_088a522c(*(undefined4 *)(param_1 + 0x1248));
  }
  return;
}

