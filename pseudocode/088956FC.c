/* Entry 0x088956FC | file offset 0x000926D4 | FUN_088956fc | bytes 92 */

void FUN_088956fc(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 8) = &DAT_089ca8b0;
    FUN_08895448(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_088954fc(param_1);
    }
  }
  return;
}

