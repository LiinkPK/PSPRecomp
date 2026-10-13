/* Entry 0x0882F708 | file offset 0x0002C6E0 | FUN_0882f708 | bytes 24 */

void FUN_0882f708(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

