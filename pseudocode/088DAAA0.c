/* Entry 0x088DAAA0 | file offset 0x000D7A78 | FUN_088daaa0 | bytes 164 */

void FUN_088daaa0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x40) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0x3c);
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x3c);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x40) + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x3c);
  }
  if (iVar2 == 0) {
    param_1[1] = uVar3;
  }
  else {
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  param_1[2] = param_1[2] + -1;
  iVar2 = DAT_089d7830;
  if (**(int **)(DAT_089d7830 + 0xc4ec) != 0) {
    for (piVar1 = (int *)(*(int **)(DAT_089d7830 + 0xc4ec))[1]; *piVar1 != 0;
        piVar1 = (int *)piVar1[1]) {
    }
  }
  **(int **)(DAT_089d7830 + 0xc4f0) = param_2;
  *(undefined4 *)(iVar2 + 0xc4f0) = *(undefined4 *)(*(int *)(iVar2 + 0xc4f0) + 4);
  return;
}

