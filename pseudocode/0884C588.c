/* Entry 0x0884C588 | file offset 0x00049560 | FUN_0884c588 | bytes 96 */

void FUN_0884c588(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088820d8(param_3);
  *(undefined4 *)(param_1 + 0x280c) = uVar1;
  FUN_08935524(uVar1,param_2,param_3);
  *(int *)(param_1 + 0x2810) = *(int *)(param_1 + 0x280c) + 8;
  return;
}

