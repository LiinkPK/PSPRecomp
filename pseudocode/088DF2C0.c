/* Entry 0x088DF2C0 | file offset 0x000DC298 | FUN_088df2c0 | bytes 56 */

undefined4 FUN_088df2c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar2;
}

