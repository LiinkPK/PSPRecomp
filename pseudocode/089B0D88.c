/* Entry 0x089B0D88 | file offset 0x001ADD60 | FUN_089b0d88 | bytes 36 */

void FUN_089b0d88(int param_1,uint param_2,uint param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & ~param_2 | param_2 & param_3;
  }
  return;
}

