/* Entry 0x088A4C4C | file offset 0x000A1C24 | FUN_088a4c4c | bytes 184 */

void FUN_088a4c4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_089d6d58;
  iVar2 = param_1;
  if (param_1 == 0) {
    iVar3 = FUN_088820d8(0x1510);
    iVar1 = 0;
    DAT_089d6d5c = iVar3;
    iVar2 = DAT_089d6d60;
    if (iVar3 != 0) {
      FUN_08993560(iVar3,0x40,0x50,FUN_088a43b0);
      iVar4 = 0;
      *(undefined4 *)(iVar3 + 0x1500) = 0;
      do {
        *(int *)(iVar3 + iVar4 * 4 + 0x1400) = iVar3 + (0x3f - iVar4) * 0x50;
        iVar4 = *(int *)(iVar3 + 0x1500) + 1;
        *(int *)(iVar3 + 0x1500) = iVar4;
        iVar1 = iVar3;
        iVar2 = DAT_089d6d60;
      } while (iVar4 < 0x40);
    }
  }
  DAT_089d6d60 = iVar2;
  DAT_089d6d58 = iVar1;
  return;
}

