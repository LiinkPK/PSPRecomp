/* Entry 0x08986BC4 | file offset 0x00183B9C | FUN_08986bc4 | bytes 116 */

void FUN_08986bc4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x20) / 3) * 2;
  FUN_08986d00(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x44),iVar1
              );
  FUN_08986d00(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x48),iVar1
              );
  return;
}

