/* Entry 0x089B0DAC | file offset 0x001ADD84 | FUN_089b0dac | bytes 36 */

void FUN_089b0dac(int param_1,uint param_2,uint param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & ~param_2 | param_2 & param_3;
  }
  return;
}

