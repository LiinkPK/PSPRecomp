/* Entry 0x08850D30 | file offset 0x0004DD08 | FUN_08850d30 | bytes 208 */

void FUN_08850d30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x544) = &DAT_089c8ad8;
    FUN_0884bd7c(param_1 + 0x5d8);
    iVar1 = DAT_089d4958;
    iVar3 = *(int *)(DAT_089d4958 + 0x24);
    if ((iVar3 != 0) && (*(int *)(DAT_089d4958 + 0x28) != 0)) {
      iVar4 = *(int *)(param_1 + 0x5f0);
      if (param_1 == iVar3) {
        *(int *)(DAT_089d4958 + 0x24) = iVar4;
        iVar3 = 0;
        iVar4 = *(int *)(iVar1 + 0x28);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x5f0);
        if (*(int *)(iVar3 + 0x5f0) == param_1) {
          *(int *)(iVar3 + 0x5f0) = iVar4;
        }
        else {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 0x5f0);
          } while (*(int *)(iVar3 + 0x5f0) != param_1);
          *(int *)(iVar3 + 0x5f0) = iVar4;
        }
        iVar4 = *(int *)(iVar1 + 0x28);
      }
      if (param_1 == iVar4) {
        *(int *)(iVar1 + 0x28) = iVar3;
      }
      *(undefined4 *)(param_1 + 0x5f0) = 0;
    }
    FUN_088310bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0883133c(param_1);
    }
  }
  return;
}

