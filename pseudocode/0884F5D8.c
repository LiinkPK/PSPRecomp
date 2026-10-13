/* Entry 0x0884F5D8 | file offset 0x0004C5B0 | FUN_0884f5d8 | bytes 88 */

void FUN_0884f5d8(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x208) = 1;
  *(undefined1 *)(param_1 + 0x204) = 0;
  iVar1 = 0;
  do {
    FUN_088501d8(param_1,0);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar1 < 0x10);
  return;
}

