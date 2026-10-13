/* Entry 0x08839120 | file offset 0x000360F8 | FUN_08839120 | bytes 76 */

undefined4 FUN_08839120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x534);
  iVar2 = 0;
  while ((*(int **)(iVar1 + 0x20) == (int *)0x0 || (**(int **)(iVar1 + 0x20) != param_2))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x40;
    if (5 < iVar2) {
      return 0;
    }
  }
  return 1;
}

