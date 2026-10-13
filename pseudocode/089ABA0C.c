/* Entry 0x089ABA0C | file offset 0x001A89E4 | FUN_089aba0c | bytes 220 */

int FUN_089aba0c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar1 = FUN_089ab8e4(param_3);
    iVar2 = FUN_089ab908(iVar1);
    iVar1 = (param_2 * 4 + iVar1) * 4 + param_1;
    uVar3 = (param_4 + iVar2) - 1U & -iVar2;
    iVar2 = *(int *)(iVar1 + 0x3c);
    if (uVar3 <= *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar1 + 0x3c) = iVar2 + uVar3;
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) - uVar3;
      FUN_089ab9d0(param_1,param_2,iVar2);
      return iVar2;
    }
  }
  return 0;
}

