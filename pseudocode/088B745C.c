/* Entry 0x088B745C | file offset 0x000B4434 | FUN_088b745c | bytes 36 */

void FUN_088b745c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(param_1 + 0x9a) = 0xffff;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 4);
  return;
}

