/* Entry 0x0892F6DC | file offset 0x0012C6B4 | FUN_0892f6dc | bytes 96 */

void FUN_0892f6dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 0x3c;
  do {
    FUN_0892ecac(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x10c;
  } while (iVar2 < 1);
  FUN_0892fd70(param_1);
  FUN_0892fca8(param_1);
  return;
}

