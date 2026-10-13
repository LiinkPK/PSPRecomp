/* Entry 0x08864A3C | file offset 0x00061A14 | FUN_08864a3c | bytes 200 */

void FUN_08864a3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  sceIoSetAsyncCallback(param_2,*(undefined4 *)(param_1 + 0xc),param_2);
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x20) = 2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  do {
    FUN_08864b68(param_1,0x87);
    iVar1 = sceIoLseekAsync(param_2);
  } while (iVar1 != 0);
  return;
}

