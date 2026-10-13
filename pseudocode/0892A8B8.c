/* Entry 0x0892A8B8 | file offset 0x00127890 | FUN_0892a8b8 | bytes 92 */

void FUN_0892a8b8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  FUN_08935828(param_1 + 1,0,0x168);
  iVar1 = 0;
  param_1 = param_1 + 1;
  do {
    FUN_0892a5ec(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x12;
  } while (iVar1 < 5);
  return;
}

