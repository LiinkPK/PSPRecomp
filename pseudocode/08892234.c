/* Entry 0x08892234 | file offset 0x0008F20C | FUN_08892234 | bytes 148 */

void FUN_08892234(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x734) = &DAT_089ca758;
    *(undefined **)(param_1 + 0x120) = &DAT_089ca768;
    FUN_08894e28(param_1 + 0x4e0,2);
    FUN_0899372c(param_1 + 0x140,3,0x130,FUN_08894e28,0,0);
    FUN_08894e28(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

