/* Entry 0x088985F0 | file offset 0x000955C8 | FUN_088985f0 | bytes 100 */

int FUN_088985f0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((*(int *)(param_1 + 0x70) != 0) && (bVar1 = false, -1 < param_2)) &&
     (bVar1 = false, param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0x14))) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar2 = (int)*(short *)(*(int *)(param_1 + 0x70) + param_2 * 0x4c + 0x22);
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

