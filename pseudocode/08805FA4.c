/* Entry 0x08805FA4 | file offset 0x00002F7C | FUN_08805fa4 | bytes 200 */

void FUN_08805fa4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x544) = &DAT_089c6a20;
    iVar1 = DAT_089d4958;
    iVar3 = *(int *)(DAT_089d4958 + 0x1c);
    if ((iVar3 != 0) && (*(int *)(DAT_089d4958 + 0x20) != 0)) {
      iVar4 = *(int *)(param_1 + 0xb54);
      if (param_1 == iVar3) {
        *(int *)(DAT_089d4958 + 0x1c) = iVar4;
        iVar3 = 0;
        iVar4 = *(int *)(iVar1 + 0x20);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0xb54);
        if (*(int *)(iVar3 + 0xb54) == param_1) {
          *(int *)(iVar3 + 0xb54) = iVar4;
        }
        else {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 0xb54);
          } while (*(int *)(iVar3 + 0xb54) != param_1);
          *(int *)(iVar3 + 0xb54) = iVar4;
        }
        iVar4 = *(int *)(iVar1 + 0x20);
      }
      if (param_1 == iVar4) {
        *(int *)(iVar1 + 0x20) = iVar3;
      }
      *(undefined4 *)(param_1 + 0xb54) = 0;
    }
    FUN_088310bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0883133c(param_1);
    }
  }
  return;
}

