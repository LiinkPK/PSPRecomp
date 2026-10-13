/* Entry 0x088898C8 | file offset 0x000868A0 | FUN_088898c8 | bytes 48 */

void FUN_088898c8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x744) = 0;
    *(undefined1 *)(param_1 + iVar2 + 0x750) = 1;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 3);
  return;
}

