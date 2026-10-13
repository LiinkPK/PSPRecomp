/* Entry 0x0889F830 | file offset 0x0009C808 | FUN_0889f830 | bytes 104 */

void FUN_0889f830(int *param_1,int param_2)

{
  if (*param_1 != -1) {
    if (param_2 == 0) {
      FUN_088a1438(DAT_089d6c88);
      param_1[5] = 0;
    }
    else {
      FUN_0889f8d4(0,param_1,param_2);
      param_1[5] = 2;
    }
  }
  return;
}

