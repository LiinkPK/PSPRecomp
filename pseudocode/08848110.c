/* Entry 0x08848110 | file offset 0x000450E8 | FUN_08848110 | bytes 80 */

int FUN_08848110(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  piVar1 = (int *)(iVar3 + 4);
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      if (*(ushort *)(iVar3 + 8) == param_2) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x74;
    } while (iVar2 < *piVar1);
  }
  return 0;
}

