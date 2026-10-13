/* Entry 0x08814678 | file offset 0x00011650 | FUN_08814678 | bytes 140 */

int FUN_08814678(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  FUN_088a985c();
  *(undefined **)(param_1 + 0x2c) = &DAT_089c6fe8;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  FUN_08935828(param_1 + 0x34,0,0x14);
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

