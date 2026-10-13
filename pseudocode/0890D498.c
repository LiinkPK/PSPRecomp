/* Entry 0x0890D498 | file offset 0x0010A470 | FUN_0890d498 | bytes 140 */

void FUN_0890d498(int param_1,undefined2 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)*(char *)(param_1 + 0x20);
  iVar3 = iVar2;
  if (param_3 + -1 < iVar2) {
    iVar3 = param_3 + -1;
  }
  iVar4 = iVar3 * 2;
  if (0 < iVar3) {
    iVar3 = param_1 + iVar4;
    do {
      iVar4 = iVar4 + -2;
      *(undefined2 *)(iVar3 + 4) = *(undefined2 *)(iVar3 + 2);
      iVar3 = iVar3 + -2;
    } while (0 < iVar4);
  }
  *(undefined2 *)(param_1 + 4) = param_2;
  if (param_3 < iVar2 + 1) {
    uVar1 = (undefined1)param_3;
  }
  else {
    uVar1 = (undefined1)(iVar2 + 1);
  }
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  return;
}

