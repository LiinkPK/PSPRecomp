/* Entry 0x08889CDC | file offset 0x00086CB4 | FUN_08889cdc | bytes 360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08889cdc(int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 < 5) {
    if (uVar1 == 1) {
      FUN_0888b6dc();
      if (*(int *)(param_1 + 0x748) != 0) {
        if (*(char *)(param_1 + 0x751) != '\0') {
          FUN_08933c00(DAT_089d85e8);
        }
        (**(code **)(param_1 + 0x748))();
      }
    }
    else if (uVar1 == 2) {
      FUN_0888b6dc();
      pcVar2 = *(code **)(param_1 + 0x74c);
      if (pcVar2 != (code *)0x0) {
        if (*(char *)(param_1 + 0x752) != '\0') {
          FUN_08933c00(DAT_089d85e8);
          pcVar2 = *(code **)(param_1 + 0x74c);
        }
        (*pcVar2)();
      }
    }
    else if ((uVar1 == 3) || (uVar1 == 4)) {
      pcVar2 = *(code **)(param_1 + 0x74c);
      if (pcVar2 != (code *)0x0) {
        if (*(char *)(param_1 + 0x752) != '\0') {
          FUN_08933c00(DAT_089d85e8);
          pcVar2 = *(code **)(param_1 + 0x74c);
        }
        (*pcVar2)();
      }
    }
    else {
      FUN_0888b6dc();
      if (*(int *)(param_1 + 0x744) != 0) {
        if (*(char *)(param_1 + 0x750) != '\0') {
          FUN_08933c00(DAT_089d85e8);
        }
        (**(code **)(param_1 + 0x744))();
      }
    }
  }
  else {
    FUN_08933c00(DAT_089d85e8);
    func_0x089e0bdc(_DAT_089e75c4,0);
  }
  return;
}

