/* Entry 0x08891C18 | file offset 0x0008EBF0 | FUN_08891c18 | bytes 140 */

undefined4 FUN_08891c18(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_2 == 0) || (param_3 < 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088c6ca4();
    if (iVar1 == 0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar2 = 0;
      iVar4 = 0xb;
      do {
        uVar3 = ((undefined4 *)(iVar1 + iVar2))[1];
        *(undefined4 *)(param_2 + iVar2) = *(undefined4 *)(iVar1 + iVar2);
        ((undefined4 *)(param_2 + iVar2))[1] = uVar3;
        iVar4 = iVar4 + -1;
        iVar2 = iVar2 + 8;
      } while (iVar4 != 0);
      uVar3 = 0;
    }
  }
  return uVar3;
}

