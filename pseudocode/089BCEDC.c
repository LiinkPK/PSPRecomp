/* Entry 0x089BCEDC | file offset 0x001B9EB4 | FUN_089bcedc | bytes 88 */

void FUN_089bcedc(int param_1,int param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != param_2)) {
    FUN_089bb004(1,*(int *)(param_1 + 4));
    FUN_089ba834(1,param_2);
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}

