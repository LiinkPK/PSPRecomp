/* Entry 0x088B6E60 | file offset 0x000B3E38 | FUN_088b6e60 | bytes 160 */

void FUN_088b6e60(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    DAT_089d7360 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d7360,param_1,param_2);
    DAT_089d7364 = DAT_089d7360 + 0x10;
    iVar1 = 0;
    iVar4 = 0;
    iVar2 = DAT_089d7360;
    if (0 < *(int *)(DAT_089d7360 + 8)) {
      do {
        iVar3 = *(int *)(DAT_089d7364 + iVar4 + 8);
        if (iVar3 != 0) {
          *(int *)(DAT_089d7364 + iVar4 + 8) = iVar2 + iVar3;
          iVar2 = DAT_089d7360;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar1 < *(int *)(iVar2 + 8));
    }
  }
  return;
}

