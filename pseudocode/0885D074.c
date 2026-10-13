/* Entry 0x0885D074 | file offset 0x0005A04C | FUN_0885d074 | bytes 36 */

uint FUN_0885d074(undefined4 param_1,uint param_2)

{
  if ((param_2 & 7) != 0) {
    param_2 = (param_2 - (param_2 & 7)) + 8;
  }
  return param_2;
}

