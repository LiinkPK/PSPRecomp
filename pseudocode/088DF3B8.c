/* Entry 0x088DF3B8 | file offset 0x000DC390 | FUN_088df3b8 | bytes 64 */

undefined4 FUN_088df3b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

