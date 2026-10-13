/* Entry 0x088A27D0 | file offset 0x0009F7A8 | FUN_088a27d0 | bytes 164 */

void FUN_088a27d0(undefined4 param_1,undefined4 param_2,int param_3)

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
    if (iVar1 == param_3) {
      FUN_088a1f2c(param_1,param_2,iVar3);
    }
  }
  return;
}

