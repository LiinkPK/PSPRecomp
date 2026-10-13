/* Entry 0x089A296C | file offset 0x0019F944 | FUN_089a296c | bytes 88 */

void FUN_089a296c(int param_1)

{
  (&DAT_09af7140)[DAT_09af7130 * 3] = DAT_09af7134;
  if ((&DAT_09af7140)[param_1 * 3] != 0) {
    DAT_09af7130 = param_1;
    DAT_09af7134 = (&DAT_09af7140)[param_1 * 3];
  }
  return;
}

