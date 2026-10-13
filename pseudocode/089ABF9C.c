/* Entry 0x089ABF9C | file offset 0x001A8F74 | FUN_089abf9c | bytes 52 */

undefined4 FUN_089abf9c(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_09af7198 == (code *)0x0) {
    return 0;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x089abfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_09af7198)();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x089abfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_09af7198)(&UNK_089d2144);
  return uVar1;
}

