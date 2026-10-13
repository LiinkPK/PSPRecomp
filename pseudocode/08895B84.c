/* Entry 0x08895B84 | file offset 0x00092B5C | FUN_08895b84 | bytes 88 */

void FUN_08895b84(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    FUN_088a9b18(param_1[2]);
    FUN_088a5604(DAT_089d6d78,param_1[2]);
    param_1[2] = 0;
    FUN_088a522c(*param_1);
  }
  return;
}

