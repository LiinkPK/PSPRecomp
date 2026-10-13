/* Entry 0x0882F728 | file offset 0x0002C700 | FUN_0882f728 | bytes 76 */

void FUN_0882f728(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    uVar1 = FUN_088298e4(*(int *)(param_1 + 0x90),param_2);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  return;
}

