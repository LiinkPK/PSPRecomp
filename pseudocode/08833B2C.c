/* Entry 0x08833B2C | file offset 0x00030B04 | FUN_08833b2c | bytes 84 */

undefined4 FUN_08833b2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3ac) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0883e108(*(int *)(param_1 + 0x3ac),param_2,param_3,param_4);
  }
  return uVar1;
}

