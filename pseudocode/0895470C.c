/* Entry 0x0895470C | file offset 0x001516E4 | FUN_0895470c | bytes 112 */

undefined4 FUN_0895470c(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_10;
  
  if (*(short *)(param_2 + 2) < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_08973e20(*(undefined4 *)(param_1 + 0xa8),
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x88) + 0x1c8) + 0x3c) +
                                   *(short *)(param_2 + 2) * 4) + 0x10),(int)*(short *)(param_2 + 4)
                         ,&local_10);
  }
  if (iVar1 == 0) {
    local_10 = 0xffffffff;
  }
  return local_10;
}

