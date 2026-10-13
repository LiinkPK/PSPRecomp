/* Entry 0x088DE8B8 | file offset 0x000DB890 | FUN_088de8b8 | bytes 60 */

undefined4 FUN_088de8b8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088df824(param_1 + 0x80);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

