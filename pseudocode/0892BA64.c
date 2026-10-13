/* Entry 0x0892BA64 | file offset 0x00128A3C | FUN_0892ba64 | bytes 104 */

void FUN_0892ba64(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0892acac(param_1);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    iVar1 = iVar1 + 0x44;
    FUN_0892b164(iVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  FUN_0892c390(param_1);
  FUN_0892c33c(param_1);
  return;
}

