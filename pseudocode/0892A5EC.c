/* Entry 0x0892A5EC | file offset 0x001275C4 | FUN_0892a5ec | bytes 104 */

void FUN_0892a5ec(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_08935828(param_1 + 2,0,0x1a);
  FUN_08935828(param_1 + 0x10,0,0x28);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 5);
  return;
}

