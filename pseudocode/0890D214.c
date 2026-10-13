/* Entry 0x0890D214 | file offset 0x0010A1EC | FUN_0890d214 | bytes 76 */

void FUN_0890d214(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = -1;
  if (0 < *(int *)(param_1 + 0x354)) {
    iVar2 = param_1 + 0x4c;
    do {
      if ((iVar1 == -1) || (*(int *)(iVar2 + 0x50) < iVar1)) {
        iVar1 = *(int *)(iVar2 + 0x50);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x54;
    } while (iVar3 < *(int *)(param_1 + 0x354));
  }
  return;
}

