/* Entry 0x08941888 | file offset 0x0013E860 | FUN_08941888 | bytes 112 */

int FUN_08941888(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_089411d8(param_1,*(int *)(param_1 + 0x40));
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  iVar1 = FUN_08943124(*(undefined4 *)(param_1 + 0x1c),param_2);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  return iVar1;
}

