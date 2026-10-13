/* Entry 0x088B7D30 | file offset 0x000B4D08 | FUN_088b7d30 | bytes 40 */

void FUN_088b7d30(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined1 *)(param_1 + iVar1) = 0xff;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  return;
}

