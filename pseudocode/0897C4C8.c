/* Entry 0x0897C4C8 | file offset 0x001794A0 | FUN_0897c4c8 | bytes 92 */

void FUN_0897c4c8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_089a05f0(4,0x19f,6,3,0,*(undefined4 *)(param_1 + iVar1 * 4));
  *(int *)(param_1 + 8) = 1 - iVar1;
  return;
}

