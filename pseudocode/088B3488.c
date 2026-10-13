/* Entry 0x088B3488 | file offset 0x000B0460 | FUN_088b3488 | bytes 156 */

void FUN_088b3488(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    DAT_089d72e0 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d72e0,param_1,param_2);
    piVar2 = (int *)(DAT_089d72e0 + 0x10);
    iVar1 = 0;
    iVar3 = 0;
    DAT_089d72e4 = piVar2;
    if (0 < *(int *)(DAT_089d72e0 + 8)) {
      do {
        *(int *)((int)DAT_089d72e4 + iVar3) = DAT_089d72e0 + *piVar2;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *(int *)(DAT_089d72e0 + 8));
    }
  }
  return;
}

