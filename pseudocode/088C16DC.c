/* Entry 0x088C16DC | file offset 0x000BE6B4 | FUN_088c16dc | bytes 152 */

int FUN_088c16dc(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  bVar1 = true;
  if (param_1[1] != 0) {
    iVar2 = FUN_088c7e98((int)*(short *)(param_1[1] + 0x30 + param_2 * 2));
    if (iVar2 != 0) {
      iVar3 = (int)*(short *)(iVar2 + 0x10);
    }
    bVar1 = iVar3 == -1;
  }
  if (((bVar1) && (*param_1 != 0)) && (param_2 == 0)) {
    iVar3 = (int)*(short *)(*param_1 + 4);
  }
  return iVar3;
}

