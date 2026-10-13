/* Entry 0x08916D54 | file offset 0x00113D2C | FUN_08916d54 | bytes 76 */

void FUN_08916d54(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x6d0) + 0xbac) == '\0') {
    func_0x08ac5bf8(*(int *)(param_1 + 0x6d0) + 0xba0);
  }
  *(undefined4 *)(param_1 + 2000) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x7e0) = 1;
  return;
}

