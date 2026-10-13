/* Entry 0x08810414 | file offset 0x0000D3EC | FUN_08810414 | bytes 68 */

void FUN_08810414(undefined4 *param_1,int param_2)

{
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = *(int *)(param_2 + 8) + param_2;
  param_1[2] = *(undefined4 *)(param_2 + 0x1c);
  param_1[3] = *(int *)(param_2 + 0x20) + param_2;
  param_1[4] = *(int *)(param_2 + 0x10) + param_2;
  param_1[5] = *(int *)(param_2 + 0x18) + param_2;
  return;
}

