/* Entry 0x088DFD94 | file offset 0x000DCD6C | FUN_088dfd94 | bytes 196 */

void FUN_088dfd94(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x17c4) = &DAT_089cc358;
    FUN_088ea2dc(param_1 + 0x135c,2);
    FUN_088eaa24(param_1 + 0x12d8,2);
    FUN_088e66b4(param_1 + 0x12b0,2);
    FUN_088ea760(param_1 + 0x128c,2);
    if (param_1 + 0x1270 != 0) {
      FUN_08869908(param_1 + 0x1270,2);
    }
    FUN_088e81fc(param_1 + 0x1220,2);
    FUN_088e6e18(param_1 + 0xe00,2);
    FUN_088e5b04(param_1 + 0xd7c,2);
    FUN_088e2ac8(param_1 + 0x5bc,2);
    if ((param_2 & 1) != 0) {
      FUN_08992f04(param_1);
    }
  }
  return;
}

