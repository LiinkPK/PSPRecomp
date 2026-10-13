/* Entry 0x089A2A40 | file offset 0x0019FA18 | FUN_089a2a40 | bytes 88 */

void FUN_089a2a40(void)

{
  if (DAT_09af7134 != (&DAT_09af7138)[DAT_09af7130 * 3]) {
    DAT_09af7134 = DAT_09af7134 + -0x40;
    (&DAT_09af7168)[DAT_09af7130] = 1;
  }
  return;
}

