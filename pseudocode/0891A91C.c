/* Entry 0x0891A91C | file offset 0x001178F4 | FUN_0891a91c | bytes 84 */

void FUN_0891a91c(int param_1,int param_2,undefined2 param_3,undefined1 param_4,undefined1 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  param_1 = param_1 + param_2 * 0x2e8;
  *(undefined2 *)(param_1 + 4) = 2;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x14) = param_3;
  *(undefined1 *)(param_1 + 0x16) = param_4;
  *(undefined1 *)(param_1 + 0x17) = param_5;
  *(undefined4 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  return;
}

