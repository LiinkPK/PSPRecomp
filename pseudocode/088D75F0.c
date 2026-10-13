/* Entry 0x088D75F0 | file offset 0x000D45C8 | FUN_088d75f0 | bytes 148 */

undefined4 FUN_088d75f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088d82f0(param_1 + 0x24);
    if ((iVar1 < 0) || (iVar2 = FUN_088d93e0(param_1 + 0x5c), iVar2 <= iVar1)) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = FUN_088d9498(param_1 + 0x5c,iVar1);
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = FUN_088d8e58(iVar1);
      }
    }
  }
  return uVar3;
}

