/* Entry 0x08813180 | file offset 0x00010158 | FUN_08813180 | bytes 60 */

void FUN_08813180(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_089d48b0 + DAT_089d48c0;
  DAT_089d48c0 = DAT_089d48c0 + 1;
  *piVar1 = (int)(param_1 + -0x89d47b0 + ((uint)(param_1 + -0x89d47b0 >> 6) >> 0x1a)) >> 6;
  return;
}

