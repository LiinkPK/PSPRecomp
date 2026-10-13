/* Entry 0x08865710 | file offset 0x000626E8 | FUN_08865710 | bytes 112 */

void FUN_08865710(undefined1 *param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0885c538(DAT_089d5eb8,*(int *)(param_1 + 0x10),0);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0885c538(DAT_089d5eb8,*(int *)(param_1 + 0x14),0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  return;
}

