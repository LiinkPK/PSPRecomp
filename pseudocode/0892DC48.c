/* Entry 0x0892DC48 | file offset 0x0012AC20 | FUN_0892dc48 | bytes 156 */

void FUN_0892dc48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  *(undefined4 *)(param_2 + 0x3c) = param_8;
  *(undefined4 *)(param_2 + 0x44) = param_1;
  *(undefined4 *)(param_2 + 0x40) = 0;
  FUN_0892e044();
  FUN_0892e11c(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_088d4bf4(8);
  *(undefined4 *)(param_2 + 0x28) = 1;
  return;
}

