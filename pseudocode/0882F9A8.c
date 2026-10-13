/* Entry 0x0882F9A8 | file offset 0x0002C980 | FUN_0882f9a8 | bytes 104 */

void FUN_0882f9a8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_0882fbf0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0xffff;
    FUN_0882ef10(0,0,param_1,param_2);
  }
  return;
}

