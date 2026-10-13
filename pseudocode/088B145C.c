/* Entry 0x088B145C | file offset 0x000AE434 | FUN_088b145c | bytes 372 */

void FUN_088b145c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x591) == '\0') {
    uVar2 = sceUtilityMsgDialogGetStatus();
    if (uVar2 < 5) {
      if (uVar2 == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) {
          FUN_088822b4(param_2);
          if (*(char *)(param_1 + 0x590) == '\0') {
            FUN_088b1764();
            FUN_08872a18();
          }
          *DAT_089d7280 = 0;
          pcVar3 = *(code **)(param_1 + 0x588);
          if (pcVar3 != (code *)0x0) {
            uVar4 = *(undefined4 *)(param_1 + 0x58c);
            *(undefined4 *)(param_1 + 0x588) = 0;
            *(undefined4 *)(param_1 + 0x58c) = 0;
            (*pcVar3)(*(undefined4 *)(param_1 + 0x240),uVar4);
          }
        }
        else if (*(int *)(param_1 + 0x1c) == 2) {
          *(undefined1 *)(param_1 + 0x591) = 1;
        }
        else {
          FUN_088822b4(param_2);
        }
      }
      else if (uVar2 == 2) {
        FUN_089a0190(4,0);
        sceUtilityMsgDialogUpdate(2);
      }
      else if (uVar2 == 3) {
        sceUtilityMsgDialogShutdownStart();
      }
    }
  }
  else if (DAT_089d7280[2] != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x590);
    FUN_088822b4(param_2);
    FUN_088b13e4(param_1);
    *(undefined1 *)(param_1 + 0x590) = uVar1;
  }
  return;
}

