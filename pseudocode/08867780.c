/* Entry 0x08867780 | file offset 0x00064758 | FUN_08867780 | bytes 64 */

int FUN_08867780(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = iVar2 * (param_2 / iVar2);
  if (param_2 % iVar2 != 0) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

