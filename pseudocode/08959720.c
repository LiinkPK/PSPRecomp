/* Entry 0x08959720 | file offset 0x001566F8 | FUN_08959720 | bytes 80 */

void FUN_08959720(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  FUN_0895b98c(*param_4,param_2,param_3,
               *(undefined4 *)
                (*(int *)(param_2 + 0x8c) +
                 (uint)*(ushort *)
                        (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                        (*(int *)(*(int *)(param_2 + 0x90) + 4) + 2) * 2) + 0x60));
  return;
}

