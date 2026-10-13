/* Entry 0x088720B4 | file offset 0x0006F08C | FUN_088720b4 | bytes 48 */

void FUN_088720b4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    *(undefined4 *)(DAT_089d6008 + iVar1 + 0x50) = param_1;
    iVar1 = iVar1 + 0x60;
  } while (iVar2 < 2);
  return;
}

