/* Entry 0x088A2664 | file offset 0x0009F63C | FUN_088a2664 | bytes 148 */

void FUN_088a2664(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  while( true ) {
    iVar3 = DAT_09b4cf98;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x58);
    }
    if (iVar3 == 0) break;
    iVar2 = **(int **)(iVar3 + 0x50);
    iVar1 = (**(code **)(iVar2 + 0x4c))
                      ((int)*(int **)(iVar3 + 0x50) + (int)*(short *)(iVar2 + 0x48));
    iVar2 = iVar3;
    if (iVar1 == param_2) {
      FUN_088a1e44(param_1,iVar3);
    }
  }
  return;
}

