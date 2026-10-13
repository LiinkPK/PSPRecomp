/* Entry 0x088E9008 | file offset 0x000E5FE0 | FUN_088e9008 | bytes 308 */

void FUN_088e9008(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_088dfc78();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_08864db8();
  uVar1 = FUN_08899300();
  FUN_08898f5c(uVar1);
  FUN_08893910(DAT_089d6ac8);
  FUN_088a952c(DAT_089d6dc8);
  FUN_088a5e6c(DAT_089d6d80);
  func_0x08ad091c();
  FUN_088958fc(DAT_089d6ad0);
  FUN_08841ed8();
  FUN_088711e4();
  if (*(char *)(param_1 + 0x1b04) != '\0') {
    FUN_088e9500(param_1);
    *(undefined1 *)(param_1 + 0x1b04) = 0;
  }
  FUN_088dfbf8(DAT_089d7e78);
  FUN_08933c00(DAT_089d85e8);
  if (*(char *)(param_1 + 0x1b06) != '\0') {
    *(undefined1 *)(param_1 + 0x1b06) = 0;
    if (*(code **)(param_1 + 0x1870) != (code *)0x0) {
      (**(code **)(param_1 + 0x1870))();
      *(undefined4 *)(param_1 + 0x1870) = 0;
      return;
    }
  }
  if (*(code **)(param_1 + 0x1868) == (code *)0x0) {
    if (*(code **)(param_1 + 0x186c) == (code *)0x0) {
      FUN_088e9b44();
    }
    else {
      (**(code **)(param_1 + 0x186c))();
    }
  }
  else {
    (**(code **)(param_1 + 0x1868))();
  }
  return;
}

