/* Entry 0x088BE1BC | file offset 0x000BB194 | FUN_088be1bc | bytes 300 */

void FUN_088be1bc(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2;
    iVar4 = iVar3 + 2;
    if (param_3 <= iVar4) break;
    if (*(int *)(param_1 + iVar4 * 4) < *(int *)(param_1 + iVar4 * 4 + -4)) {
      iVar4 = iVar3 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
    iVar2 = iVar4;
  }
  if (param_3 == iVar4) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar4 * 4 + -4);
    iVar2 = iVar3 + 1;
  }
  iVar3 = iVar2 - (iVar2 + -1 >> 0x1f);
  iVar4 = iVar2 * 4;
  while( true ) {
    bVar1 = iVar2 <= param_2;
    iVar2 = iVar3 + -1 >> 1;
    if ((bVar1) || (param_4 <= *(int *)(param_1 + iVar2 * 4))) break;
    *(int *)(param_1 + iVar4) = *(int *)(param_1 + iVar2 * 4);
    iVar3 = iVar2 - (iVar2 + -1 >> 0x1f);
    iVar4 = iVar2 << 2;
  }
  *(int *)(param_1 + iVar4) = param_4;
  return;
}

