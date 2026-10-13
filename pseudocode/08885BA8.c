/* Entry 0x08885BA8 | file offset 0x00082B80 | FUN_08885ba8 | bytes 92 */

void FUN_08885ba8(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0887a644(param_1 + 0x10,2);
    FUN_0887a644(param_1,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

