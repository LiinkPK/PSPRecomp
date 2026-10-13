/* Entry 0x08918BD4 | file offset 0x00115BAC | FUN_08918bd4 | bytes 700 */

void FUN_08918bd4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  
  if ((((*(char *)(param_1 + 0x7da) == '\0') && (*(int *)(param_1 + 0x68) != 5)) &&
      (*(char *)(param_1 + 0x7d7) != '\0')) && (*(char *)(param_1 + 0x7e1) == '\0')) {
    if (*(char *)(param_1 + 0x7e2) == '\0') {
      if (*(char *)(param_1 + 0x7e3) == '\0') {
        bVar1 = false;
        iVar5 = 0;
        iVar2 = FUN_088729a0(0);
        pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
        iVar3 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,2,0);
        if ((iVar3 == 0) ||
           (pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14),
           iVar2 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,0x40000,0),
           iVar2 != 0)) {
          if (*(char *)(param_1 + 0x7d8) != '\0') {
            iVar2 = FUN_088729a0(0);
            pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
            iVar2 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,8,0);
            if (iVar2 == 0) {
              iVar2 = FUN_088729a0(0);
              pcVar4 = *(code **)(*(int *)(iVar2 + 0x34) + 0x14);
              iVar2 = (*pcVar4)(iVar2 + *(short *)(*(int *)(iVar2 + 0x34) + 0x10),pcVar4,4,0);
              if (iVar2 != 0) {
                bVar1 = true;
                iVar2 = FUN_088d75f0(param_1 + 0xa0);
                if (iVar2 == 0x2d) {
                  iVar5 = 1;
                }
                else {
                  iVar5 = 0;
                }
              }
            }
            else {
              bVar1 = true;
              iVar5 = 1;
            }
          }
        }
        else if (*(char *)(param_1 + 0x7d8) == '\0') {
          iVar2 = FUN_08873eb4();
          if ((iVar2 == 0) && (iVar2 = FUN_08916c34(param_1), iVar2 != 0)) {
            *(undefined1 *)(param_1 + 0x7d8) = 1;
            *(undefined4 *)(param_1 + 0x56c) = 0xffffffff;
            FUN_0891386c(param_1);
          }
          else if (*(int *)(param_1 + 0x68) == 2) {
            FUN_088d4bf4(4);
          }
        }
        else {
          bVar1 = true;
          iVar5 = 1;
        }
        if (bVar1) {
          if (iVar5 == 0) {
            FUN_088a24d4(0,0x2711,1,0);
          }
          else {
            FUN_088a24d4(0,0x2712,1,0);
          }
          *(undefined1 *)(param_1 + 0x7d8) = 0;
          FUN_08913a0c(param_1,iVar5);
        }
      }
      else {
        FUN_089165f0(param_1);
      }
    }
    else {
      FUN_08916524(param_1);
    }
  }
  return;
}

