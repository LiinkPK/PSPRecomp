/* Entry 0x088A43EC | file offset 0x000A13C4 | FUN_088a43ec | bytes 116 */

void FUN_088a43ec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != -1) {
      FUN_08941994(*(undefined4 *)(DAT_089d6d80 + 8),*(int *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    if ((param_2 & 1) != 0) {
      FUN_088a4fc4(param_1);
    }
  }
  return;
}

