/* Entry 0x08879DB0 | file offset 0x00076D88 | FUN_08879db0 | bytes 176 */

void FUN_08879db0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_0899372c(param_1 + 0x6c0,6,0x14,FUN_08920594,0,0);
    FUN_0899372c(param_1 + 0x240,0x20,0x24,FUN_08922898,0,0);
    FUN_0899372c(param_1 + 0x10,0x46,8,FUN_08924f68,0,0);
    FUN_089209fc(param_1,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

