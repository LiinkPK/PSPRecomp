/* Entry 0x0886A948 | file offset 0x00067920 | FUN_0886a948 | bytes 104 */

void FUN_0886a948(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x90) = uVar1 & 0xffffffbf;
  if ((uVar1 & 0x20) != 0) {
    *(uint *)(param_1 + 0x90) = uVar1 & 0xffffff9f;
    FUN_089b09e8(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x84);
  }
  return;
}

