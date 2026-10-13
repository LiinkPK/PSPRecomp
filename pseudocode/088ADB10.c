/* Entry 0x088ADB10 | file offset 0x000AAAE8 | FUN_088adb10 | bytes 248 */

void FUN_088adb10(int param_1,int param_2)

{
  char *pcVar1;
  
  FUN_088b168c(DAT_089d7280,param_2,0x600);
  *(undefined4 *)(param_2 + 0x38) = 0;
  FUN_08935bb4(param_2 + 0x3c,DAT_089d6010,0xd);
  FUN_088adf68(param_1,param_2 + 0x584,*(undefined4 *)(param_1 + 0xecc),
               *(undefined4 *)(param_1 + 0xec8));
  FUN_088adf68(param_1,param_2 + 0x594,0,0);
  FUN_088adf68(param_1,param_2 + 0x5a4,0,0);
  FUN_088adf68(param_1,param_2 + 0x5b4,0,0);
  FUN_088adf68(param_1,*(undefined4 *)(param_2 + 0x5c4),*(undefined4 *)(param_1 + 0xed4),
               *(undefined4 *)(param_1 + 0xed0));
  pcVar1 = (char *)FUN_0887afbc(*(undefined4 *)(param_1 + 0xee0),7,0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "new data";
  }
  FUN_08935bb4(*(undefined4 *)(*(int *)(param_2 + 0x5c4) + 0x10),pcVar1,0x80);
  *(undefined4 *)(param_2 + 0x5ec) = 0;
  *(undefined4 *)(param_2 + 0x5f0) = 0;
  return;
}

