/* Entry 0x088F5508 | file offset 0x000F24E0 | FUN_088f5508 | bytes 124 */

undefined4 FUN_088f5508(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x1a068);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      if (((*(byte *)(param_1 + 0x27) & 1) == 1) && (iVar3 = iVar3 + 1, 8 < iVar3)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0x10a8;
    } while (iVar2 < *piVar1);
  }
  return 1;
}

