/* Entry 0x08946A5C | file offset 0x00143A34 | FUN_08946a5c | bytes 104 */

undefined4 FUN_08946a5c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0894c244(param_1,*(undefined2 *)
                                  (*(int *)(*(int *)(*(int *)(param_2 + 0x2c) + param_3 * 4) + 4) +
                                   param_4 * 4 + 2),param_5);
  }
  return uVar1;
}

