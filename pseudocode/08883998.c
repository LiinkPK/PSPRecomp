/* Entry 0x08883998 | file offset 0x00080970 | FUN_08883998 | bytes 96 */

undefined4 FUN_08883998(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x90000) == 0) {
    if ((param_2 & 0x40000) != 0) {
      DAT_089d69df = 0;
    }
  }
  else {
    FUN_0888337c(1);
    DAT_089d69df = 1;
  }
  return 0;
}

