/* Entry 0x0890BDD8 | file offset 0x00108DB0 | FUN_0890bdd8 | bytes 92 */

void FUN_0890bdd8(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x120) == '\x01') {
    FUN_08904038(param_2,param_1 + *(int *)(param_1 + 0x110) * 0x10 + 8,
                 *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c));
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  return;
}

