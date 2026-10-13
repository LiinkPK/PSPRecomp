/* Entry 0x08835BDC | file offset 0x00032BB4 | FUN_08835bdc | bytes 28 */

void FUN_08835bdc(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xa0) = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_2[1];
  *(undefined4 *)(param_1 + 0xa8) = param_2[2];
  return;
}

