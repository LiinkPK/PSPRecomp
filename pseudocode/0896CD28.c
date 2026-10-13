/* Entry 0x0896CD28 | file offset 0x00169D00 | FUN_0896cd28 | bytes 96 */

void FUN_0896cd28(undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((*(ushort *)(*(int *)(param_2 + 0x8c) + 2) & 2) == 0) {
    FUN_0896cd88(param_2,param_3,
                 *(int *)(param_2 + 0x8c) +
                 (uint)*(ushort *)
                        (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                        *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60);
  }
  return;
}

