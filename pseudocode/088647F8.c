/* Entry 0x088647F8 | file offset 0x000617D0 | FUN_088647f8 | bytes 260 */

undefined4
FUN_088647f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,code *param_5,
            undefined4 param_6,char param_7)

{
  int iVar1;
  
  sceIoSetAsyncCallback(param_2,*(undefined4 *)(param_1 + 4),param_2);
  *(code **)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x20) = 3;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(char *)(param_1 + 0x149) = param_7;
  do {
    FUN_08864b68(param_1,0x84);
    iVar1 = sceIoReadAsync(param_2,param_3,param_4);
    if (iVar1 == 0) {
      return 1;
    }
  } while (param_7 != '\x01');
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_5 != (code *)0x0) {
    (*param_5)(0,param_6);
  }
  return 0;
}

