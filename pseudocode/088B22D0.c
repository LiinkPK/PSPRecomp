/* Entry 0x088B22D0 | file offset 0x000AF2A8 | FUN_088b22d0 | bytes 248 */

void FUN_088b22d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    DAT_089d72a8 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d72a8,param_1,param_2);
    DAT_089d72ac = DAT_089d72a8 + 0x10;
    DAT_089d72b0 = DAT_089d72a8 + 0x38;
    DAT_089d72b4 = DAT_089d72b0 + *(int *)(DAT_089d72a8 + 8) * 8;
    iVar1 = 0;
    iVar2 = 0;
    if (0 < *(int *)(DAT_089d72a8 + 8)) {
      do {
        iVar1 = iVar1 + 1;
        *(int *)(DAT_089d72b0 + iVar2 + 4) = DAT_089d72a8 + *(int *)(DAT_089d72b0 + iVar2 + 4);
        iVar2 = iVar2 + 8;
      } while (iVar1 < *(int *)(DAT_089d72a8 + 8));
    }
    iVar2 = 0;
    iVar1 = 0;
    if (0 < *(int *)(DAT_089d72a8 + 0xc)) {
      do {
        iVar2 = iVar2 + 1;
        *(int *)(DAT_089d72b4 + iVar1 + 0x14) = DAT_089d72a8 + *(int *)(DAT_089d72b4 + iVar1 + 0x14)
        ;
        iVar1 = iVar1 + 0x18;
      } while (iVar2 < *(int *)(DAT_089d72a8 + 0xc));
    }
  }
  return;
}

