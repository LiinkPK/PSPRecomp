/* Entry 0x088DE80C | file offset 0x000DB7E4 | FUN_088de80c | bytes 112 */

undefined4 FUN_088de80c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088df2c0(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = FUN_088df860(param_1 + 0x80);
    if (iVar1 == 0) {
      FUN_088df3b8(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0xc) = 2;
    }
  }
  else {
    FUN_088de8f4(param_1);
  }
  return 0;
}

