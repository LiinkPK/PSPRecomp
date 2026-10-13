/* Entry 0x0891A848 | file offset 0x00117820 | FUN_0891a848 | bytes 88 */

void FUN_0891a848(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 + 4;
  do {
    FUN_0891a0f4(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2e8;
  } while (iVar2 < 2);
  FUN_0891a15c(param_1 + 0x5d4);
  return;
}

