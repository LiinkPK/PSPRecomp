/* Entry 0x088CBA10 | file offset 0x000C89E8 | FUN_088cba10 | bytes 68 */

void FUN_088cba10(undefined1 *param_1)

{
  *param_1 = 0xff;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  FUN_088b7e30(param_1 + 0x10);
  return;
}

