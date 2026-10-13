/* Entry 0x089869D4 | file offset 0x001839AC | FUN_089869d4 | bytes 132 */

void FUN_089869d4(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xb3) != '\0') {
    FUN_08986d38(param_1,param_2);
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_08986cc8(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x20));
  }
  else {
    FUN_08986d00(param_1,param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x20));
  }
  return;
}

