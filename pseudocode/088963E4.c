/* Entry 0x088963E4 | file offset 0x000933BC | FUN_088963e4 | bytes 152 */

void FUN_088963e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_088a24d4(0,param_2,1,0);
  FUN_088a24d4(0,param_3,1,0);
  FUN_088a24d4(0,param_4,1,0);
  FUN_088a24d4(0,param_5,1,0);
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  return;
}

