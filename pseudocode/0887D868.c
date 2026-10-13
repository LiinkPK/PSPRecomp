/* Entry 0x0887D868 | file offset 0x0007A840 | FUN_0887d868 | bytes 416 */

int FUN_0887d868(int param_1,undefined4 param_2,short *param_3,undefined4 param_4,undefined4 param_5
                ,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = **(int **)(param_1 + 0x6e40);
  **(int **)(param_1 + 0x6e40) = 0;
  *(undefined4 *)(param_1 + 0x6e40) = *(undefined4 *)(*(int *)(param_1 + 0x6e40) + 4);
  FUN_0887b6a0(iVar4);
  FUN_0887b820(iVar4,param_4);
  if (*param_3 == 0x1c) {
    iVar1 = FUN_0887e9cc(*(undefined4 *)(param_1 + 0xf2c0),param_1 + 0x30,iVar4,param_3 + 1,param_6,
                         param_7);
  }
  else {
    iVar1 = FUN_0887f294(param_1,iVar4,param_2,param_3,param_5,param_6,param_7,param_8);
  }
  if (iVar1 == 0) {
    FUN_0887dac0(param_1,iVar4);
    if (**(int **)(param_1 + 0x6e40) != 0) {
      for (piVar3 = (int *)(*(int **)(param_1 + 0x6e40))[1]; *piVar3 != 0; piVar3 = (int *)piVar3[1]
          ) {
      }
    }
    **(int **)(param_1 + 0x6e44) = iVar4;
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x6e44) = *(undefined4 *)(*(int *)(param_1 + 0x6e44) + 4);
  }
  else {
    if (*(int *)(param_1 + 0x16c) == 0) {
      *(int *)(param_1 + 0x16c) = iVar4;
      *(int *)(param_1 + 0x168) = iVar4;
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x50) = 0;
      iVar1 = *(int *)(param_1 + 0x170);
    }
    else {
      *(int *)(*(int *)(param_1 + 0x16c) + 0x48) = iVar4;
      uVar2 = *(undefined4 *)(param_1 + 0x16c);
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x50) = uVar2;
      iVar1 = *(int *)(param_1 + 0x170);
      *(int *)(param_1 + 0x16c) = iVar4;
    }
    *(int *)(param_1 + 0x170) = iVar1 + 1;
  }
  return iVar4;
}

