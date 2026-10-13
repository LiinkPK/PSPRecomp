/* Entry 0x088B758C | file offset 0x000B4564 | FUN_088b758c | bytes 40 */

void FUN_088b758c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + iVar1 + 0x5a) = 0xff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return;
}

