/* Entry 0x088EA070 | file offset 0x000E7048 | FUN_088ea070 | bytes 560 */

void FUN_088ea070(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if ((*(char *)(param_1 + 0x1b04) != '\0') && (*(char *)(param_1 + 0x1b06) == '\0')) {
    iVar2 = FUN_088729a0(0);
    pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
    iVar3 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,2,0);
    if ((iVar3 != 0) &&
       (pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14),
       iVar2 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,0x40000,0),
       iVar2 == 0)) {
      if (*(char *)(param_1 + 0x1845) == '\0') {
        if (*(char *)(param_1 + 0x1b05) == '\0') {
          if ((*(char *)(param_1 + 0x1846) == '\0') && (iVar2 = FUN_08873eb4(), iVar2 == 0)) {
            *(undefined1 *)(param_1 + 0x1b05) = 1;
            FUN_088e9544(param_1);
            FUN_08864d98(0,0);
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x1b05) = 0;
          FUN_088e9670(param_1);
          FUN_08864db8();
        }
      }
      else if (*(char *)(param_1 + 0x1846) == '\0') {
        *(undefined1 *)(param_1 + 0x1b06) = 1;
        FUN_088e9908();
      }
    }
    if (*(char *)(param_1 + 0x1b05) != '\0') {
      iVar3 = param_1 + 0x1874;
      bVar1 = false;
      iVar2 = FUN_088d75d4(iVar3);
      if (iVar2 < 2) {
        if (0 < iVar2) {
          iVar2 = FUN_088d75f0(iVar3);
          if ((iVar2 == 0x20) || (iVar2 = FUN_088d75f0(iVar3), iVar2 == 0x3a)) {
            FUN_088a24d4(0,0x2711,1,0);
            *(undefined1 *)(param_1 + 0x1b06) = 1;
            FUN_088e9908();
          }
          else {
            FUN_088a24d4(0,0x2712,1,0);
          }
          bVar1 = true;
        }
      }
      else if (iVar2 < 3) {
        FUN_088a24d4(0,0x2712,1,0);
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)(param_1 + 0x1b05) = 0;
        FUN_088e9670(param_1);
        FUN_08864db8();
      }
    }
  }
  return;
}

