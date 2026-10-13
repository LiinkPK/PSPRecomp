/* Entry 0x088A9A80 | file offset 0x000A6A58 | FUN_088a9a80 | bytes 152 */

void FUN_088a9a80(int param_1)

{
  int *piVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_088a6574(param_1,*(undefined4 *)(DAT_089d6d80 + 8),*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    piVar1 = DAT_089d6dc8;
    if (DAT_089d6dc8[1] == 0) {
      DAT_089d6dc8[1] = param_1;
      *piVar1 = param_1;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      *(int *)(DAT_089d6dc8[1] + 0x34) = param_1;
      *(undefined4 *)(param_1 + 0x34) = 0;
      piVar1[1] = param_1;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}

