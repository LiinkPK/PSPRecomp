/* Entry 0x0888509C | file offset 0x00082074 | FUN_0888509c | bytes 80 */

void FUN_0888509c(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

