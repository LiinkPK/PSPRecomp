/* Entry 0x0891C2EC | file offset 0x001192C4 | FUN_0891c2ec | bytes 68 */

bool FUN_0891c2ec(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != -1) {
    *(int **)(param_1 + 0x2a24) = param_2;
    *(undefined4 *)(param_1 + 0x2a28) = param_3;
    FUN_0891c790();
  }
  return iVar1 != -1;
}

