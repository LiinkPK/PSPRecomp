/* Entry 0x088D01E4 | file offset 0x000CD1BC | FUN_088d01e4 | bytes 396 */

int FUN_088d01e4(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = DAT_089d7830;
  if (*(code **)(param_1 + 0x10968) == (code *)0x0) {
    iVar1 = **(int **)(DAT_089d7830 + 0x1095c);
    **(int **)(DAT_089d7830 + 0x1095c) = 0;
    *(undefined4 *)(iVar2 + 0x1095c) = *(undefined4 *)(*(int *)(iVar2 + 0x1095c) + 4);
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x10968))();
  }
  iVar2 = FUN_088de0e8(iVar1,param_3,param_4,0xffffffff,param_5,param_2);
  if (iVar2 == 0) {
    if (*(code **)(param_1 + 0x1096c) == (code *)0x0) {
      if (**(int **)(param_1 + 0x1095c) != 0) {
        for (piVar4 = (int *)(*(int **)(param_1 + 0x1095c))[1]; *piVar4 != 0;
            piVar4 = (int *)piVar4[1]) {
        }
      }
      **(int **)(param_1 + 0x10960) = iVar1;
      *(undefined4 *)(param_1 + 0x10960) = *(undefined4 *)(*(int *)(param_1 + 0x10960) + 4);
    }
    else {
      (**(code **)(param_1 + 0x1096c))(iVar1);
    }
  }
  else {
    if (*(int *)(param_1 + 0xebcc) == 0) {
      *(int *)(param_1 + 0xebcc) = iVar1;
      *(int *)(param_1 + 0xebc8) = iVar1;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      iVar2 = *(int *)(param_1 + 0xebd0);
    }
    else {
      *(int *)(*(int *)(param_1 + 0xebcc) + 0xc) = iVar1;
      uVar3 = *(undefined4 *)(param_1 + 0xebcc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      iVar2 = *(int *)(param_1 + 0xebd0);
      *(int *)(param_1 + 0xebcc) = iVar1;
    }
    *(int *)(param_1 + 0xebd0) = iVar2 + 1;
  }
  return param_5 + 1;
}

