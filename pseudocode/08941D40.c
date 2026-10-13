/* Entry 0x08941D40 | file offset 0x0013ED18 | FUN_08941d40 | bytes 128 */

int FUN_08941d40(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
    iVar3 = 0;
    do {
      if ((*(int *)*puVar2 != 0) && (*(int *)(param_1[2] + iVar3) == param_2)) {
        *(int *)(param_1[4] + iVar3) = *(int *)(param_1[4] + iVar3) + 1;
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 4;
      puVar2 = puVar2 + 1;
    } while (iVar1 < param_1[5]);
  }
  return -1;
}

