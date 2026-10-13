/* Entry 0x0880FEA0 | file offset 0x0000CE78 | FUN_0880fea0 | bytes 40 */

void FUN_0880fea0(int param_1,uint param_2,char param_3)

{
  if (param_3 == '\x01') {
    param_2 = *(uint *)(param_1 + 0xbc) | param_2;
  }
  else {
    param_2 = *(uint *)(param_1 + 0xbc) & ~param_2;
  }
  *(uint *)(param_1 + 0xbc) = param_2;
  return;
}

