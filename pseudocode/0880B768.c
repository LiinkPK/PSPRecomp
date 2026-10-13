/* Entry 0x0880B768 | file offset 0x00008740 | FUN_0880b768 | bytes 152 */

int FUN_0880b768(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  FUN_08807860();
  *(undefined **)(param_2 + 0x70) = &DAT_089c6ce0;
  uVar1 = FUN_0880be84(param_5);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  FUN_089a3868(param_2 + 0x80,param_6);
  *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
  *(undefined2 *)(param_2 + 0x2c) = 3;
  *(undefined4 *)(param_2 + 0xa0) = param_1;
  return param_2;
}

