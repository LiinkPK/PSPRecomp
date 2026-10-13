/* Entry 0x088FC5F8 | file offset 0x000F95D0 | FUN_088fc5f8 | bytes 48 */

void FUN_088fc5f8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar2 + 1;
    *(undefined2 *)(*(int *)(param_1 + 0x30) + iVar1 + 0x592) = 0xffff;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x32);
  return;
}

