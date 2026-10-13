/* Entry 0x088B7538 | file offset 0x000B4510 | FUN_088b7538 | bytes 84 */

void FUN_088b7538(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  do {
    iVar4 = 0;
    iVar2 = param_1;
    do {
      iVar3 = 0;
      do {
        *(undefined1 *)(iVar2 + iVar3 + 0xc) = 0xff;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 3;
    } while (iVar4 < 6);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x1e;
  } while (iVar1 < 3);
  return;
}

