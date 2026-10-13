/* Entry 0x0892F8C8 | file offset 0x0012C8A0 | FUN_0892f8c8 | bytes 116 */

void FUN_0892f8c8(int param_1)

{
  int iVar1;
  
  FUN_088d3f00(0,param_1 + 0x34,&DAT_089cf080);
  FUN_088d44ec(param_1 + 0x34,param_1 + 0x38,&DAT_089cf090);
  iVar1 = 0;
  param_1 = param_1 + 0x3c;
  do {
    FUN_0892ed30(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x10c;
  } while (iVar1 < 1);
  return;
}

