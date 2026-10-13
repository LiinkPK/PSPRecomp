/* Entry 0x088AFB30 | file offset 0x000ACB08 | FUN_088afb30 | bytes 52 */

void FUN_088afb30(int param_1)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
  FUN_088af134(param_1,0);
  return;
}

