/* Entry 0x088EC6BC | file offset 0x000E9694 | FUN_088ec6bc | bytes 44 */

void FUN_088ec6bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  FUN_088d9f5c(*(undefined4 *)(param_1 + 4),2,1);
  return;
}

