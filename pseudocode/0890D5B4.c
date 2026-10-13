/* Entry 0x0890D5B4 | file offset 0x0010A58C | FUN_0890d5b4 | bytes 132 */

void FUN_0890d5b4(undefined2 *param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x76);
  iVar2 = param_3 + -1;
  if (iVar1 <= iVar2) {
    iVar2 = *(int *)(param_1 + 0x76);
  }
  iVar4 = iVar2 * 2;
  if (0 < iVar2) {
    puVar3 = param_1 + iVar2;
    do {
      iVar4 = iVar4 + -2;
      *puVar3 = puVar3[-1];
      puVar3 = puVar3 + -1;
    } while (0 < iVar4);
  }
  *param_1 = param_2;
  iVar1 = iVar1 + 1;
  if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x76) = iVar1;
  return;
}

