/* Entry 0x08943084 | file offset 0x0014005C | FUN_08943084 | bytes 112 */

void FUN_08943084(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0894344c(param_1);
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_08970f00(param_1 + 0x28,2);
    if ((param_2 & 1) != 0) {
      FUN_089748d0(param_1);
    }
  }
  return;
}

