/* Entry 0x0896DE4C | file offset 0x0016AE24 | FUN_0896de4c | bytes 96 */

void FUN_0896de4c(undefined4 param_1,int param_2,undefined4 param_3)

{
  if ((*(ushort *)(*(int *)(param_2 + 0x8c) + 2) & 2) == 0) {
    FUN_0896deac(param_2,param_3,
                 *(int *)(param_2 + 0x8c) +
                 (uint)*(ushort *)
                        (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                        *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60);
  }
  return;
}

