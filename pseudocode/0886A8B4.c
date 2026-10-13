/* Entry 0x0886A8B4 | file offset 0x0006788C | FUN_0886a8b4 | bytes 84 */

void FUN_0886a8b4(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = uVar1 & 0xffffffbf;
  if ((uVar1 & 0x20) != 0) {
    *(uint *)(param_1 + 0x90) = uVar1 & 0xffffff9f;
    FUN_089b0bac(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
  }
  return;
}

