/* Entry 0x08917D10 | file offset 0x00114CE8 | FUN_08917d10 | bytes 84 */

void FUN_08917d10(int param_1)

{
  FUN_08865158(param_1 + 0x100);
  if (*(int *)(param_1 + 0x134) < 0) {
    FUN_08916dac(2,0xffffffff);
  }
  else {
    FUN_08916dfc(2,*(int *)(param_1 + 0x134));
  }
  return;
}

