/* Entry 0x089BCE84 | file offset 0x001B9E5C | FUN_089bce84 | bytes 88 */

void FUN_089bce84(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != param_2)) {
    FUN_089bb004(1,*(int *)(param_1 + 8));
    FUN_089ba834(1,param_2);
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}

