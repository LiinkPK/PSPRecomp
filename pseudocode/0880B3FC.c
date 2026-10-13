/* Entry 0x0880B3FC | file offset 0x000083D4 | FUN_0880b3fc | bytes 152 */

void FUN_0880b3fc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_089a3868(param_2 + 0x80,param_2 + 0x90);
  FUN_089a3868(param_2 + 0x90,param_3);
  *(undefined4 *)(param_2 + 0x9c) = 0x3f800000;
  FUN_089a3868(param_2 + 0xa0,param_4);
  *(undefined4 *)(param_2 + 0xb0) = param_1;
  *(undefined4 *)(param_2 + 0xac) = 0;
  *(undefined4 *)(param_2 + 0xb4) = param_1;
  *(undefined4 *)(param_2 + 0xb8) = 3;
  return;
}

