/* Entry 0x089AC000 | file offset 0x001A8FD8 | FUN_089ac000 | bytes 288 */

undefined2 * FUN_089ac000(undefined2 *param_1)

{
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = 1;
    param_1[0x15] = 0xffff;
    *(undefined4 *)(param_1 + 0x18) = 0xff;
    *(undefined4 *)(param_1 + 0x16) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x20) = 0x10001;
    *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0x40000ff;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2a) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    FUN_089ba05c(0,0,0,0x3f800000,param_1 + 0x38);
    FUN_089ba0dc(0,0,0x3f800000,0x3f800000,param_1 + 0x40);
    FUN_089ba074(0,0,0,0x3f800000,0x3f800000,0x3f800000,param_1 + 0x48);
  }
  return param_1;
}

