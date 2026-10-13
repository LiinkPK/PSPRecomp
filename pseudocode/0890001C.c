/* Entry 0x0890001C | file offset 0x000FCFF4 | FUN_0890001c | bytes 128 */

undefined4 FUN_0890001c(undefined1 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_089d8128 != 0) {
    if (*(char *)(DAT_089d7280 + 3) == '\0') {
      uVar1 = FUN_088ff1ac(param_1);
      FUN_089a62c0(DAT_089d8128 + 0x83e80);
    }
    FUN_088ffa60();
    DAT_089d8128 = 0;
    FUN_08882ec8();
  }
  return uVar1;
}

