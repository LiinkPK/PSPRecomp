/* Entry 0x088C7350 | file offset 0x000C4328 | FUN_088c7350 | bytes 88 */

void FUN_088c7350(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_088c7218(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x138;
  } while (iVar2 < 0x14);
  *(undefined4 *)(param_1 + 0x1860) = 0;
  return;
}

