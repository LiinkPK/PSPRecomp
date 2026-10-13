/* Entry 0x0895A760 | file offset 0x00157738 | FUN_0895a760 | bytes 80 */

void FUN_0895a760(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_0895c200(*param_4,param_2,param_3,
               *(undefined4 *)
                (*(int *)(param_2 + 0x8c) +
                 (uint)*(ushort *)
                        (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                        (*(int *)(*(int *)(param_2 + 0x90) + 4) + 3) * 2) + 0x60));
  return;
}

