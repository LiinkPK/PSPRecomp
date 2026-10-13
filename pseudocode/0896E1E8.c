/* Entry 0x0896E1E8 | file offset 0x0016B1C0 | FUN_0896e1e8 | bytes 76 */

undefined4 FUN_0896e1e8(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_0896deac(param_2,param_3,
               *(int *)(param_2 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                      *(int *)(*(int *)(param_2 + 0x90) + 4) * 2) + 0x60);
  return 1;
}

