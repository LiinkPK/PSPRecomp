/* Entry 0x088B74FC | file offset 0x000B44D4 | FUN_088b74fc | bytes 60 */

void FUN_088b74fc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      *(undefined1 *)(param_1 + iVar2) = 0xff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x1e;
  } while (iVar1 < 3);
  return;
}

