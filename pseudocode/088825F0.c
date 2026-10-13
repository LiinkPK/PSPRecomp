/* Entry 0x088825F0 | file offset 0x0007F5C8 | FUN_088825f0 | bytes 196 */

void FUN_088825f0(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x34);
    }
  } while ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x28) & param_2) != param_3));
  while (iVar2 = iVar1, iVar1 != 0) {
    do {
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 4);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x34);
      }
    } while ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x28) & param_2) != param_3));
    FUN_088828bc(param_1,iVar1);
    iVar1 = iVar2;
  }
  return;
}

