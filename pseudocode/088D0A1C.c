/* Entry 0x088D0A1C | file offset 0x000CD9F4 | FUN_088d0a1c | bytes 272 */

void FUN_088d0a1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if ((param_2 != 0) && (iVar1 = FUN_088de1a8(param_2), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0xebc8) = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0xc);
    }
    else {
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xebcc) = uVar2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_1 + 0xebd0) = *(int *)(param_1 + 0xebd0) + -1;
    if (*(code **)(param_1 + 0x1096c) == (code *)0x0) {
      if (**(int **)(param_1 + 0x1095c) != 0) {
        for (piVar3 = (int *)(*(int **)(param_1 + 0x1095c))[1]; *piVar3 != 0;
            piVar3 = (int *)piVar3[1]) {
        }
      }
      **(int **)(param_1 + 0x10960) = param_2;
      *(undefined4 *)(param_1 + 0x10960) = *(undefined4 *)(*(int *)(param_1 + 0x10960) + 4);
    }
    else {
      (**(code **)(param_1 + 0x1096c))(param_2);
    }
  }
  return;
}

