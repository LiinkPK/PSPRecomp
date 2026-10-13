/* Entry 0x088A6A38 | file offset 0x000A3A10 | FUN_088a6a38 | bytes 64 */

void FUN_088a6a38(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  *(int *)(param_2 + 0xf0) = param_3;
  *(uint *)(param_2 + 0xdc) = *(uint *)(param_2 + 0xdc) | 1;
  *(undefined4 *)(param_2 + 0xf4) = param_5;
  *(undefined4 *)(param_2 + 0xf8) = param_6;
  *(undefined4 *)(param_2 + 0xfc) = param_1;
  if (param_3 == 4) {
    *(undefined **)(param_2 + 0xd0) = &DAT_09b4d440;
  }
  else {
    *(undefined4 *)(param_2 + 0xd0) = param_4;
  }
  return;
}

