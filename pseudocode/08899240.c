/* Entry 0x08899240 | file offset 0x00096218 | FUN_08899240 | bytes 112 */

void FUN_08899240(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0899372c(param_1 + 0x108,1,0x108,FUN_0889726c,0,0);
    FUN_0889726c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

