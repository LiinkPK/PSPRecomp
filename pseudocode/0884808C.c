/* Entry 0x0884808C | file offset 0x00045064 | FUN_0884808c | bytes 68 */

int FUN_0884808c(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  piVar1 = (int *)(iVar2 + 4);
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      if (*(ushort *)(iVar2 + 8) == param_2) {
        return iVar2 + 8;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x74;
    } while (iVar3 < *piVar1);
  }
  return 0;
}

