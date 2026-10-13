/* Entry 0x08814A40 | file offset 0x00011A18 | FUN_08814a40 | bytes 200 */

void FUN_08814a40(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x544) = &DAT_089c7030;
    iVar1 = DAT_089d4958;
    iVar3 = *(int *)(DAT_089d4958 + 0x34);
    if ((iVar3 != 0) && (*(int *)(DAT_089d4958 + 0x38) != 0)) {
      iVar4 = *(int *)(param_1 + 0x550);
      if (param_1 == iVar3) {
        *(int *)(DAT_089d4958 + 0x34) = iVar4;
        iVar3 = 0;
        iVar4 = *(int *)(iVar1 + 0x38);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x550);
        if (*(int *)(iVar3 + 0x550) == param_1) {
          *(int *)(iVar3 + 0x550) = iVar4;
        }
        else {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 0x550);
          } while (*(int *)(iVar3 + 0x550) != param_1);
          *(int *)(iVar3 + 0x550) = iVar4;
        }
        iVar4 = *(int *)(iVar1 + 0x38);
      }
      if (param_1 == iVar4) {
        *(int *)(iVar1 + 0x38) = iVar3;
      }
      *(undefined4 *)(param_1 + 0x550) = 0;
    }
    FUN_088310bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0883133c(param_1);
    }
  }
  return;
}

