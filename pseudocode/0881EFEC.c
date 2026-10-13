/* Entry 0x0881EFEC | file offset 0x0001BFC4 | FUN_0881efec | bytes 112 */

void FUN_0881efec(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x30) = &DAT_089c7638;
    FUN_0881f068(param_1);
    FUN_088201e8(param_1 + 0x24,2);
    FUN_0881f424(param_1 + 8,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

