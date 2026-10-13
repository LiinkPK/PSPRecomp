/* Entry 0x0892BD10 | file offset 0x00128CE8 | FUN_0892bd10 | bytes 96 */

void FUN_0892bd10(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_0892c390(param_1);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    iVar1 = iVar1 + 0x44;
    FUN_0892b164(iVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0x198) = 0;
  return;
}

