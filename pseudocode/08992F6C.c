/* Entry 0x08992F6C | file offset 0x0018FF44 | FUN_08992f6c | bytes 84 */

void FUN_08992f6c(int *param_1)

{
  if ((*param_1 != 0) || (param_1 == DAT_09af6780)) {
    FUN_08992f50();
  }
  *param_1 = (int)DAT_09af6780;
  DAT_09af6780 = param_1;
  return;
}

