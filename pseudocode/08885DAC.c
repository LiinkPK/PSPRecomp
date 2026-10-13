/* Entry 0x08885DAC | file offset 0x00082D84 | FUN_08885dac | bytes 128 */

void FUN_08885dac(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      FUN_088da060();
      param_1[1] = 0;
    }
    if (*param_1 != 0) {
      FUN_088dab44();
      *param_1 = 0;
    }
    FUN_08885b14(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_08885b5c(param_1);
    }
  }
  return;
}

