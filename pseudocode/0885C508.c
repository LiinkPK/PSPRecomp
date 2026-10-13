/* Entry 0x0885C508 | file offset 0x000594E0 | FUN_0885c508 | bytes 48 */

void FUN_0885c508(int *param_1)

{
  param_1[5] = param_1[1];
  param_1[6] = 0;
  param_1[7] = *param_1 - (int)(param_1 + 5);
  *(char *)(param_1 + 8) = (char)param_1[3];
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}

