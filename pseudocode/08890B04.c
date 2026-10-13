/* Entry 0x08890B04 | file offset 0x0008DADC | FUN_08890b04 | bytes 88 */

void FUN_08890b04(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_089ca748;
    FUN_08890b9c(param_1);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

