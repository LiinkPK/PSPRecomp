/* Entry 0x0891A724 | file offset 0x001176FC | FUN_0891a724 | bytes 88 */

void FUN_0891a724(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    FUN_0891a6f8(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x14;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}

