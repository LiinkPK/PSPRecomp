/* Entry 0x089B0D40 | file offset 0x001ADD18 | FUN_089b0d40 | bytes 36 */

void FUN_089b0d40(int param_1,uint param_2,uint param_3)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & ~param_2 | param_2 & param_3;
  }
  return;
}

