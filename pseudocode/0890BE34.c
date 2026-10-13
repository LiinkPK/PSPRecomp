/* Entry 0x0890BE34 | file offset 0x00108E0C | FUN_0890be34 | bytes 92 */

undefined4 FUN_0890be34(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x134) == '\0') {
    iVar1 = FUN_08903e20(param_2,*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 300),
                         *(undefined4 *)(param_1 + 0x130));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  return 1;
}

