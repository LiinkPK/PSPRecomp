/* Entry 0x0896D088 | file offset 0x0016A060 | FUN_0896d088 | bytes 72 */

void FUN_0896d088(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_0896cd88(param_2,param_3,
               *(int *)(param_2 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                      *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60);
  return;
}

