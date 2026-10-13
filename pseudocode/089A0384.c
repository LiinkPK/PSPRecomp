/* Entry 0x089A0384 | file offset 0x0019D35C | FUN_089a0384 | bytes 88 */

void FUN_089a0384(uint param_1)

{
  FUN_089a12fc(DAT_09af6830,param_1,1);
  DAT_09af682c = DAT_09af682c | 1 << (param_1 & 0x1f);
  return;
}

