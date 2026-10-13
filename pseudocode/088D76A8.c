/* Entry 0x088D76A8 | file offset 0x000D4680 | FUN_088d76a8 | bytes 120 */

undefined4 FUN_088d76a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d93e0(param_1 + 0x5c);
  if ((param_2 < 0) || (iVar1 <= param_2)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088d9498(param_1 + 0x5c,param_2);
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_088d8e58(iVar1);
    }
  }
  return uVar2;
}

