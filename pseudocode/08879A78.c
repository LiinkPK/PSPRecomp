/* Entry 0x08879A78 | file offset 0x00076A50 | FUN_08879a78 | bytes 176 */

void FUN_08879a78(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_1 + 0x184 != 0) {
      FUN_0899372c(param_1 + 0x1a0,3,4,FUN_088d31d0,0,0);
      FUN_0899372c(param_1 + 0x184,7,4,FUN_088d2e7c,0,0);
    }
    if (param_1 != -0x148) {
      FUN_0887b1f4(param_1 + 0x17c,2);
    }
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

