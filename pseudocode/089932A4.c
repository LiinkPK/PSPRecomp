/* Entry 0x089932A4 | file offset 0x0019027C | FUN_089932a4 | bytes 92 */

void FUN_089932a4(int param_1,int param_2,undefined4 param_3,code *param_4,int param_5,int param_6)

{
  param_1 = param_1 - param_6;
  if (param_4 == (code *)0x0) {
    FUN_08992ec0(param_1);
  }
  else if (param_5 == 0) {
    (*param_4)(param_1);
  }
  else {
    (*param_4)(param_1,param_6 + param_2);
  }
  return;
}

