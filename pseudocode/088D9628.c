/* Entry 0x088D9628 | file offset 0x000D6600 | FUN_088d9628 | bytes 132 */

undefined4 FUN_088d9628(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_088d93d8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1e0) + -1;
    if (-1 < iVar1) {
      iVar1 = iVar1 * 0x44;
      iVar3 = param_1 + iVar1 + 4;
      do {
        FUN_088d8fd0(iVar3,param_2);
        iVar1 = iVar1 + -0x44;
        iVar3 = iVar3 + -0x44;
      } while (-1 < iVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

