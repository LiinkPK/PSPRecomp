/* Entry 0x088A56A8 | file offset 0x000A2680 | FUN_088a56a8 | bytes 148 */

void FUN_088a56a8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 100) == '\x01') {
      FUN_088a9a4c(param_1);
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)(param_1 + 0x58) != 0) {
        FUN_088a522c();
        FUN_088a51e4(*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x68;
  } while (iVar1 < 0x2d);
  return;
}

