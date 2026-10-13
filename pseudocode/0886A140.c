/* Entry 0x0886A140 | file offset 0x00067118 | FUN_0886a140 | bytes 64 */

void FUN_0886a140(int param_1)

{
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_0885c538(*(undefined4 *)(DAT_089d5f94 + 4),*(int *)(param_1 + 0x10c),0);
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  return;
}

