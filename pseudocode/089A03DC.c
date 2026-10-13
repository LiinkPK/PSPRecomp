/* Entry 0x089A03DC | file offset 0x0019D3B4 | FUN_089a03dc | bytes 92 */

void FUN_089a03dc(uint param_1)

{
  FUN_089a12fc(DAT_09af6830,param_1,0);
  DAT_09af682c = DAT_09af682c & ~(1 << (param_1 & 0x1f));
  return;
}

