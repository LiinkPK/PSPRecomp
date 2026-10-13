/* Entry 0x088A0508 | file offset 0x0009D4E0 | FUN_088a0508 | bytes 168 */

undefined4 FUN_088a0508(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x10000) == 0) {
    if (((param_2 & 0x40000) != 0) && (DAT_089d6c50 == 7)) {
      DAT_089d6c50 = 6;
    }
  }
  else if (((DAT_089d6c50 == 4) && (DAT_089d6c4c == '\0')) &&
          (FUN_0889ff8c(0), DAT_09b4cf78 == '\0')) {
    DAT_089d6c50 = 7;
    DAT_089d6c60 = 2;
  }
  return 0;
}

