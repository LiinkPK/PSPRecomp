/* Entry 0x08986A58 | file offset 0x00183A30 | FUN_08986a58 | bytes 168 */

void FUN_08986a58(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xb3) != '\0') {
    FUN_08986d38(param_1,param_2);
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    iVar1 = (*(int *)(param_1 + 0x20) / 3) * 2;
    FUN_08986cc8(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x44),
                 iVar1);
    FUN_08986cc8(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x48),
                 iVar1);
  }
  else {
    FUN_08986bc4(param_1,param_2);
  }
  return;
}

