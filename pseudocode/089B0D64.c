/* Entry 0x089B0D64 | file offset 0x001ADD3C | FUN_089b0d64 | bytes 36 */

void FUN_089b0d64(int param_1,uint param_2,uint param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & ~param_2 | param_2 & param_3;
  }
  return;
}

