/* Entry 0x08898464 | file offset 0x0009543C | FUN_08898464 | bytes 132 */

void FUN_08898464(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((*(int *)(param_1 + 0x70) != 0) && (bVar1 = false, -1 < param_2)) &&
     (bVar1 = false, param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0x14))) {
    bVar1 = true;
  }
  if ((bVar1) &&
     (iVar2 = (int)*(short *)(*(int *)(param_1 + 0x70) + param_2 * 0x4c + 0x22), -1 < iVar2)) {
    FUN_08893968(DAT_089d6ac8,iVar2);
  }
  return;
}

