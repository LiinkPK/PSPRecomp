/* Entry 0x088279F0 | file offset 0x000249C8 | FUN_088279f0 | bytes 208 */

void FUN_088279f0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x544) = &DAT_089c76a8;
    FUN_08827704(param_1);
    iVar1 = DAT_089d4958;
    iVar3 = *(int *)(DAT_089d4958 + 0x2c);
    if ((iVar3 != 0) && (*(int *)(DAT_089d4958 + 0x30) != 0)) {
      iVar4 = *(int *)(param_1 + 0x59c);
      if (param_1 == iVar3) {
        *(int *)(DAT_089d4958 + 0x2c) = iVar4;
        iVar3 = 0;
        iVar4 = *(int *)(iVar1 + 0x30);
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x59c);
        if (*(int *)(iVar3 + 0x59c) == param_1) {
          *(int *)(iVar3 + 0x59c) = iVar4;
        }
        else {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 0x59c);
          } while (*(int *)(iVar3 + 0x59c) != param_1);
          *(int *)(iVar3 + 0x59c) = iVar4;
        }
        iVar4 = *(int *)(iVar1 + 0x30);
      }
      if (param_1 == iVar4) {
        *(int *)(iVar1 + 0x30) = iVar3;
      }
      *(undefined4 *)(param_1 + 0x59c) = 0;
    }
    FUN_088310bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0883133c(param_1);
    }
  }
  return;
}

