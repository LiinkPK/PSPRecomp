/* Entry 0x0887DA08 | file offset 0x0007A9E0 | FUN_0887da08 | bytes 184 */

void FUN_0887da08(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = (int *)*param_2;
  while (piVar1 != (int *)0x0) {
    piVar4 = (int *)*piVar1;
    piVar2 = piVar4;
    if (piVar1 == (int *)0x0) {
      piVar2 = (int *)*param_2;
    }
    if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
      *param_2 = piVar4;
      iVar5 = *piVar1;
      iVar3 = piVar1[1];
    }
    else {
      *(undefined4 *)piVar1[1] = piVar4;
      iVar5 = *piVar1;
      iVar3 = piVar1[1];
    }
    if (iVar5 == 0) {
      param_2[1] = iVar3;
    }
    else {
      *(int *)(iVar5 + 4) = iVar3;
    }
    piVar1[1] = 0;
    *piVar1 = 0;
    param_2[2] = param_2[2] + -1;
    if (**(int **)(param_1 + 0xf2b0) != 0) {
      for (piVar4 = (int *)(*(int **)(param_1 + 0xf2b0))[1]; *piVar4 != 0; piVar4 = (int *)piVar4[1]
          ) {
      }
    }
    **(undefined4 **)(param_1 + 0xf2b4) = piVar1;
    *(undefined4 *)(param_1 + 0xf2b4) = *(undefined4 *)(*(int *)(param_1 + 0xf2b4) + 4);
    piVar1 = piVar2;
  }
  return;
}

