/* Entry 0x0892BF94 | file offset 0x00128F6C | FUN_0892bf94 | bytes 104 */

void FUN_0892bf94(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  if (0 < *(int *)(param_1 + 0x198)) {
    do {
      iVar1 = iVar1 + 0x44;
      FUN_0892b590(iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x198));
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

