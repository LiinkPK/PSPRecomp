/* Entry 0x088EA368 | file offset 0x000E7340 | FUN_088ea368 | bytes 100 */

void FUN_088ea368(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x51) != '\0') {
    iVar1 = FUN_088ed2c0();
    if (iVar1 == 0) {
      FUN_088ed168(0);
      FUN_088eeb10();
    }
    FUN_088ed0f4();
    FUN_088ecf10();
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_1 + 0x51) = 0;
    *param_1 = 0;
  }
  return;
}

