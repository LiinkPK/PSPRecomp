/* Entry 0x089B12F4 | file offset 0x001AE2CC | FUN_089b12f4 | bytes 88 */

void FUN_089b12f4(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x24) != param_2)) {
    FUN_089abeac(1,*(int *)(param_1 + 0x24));
    FUN_089ab6dc(1,param_2);
    *(int *)(param_1 + 0x24) = param_2;
  }
  return;
}

