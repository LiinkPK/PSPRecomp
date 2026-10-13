/* Entry 0x088BFD3C | file offset 0x000BCD14 | FUN_088bfd3c | bytes 432 */

void FUN_088bfd3c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    DAT_089d73e0 = FUN_088820d8(param_2 + (0x168 - *(int *)(param_1 + 8)) * 8);
    FUN_08935524(DAT_089d73e0,param_1,param_2);
    DAT_089d73e8 = DAT_089d73e0 + 0x10;
  }
  if (param_3 != 0) {
    DAT_089d73e4 = FUN_088820d8(0x5000);
    FUN_08935524(DAT_089d73e4,param_3,param_4);
    DAT_089d73ec = DAT_089d73e4 + 0x10;
    DAT_089d73f0 = DAT_089d73ec + *(short *)(DAT_089d73e4 + 8) * 8;
    DAT_089d73f4 = DAT_089d73f0 + *(short *)(DAT_089d73e4 + 10) * 8;
    iVar2 = 0;
    iVar4 = 0;
    if (0 < *(short *)(DAT_089d73e4 + 8)) {
      do {
        iVar3 = DAT_089d73ec + iVar4;
        if (*(int *)(iVar3 + 4) < 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
          sVar1 = *(short *)(DAT_089d73e4 + 8);
        }
        else {
          *(int *)(iVar3 + 4) = DAT_089d73f0 + *(int *)(iVar3 + 4) * 8;
          sVar1 = *(short *)(DAT_089d73e4 + 8);
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 8;
      } while (iVar2 < sVar1);
    }
    iVar2 = 0;
    iVar4 = 0;
    if (0 < *(short *)(DAT_089d73e4 + 10)) {
      do {
        iVar3 = DAT_089d73f0 + iVar4;
        if (*(int *)(iVar3 + 4) < 0) {
          *(undefined4 *)(iVar3 + 4) = 0;
          sVar1 = *(short *)(DAT_089d73e4 + 10);
        }
        else {
          *(int *)(iVar3 + 4) = DAT_089d73f4 + *(int *)(iVar3 + 4) * 2;
          sVar1 = *(short *)(DAT_089d73e4 + 10);
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 8;
      } while (iVar2 < sVar1);
    }
  }
  return;
}

