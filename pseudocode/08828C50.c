/* Entry 0x08828C50 | file offset 0x00025C28 | FUN_08828c50 | bytes 72 */

void FUN_08828c50(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    FUN_0885c538(*(int *)(param_1 + 8),*(int *)(param_1 + 4),0);
  }
  FUN_08828c40(param_1);
  return;
}

