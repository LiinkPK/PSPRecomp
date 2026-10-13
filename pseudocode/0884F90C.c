/* Entry 0x0884F90C | file offset 0x0004C8E4 | FUN_0884f90c | bytes 84 */

int FUN_0884f90c(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x208) != '\0') {
    uVar1 = FUN_08850a64(**(undefined1 **)(*(int *)(param_1 + 0x200) + 0x5a4),
                         (*(byte *)(*(int *)(*(int *)(param_1 + 0x200) + 0x2f8) + 8) & 8) != 0);
    *(undefined1 *)(param_1 + 0x207) = uVar1;
  }
  return (int)*(char *)(param_1 + 0x207);
}

