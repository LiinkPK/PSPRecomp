/* Entry 0x088C55AC | file offset 0x000C2584 | FUN_088c55ac | bytes 112 */

void FUN_088c55ac(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    DAT_089d76e8 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d76e8,param_1,param_2);
    DAT_089d76ec = DAT_089d76e8 + 0x10;
    DAT_089d76f0 = DAT_089d76ec + *(int *)(DAT_089d76e8 + 8) * 0x10;
  }
  return;
}

