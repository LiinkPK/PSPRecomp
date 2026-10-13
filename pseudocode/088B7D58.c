/* Entry 0x088B7D58 | file offset 0x000B4D30 | FUN_088b7d58 | bytes 60 */

void FUN_088b7d58(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      *(undefined1 *)(param_1 + iVar2 + 0xc) = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 3;
  } while (iVar1 < 6);
  return;
}

