/* Entry 0x088B35DC | file offset 0x000B05B4 | FUN_088b35dc | bytes 288 */

void FUN_088b35dc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    DAT_089d72e8 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d72e8,param_1,param_2);
    DAT_089d72ec = DAT_089d72e8 + 0x10;
    iVar1 = 0;
    iVar4 = 0;
    iVar2 = DAT_089d72e8;
    if (0 < *(int *)(DAT_089d72e8 + 8)) {
      do {
        iVar3 = DAT_089d72ec + iVar4;
        if (*(int *)(iVar3 + 0xc) != 0) {
          *(int *)(iVar3 + 0xc) = iVar2 + *(int *)(iVar3 + 0xc);
          iVar2 = DAT_089d72e8;
        }
        if (*(int *)(iVar3 + 0x10) != 0) {
          *(int *)(iVar3 + 0x10) = iVar2 + *(int *)(iVar3 + 0x10);
          iVar2 = DAT_089d72e8;
        }
        if (*(short *)(iVar3 + 2) != 0) {
          *(int *)(iVar3 + 0x14) = iVar2 + *(int *)(iVar3 + 0x14);
          iVar2 = DAT_089d72e8;
        }
        if (*(short *)(iVar3 + 4) != 0) {
          *(int *)(iVar3 + 0x18) = iVar2 + *(int *)(iVar3 + 0x18);
          iVar2 = DAT_089d72e8;
        }
        if (*(int *)(iVar3 + 0x1c) != 0) {
          *(int *)(iVar3 + 0x1c) = iVar2 + *(int *)(iVar3 + 0x1c);
          iVar2 = DAT_089d72e8;
        }
        if (*(int *)(iVar3 + 0x20) != 0) {
          *(int *)(iVar3 + 0x20) = iVar2 + *(int *)(iVar3 + 0x20);
          iVar2 = DAT_089d72e8;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x24;
      } while (iVar1 < *(int *)(iVar2 + 8));
    }
  }
  return;
}

