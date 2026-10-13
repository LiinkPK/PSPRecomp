/* Entry 0x0881CBB8 | file offset 0x00019B90 | FUN_0881cbb8 | bytes 212 */

int FUN_0881cbb8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    do {
      iVar1 = FUN_0881cb80(iVar1);
      if (iVar1 == 0) break;
    } while (param_1 != *(int *)(iVar1 + 0x14));
    if (iVar1 == 0) {
      return 0;
    }
  }
  do {
    iVar1 = FUN_0881cb80(iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  } while (((param_2 != -1) && (**(short **)(iVar1 + 0x48) != param_2)) ||
          (*(int *)(iVar1 + 0x14) == 0));
  return *(int *)(iVar1 + 0x14);
}

