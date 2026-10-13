/* Entry 0x0887DAC0 | file offset 0x0007AA98 | FUN_0887dac0 | bytes 92 */

void FUN_0887dac0(int param_1,undefined4 *param_2)

{
  if ((param_2[4] & 0x2000) == 0) {
    FUN_0887a534(*param_2);
  }
  else {
    FUN_0887d68c(*(undefined4 *)(param_1 + 0xf2c0),*param_2);
  }
  return;
}

