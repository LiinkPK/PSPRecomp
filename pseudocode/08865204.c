/* Entry 0x08865204 | file offset 0x000621DC | FUN_08865204 | bytes 108 */

void FUN_08865204(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_089d5eb0;
  iVar2 = *DAT_089d5eb0;
  if ((iVar2 != 0) && (iVar4 = DAT_089d5eb0[1], iVar4 != 0)) {
    iVar3 = *(int *)(param_1 + 4);
    if (param_1 == iVar2) {
      *DAT_089d5eb0 = iVar3;
      iVar2 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar2 + 4) == param_1) {
        *(int *)(iVar2 + 4) = iVar3;
      }
      else {
        do {
          iVar2 = iVar4;
          iVar4 = *(int *)(iVar2 + 4);
        } while (*(int *)(iVar2 + 4) != param_1);
        *(int *)(iVar2 + 4) = iVar3;
      }
      iVar4 = piVar1[1];
    }
    if (param_1 == iVar4) {
      piVar1[1] = iVar2;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

