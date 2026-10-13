/* Entry 0x088FC588 | file offset 0x000F9560 | FUN_088fc588 | bytes 112 */

void FUN_088fc588(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x30) + iVar1 + 0xef0) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 + 0xef0) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x1d);
  return;
}

