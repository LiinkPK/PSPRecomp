/* Entry 0x0892F3D8 | file offset 0x0012C3B0 | FUN_0892f3d8 | bytes 92 */

void FUN_0892f3d8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089cf010;
    FUN_0892abf8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

