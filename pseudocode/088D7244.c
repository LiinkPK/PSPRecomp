/* Entry 0x088D7244 | file offset 0x000D421C | FUN_088d7244 | bytes 56 */

undefined4 FUN_088d7244(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar2;
}

