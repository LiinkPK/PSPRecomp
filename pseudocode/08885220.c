/* Entry 0x08885220 | file offset 0x000821F8 | FUN_08885220 | bytes 164 */

void FUN_08885220(int *param_1)

{
  if (*param_1 != 0) {
    FUN_08882298(DAT_089d69a8,*param_1);
    *param_1 = 0;
  }
  if (param_1[4] != 0) {
    FUN_088842e0(param_1[4],3);
    param_1[4] = 0;
  }
  if (param_1[1] != 0) {
    FUN_08884a38(param_1[1],3);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    FUN_08886208(param_1[3],3);
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    FUN_08885dac(param_1[2],3);
    param_1[2] = 0;
  }
  return;
}

