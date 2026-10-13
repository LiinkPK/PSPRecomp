/* Entry 0x088D73F4 | file offset 0x000D43CC | FUN_088d73f4 | bytes 72 */

undefined4 FUN_088d73f4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

