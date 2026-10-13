/* Entry 0x088B6C1C | file offset 0x000B3BF4 | FUN_088b6c1c | bytes 112 */

void FUN_088b6c1c(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    DAT_089d7350 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d7350,param_1,param_2);
    DAT_089d7354 = DAT_089d7350 + 0x10;
    DAT_089d7358 = DAT_089d7354 + *(int *)(DAT_089d7350 + 8) * 8;
  }
  return;
}

