/* Entry 0x088E8268 | file offset 0x000E5240 | FUN_088e8268 | bytes 60 */

void FUN_088e8268(undefined4 *param_1)

{
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 1;
  }
  *param_1 = 0;
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 0;
  }
  return;
}

