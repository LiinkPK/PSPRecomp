/* Entry 0x0892F600 | file offset 0x0012C5D8 | FUN_0892f600 | bytes 220 */

void FUN_0892f600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088729a0(0);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = param_5;
  FUN_0892fc64(param_1);
  FUN_0892fcfc(param_1,param_2,param_3);
  FUN_0892ec08(param_1 + 0x3c,**(undefined4 **)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0,param_2,param_3,
               param_4);
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

