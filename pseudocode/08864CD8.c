/* Entry 0x08864CD8 | file offset 0x00061CB0 | FUN_08864cd8 | bytes 24 */

void FUN_08864cd8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[2] = param_3[2] | 1;
  param_3[1] = param_2;
  return;
}

