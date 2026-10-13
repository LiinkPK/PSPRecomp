/* Entry 0x089A6438 | file offset 0x001A3410 | FUN_089a6438 | bytes 32 */

undefined4 FUN_089a6438(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80650204;
  if (param_2 < 2) {
    *(char *)(param_1 + 0x21d) = (char)param_2;
    uVar1 = 0;
  }
  return uVar1;
}

