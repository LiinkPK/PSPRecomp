/* Entry 0x08933B4C | file offset 0x00130B24 | FUN_08933b4c | bytes 112 */

void FUN_08933b4c(char *param_1)

{
  if (*param_1 != -1) {
    (*(code *)(&PTR_FUN_089d85dc)[*param_1])();
    *param_1 = -1;
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0893335c();
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  return;
}

