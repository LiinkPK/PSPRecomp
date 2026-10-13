/* Entry 0x08913D8C | file offset 0x00110D64 | FUN_08913d8c | bytes 132 */

void FUN_08913d8c(int param_1)

{
  int iVar1;
  
  func_0x08b43a3c(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x6d0));
  iVar1 = FUN_08873eb4();
  if (iVar1 == 0) {
    *DAT_089d69e0 = 0;
    FUN_08916854(param_1);
    if (*(char *)(param_1 + 0x7e4) == '\0') {
      FUN_08914b64(param_1,2);
    }
    else {
      FUN_08914f38(param_1);
      *(undefined1 *)(param_1 + 0x7e4) = 0;
    }
  }
  return;
}

