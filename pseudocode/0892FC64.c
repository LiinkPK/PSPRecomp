/* Entry 0x0892FC64 | file offset 0x0012CC3C | FUN_0892fc64 | bytes 68 */

void FUN_0892fc64(int param_1)

{
  undefined4 uVar1;
  
  FUN_0892fca8();
  uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_088d3cf0(0,param_1 + 0x34,&DAT_089cf080);
  return;
}

