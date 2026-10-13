/* Entry 0x0880FC58 | file offset 0x0000CC30 | FUN_0880fc58 | bytes 68 */

void FUN_0880fc58(int param_1)

{
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_0886eb84();
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  return;
}

