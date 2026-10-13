/* Entry 0x089A0438 | file offset 0x0019D410 | FUN_089a0438 | bytes 140 */

void FUN_089a0438(uint param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_089a12fc(DAT_09af6830,param_1,0);
    DAT_09af682c = DAT_09af682c & ~(1 << (param_1 & 0x1f));
  }
  else {
    FUN_089a12fc(DAT_09af6830,param_1,1);
    DAT_09af682c = DAT_09af682c | 1 << (param_1 & 0x1f);
  }
  return;
}

