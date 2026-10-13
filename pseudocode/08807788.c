/* Entry 0x08807788 | file offset 0x00004760 | FUN_08807788 | bytes 216 */

void FUN_08807788(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x70) = &DAT_089c6c40;
    iVar2 = DAT_089d2800;
    if ((DAT_089d2800 != 0) && (DAT_089d2804 != 0)) {
      iVar3 = *(int *)(param_1 + 0x6c);
      if (param_1 == DAT_089d2800) {
        iVar2 = 0;
        DAT_089d2800 = iVar3;
      }
      else {
        iVar1 = *(int *)(DAT_089d2800 + 0x6c);
        if (*(int *)(DAT_089d2800 + 0x6c) == param_1) {
          *(int *)(DAT_089d2800 + 0x6c) = iVar3;
        }
        else {
          do {
            iVar2 = iVar1;
            iVar1 = *(int *)(iVar2 + 0x6c);
          } while (*(int *)(iVar2 + 0x6c) != param_1);
          *(int *)(iVar2 + 0x6c) = iVar3;
        }
      }
      if (param_1 == DAT_089d2804) {
        DAT_089d2804 = iVar2;
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    if ((*(uint *)(param_1 + 0x10) & 0x20) == 0) {
      FUN_0880826c(param_1);
      FUN_0880afa0((int)*(short *)(param_1 + 0x26));
    }
    if ((param_2 & 1) != 0) {
      FUN_08807a1c(param_1);
    }
  }
  return;
}

