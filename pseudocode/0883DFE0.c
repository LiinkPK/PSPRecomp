/* Entry 0x0883DFE0 | file offset 0x0003AFB8 | FUN_0883dfe0 | bytes 116 */

int FUN_0883dfe0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = param_1;
  while( true ) {
    iVar1 = iVar1 + 4;
    iVar5 = *(int *)(param_1 + 4);
    iVar4 = iVar1;
    if ((((iVar5 != 0) && (iVar4 = iVar3, *(int *)(iVar5 + 0x80) == param_3)) &&
        (*(short *)(iVar5 + 0x24) == param_2)) && (*(int *)(iVar5 + 0x18) == param_4)) break;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
    iVar3 = iVar4;
    if (7 < iVar2) {
      return iVar4;
    }
  }
  return iVar1;
}

