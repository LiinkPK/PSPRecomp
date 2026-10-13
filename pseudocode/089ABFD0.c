/* Entry 0x089ABFD0 | file offset 0x001A8FA8 | FUN_089abfd0 | bytes 48 */

void FUN_089abfd0(int param_1)

{
  if (DAT_09af7190 == (code *)0x0) {
    return;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x089abfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_09af7190)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x089abff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_09af7190)(&UNK_089d2144);
  return;
}

