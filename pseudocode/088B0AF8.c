/* Entry 0x088B0AF8 | file offset 0x000ADAD0 | FUN_088b0af8 | bytes 176 */

void FUN_088b0af8(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2b84) = 1;
  *(undefined4 *)(param_1 + 0x2b88) = 0xbea0;
  *(char **)(param_1 + 0x2b8c) = "REPLAY.BIN";
  *(char **)(param_1 + 0x2b90) = "Replay";
  *(undefined **)(param_1 + 0x2b94) = &DAT_089cb708;
  *(char **)(param_1 + 0x2b98) = "save/JP/ICON1.PNG";
  *(char **)(param_1 + 0x2b9c) = "save/JP/ICON1_NEW.PNG";
  *(code **)(param_1 + 0x2ba0) = FUN_088b0cac;
  iVar1 = param_1 + 0x2ba8;
  FUN_08935828(iVar1,0,0xbea0);
  FUN_088b04ac(DAT_089d7260,param_1,iVar1,iVar1,param_1);
  return;
}

