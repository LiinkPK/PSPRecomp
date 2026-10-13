/* Entry 0x08895F60 | file offset 0x00092F38 | FUN_08895f60 | bytes 132 */

void FUN_08895f60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x10;
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      do {
        if (*(int *)(iVar3 + 0x14) == 0) {
          FUN_08896708(param_1,iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x1c;
      } while (iVar2 < *(int *)(*param_1 + 8));
    }
  }
  return;
}

