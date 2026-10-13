/* Entry 0x088DF3F8 | file offset 0x000DC3D0 | FUN_088df3f8 | bytes 68 */

undefined4 FUN_088df3f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

