/* Entry 0x0893105C | file offset 0x0012E034 | FUN_0893105c | bytes 272 */

void FUN_0893105c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0x29c) == -1) break;
    FUN_08930690(param_1 + *(int *)(iVar2 + 0x29c) * 0x5c + 0x38);
    iVar1 = iVar1 + 1;
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + -1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 5);
  iVar2 = 0;
  iVar1 = param_1 + 0x38;
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0x2b0) == -1) break;
    FUN_089305c0(iVar1,param_1 + *(int *)(iVar3 + 0x2b0) * 0x5c + 0x38);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + 0x5c;
  } while (iVar2 < 5);
  for (; iVar2 < 6; iVar2 = iVar2 + 1) {
    FUN_08930328(iVar1);
    iVar1 = iVar1 + 0x5c;
  }
  return;
}

