/* Entry 0x0883E9E4 | file offset 0x0003B9BC | FUN_0883e9e4 | bytes 128 */

int FUN_0883e9e4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_2 + 4)) {
    iVar2 = param_2 + 0xc;
    do {
      iVar1 = FUN_0883ea64(param_1,iVar2);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (iVar3 < *(short *)(param_2 + 4));
  }
  return 0;
}

