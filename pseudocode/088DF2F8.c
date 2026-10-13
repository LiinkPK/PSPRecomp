/* Entry 0x088DF2F8 | file offset 0x000DC2D0 | FUN_088df2f8 | bytes 56 */

undefined4 FUN_088df2f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar2;
}

