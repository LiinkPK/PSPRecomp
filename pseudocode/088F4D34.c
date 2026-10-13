/* Entry 0x088F4D34 | file offset 0x000F1D0C | FUN_088f4d34 | bytes 60 */

void FUN_088f4d34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088f4ac8(param_2,param_3,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

