/* Entry 0x08986C38 | file offset 0x00183C10 | FUN_08986c38 | bytes 144 */

void FUN_08986c38(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) / 2;
  FUN_08986d00(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x44),iVar1
              );
  FUN_08986d00(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x40),iVar1
              );
  FUN_08986d00(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x48),iVar1
              );
  return;
}

