/* Entry 0x08916A84 | file offset 0x00113A5C | FUN_08916a84 | bytes 104 */

void FUN_08916a84(int param_1,undefined4 param_2)

{
  FUN_08873d34(0x41800000,3,0,0,0,2);
  FUN_08873dec(3,2);
  FUN_08914b64(param_1,0xc);
  *(undefined4 *)(param_1 + 0x7cc) = param_2;
  return;
}

