/* Entry 0x0889856C | file offset 0x00095544 | FUN_0889856c | bytes 132 */

void FUN_0889856c(int param_1,int param_2)

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
    FUN_088939ac(DAT_089d6ac8,iVar2);
  }
  return;
}

