/* Entry 0x089BC984 | file offset 0x001B995C | FUN_089bc984 | bytes 320 */

undefined4 FUN_089bc984(int param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  if (param_1 != 0) {
    if ((param_2 & 2) == 0) {
      uVar3 = 1;
    }
    else {
      iVar4 = FUN_089bcda8(param_1,1,0);
      iVar5 = FUN_089bcdc0(param_1,1,0);
      iVar6 = *(int *)(param_1 + 0x10);
      if ((*(int *)(param_1 + 0xc) == 0) || (iVar4 != 0)) {
        bVar2 = false;
      }
      else {
        FUN_089bbbc4(*(int *)(param_1 + 0xc),1,0x80000001,param_3);
        bVar2 = true;
      }
      if ((iVar6 == 0) || (iVar5 != 0)) {
        if (!bVar2) {
          return 1;
        }
        uVar1 = *(ushort *)(param_1 + 2);
      }
      else {
        FUN_089bbae0(iVar6,1,0x80000001,param_3);
        uVar1 = *(ushort *)(param_1 + 2);
      }
      uVar3 = 1;
      if ((uVar1 & 0x10) == 0) {
        iVar4 = FUN_089bd8cc(param_1,0,0,0x80000001);
        FUN_089baa90(param_3,2,4,iVar4 + 4);
        return 1;
      }
    }
  }
  return uVar3;
}

