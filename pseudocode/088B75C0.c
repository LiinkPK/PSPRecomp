/* Entry 0x088B75C0 | file offset 0x000B4598 | FUN_088b75c0 | bytes 40 */

void FUN_088b75c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0xbb) = 0xff;
    *(undefined1 *)(param_1 + 0xbc) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 2;
  } while (iVar1 < 5);
  return;
}

