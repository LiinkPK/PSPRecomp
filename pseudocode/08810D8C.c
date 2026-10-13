/* Entry 0x08810D8C | file offset 0x0000DD64 | FUN_08810d8c | bytes 76 */

void FUN_08810d8c(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0885c538(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0);
  }
  FUN_08810d7c(param_1);
  return;
}

