/* Entry 0x088D3374 | file offset 0x000D034C | FUN_088d3374 | bytes 220 */

void FUN_088d3374(int *param_1,int param_2,int param_3)

{
  if (*param_1 != 0) {
    if (param_2 < 1) {
      if (-1 < param_2) {
        FUN_0887b9a4();
      }
    }
    else if (param_2 < 2) {
      FUN_0887b9c4();
    }
    else if (param_2 < 3) {
      FUN_0887b9e4();
    }
    if (param_3 < 4) {
      if (2 < param_3) {
        FUN_0887b970(*param_1);
      }
    }
    else if (param_3 < 5) {
      FUN_0887b98c(*param_1);
    }
    else if (param_3 < 6) {
      FUN_0887b958(*param_1);
    }
  }
  return;
}

