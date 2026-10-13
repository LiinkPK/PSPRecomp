/* Entry 0x088D99DC | file offset 0x000D69B4 | FUN_088d99dc | bytes 184 */

void FUN_088d99dc(int param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5)

{
  *(undefined2 *)(param_1 + 0xc) = param_3;
  *(float *)(param_1 + 0x10) = (float)param_4;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(float *)(param_1 + 0x14) = (float)param_5;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x28) = 0x80;
  *(undefined1 *)(param_1 + 0x29) = 0x80;
  *(undefined1 *)(param_1 + 0x2a) = 0x80;
  *(undefined1 *)(param_1 + 0x2b) = 0xff;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  FUN_088d9a94(param_1);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_088dac1c(*(undefined4 *)(param_1 + 0x24),(int)*(short *)(param_1 + 0xc));
  *(undefined2 *)(param_1 + 0x20) = 0x61a;
  FUN_088d9d24(param_1);
  return;
}

