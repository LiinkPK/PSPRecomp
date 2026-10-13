/* Entry 0x08923750 | file offset 0x00120728 | FUN_08923750 | bytes 76 */

int FUN_08923750(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xbc);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_088470b8((int)**(short **)(iVar1 + 0x2f8)), iVar1 != 0)) {
    iVar2 = (int)*(char *)(iVar1 + 6);
  }
  return iVar2;
}

