/* Entry 0x088648FC | file offset 0x000618D4 | FUN_088648fc | bytes 180 */

undefined4 FUN_088648fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  sceIoSetAsyncCallback(param_2,*(undefined4 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x20) = 4;
  do {
    FUN_08864b68(param_1,0x85);
    iVar1 = sceIoIoctlAsync(param_2,0x1020007,0,0,param_1 + 0x40,8);
  } while (iVar1 != 0);
  return 1;
}

