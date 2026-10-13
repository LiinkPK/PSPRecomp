/* Entry 0x088E9500 | file offset 0x000E64D8 | FUN_088e9500 | bytes 68 */

void FUN_088e9500(int param_1)

{
  if (*(char *)(param_1 + 0x1b04) != '\0') {
    FUN_088d6dbc(param_1 + 0x1874);
    FUN_088ce3d8(param_1 + 0x1af0);
    *(undefined1 *)(param_1 + 0x1b04) = 0;
  }
  return;
}

