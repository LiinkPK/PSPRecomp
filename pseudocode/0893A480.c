/* Entry 0x0893A480 | file offset 0x00137458 | FUN_0893a480 | bytes 272 */

int FUN_0893a480(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_40 [32];
  
  iVar4 = 0;
  if ((param_1 == 1) || (param_1 == 2)) {
    uVar5 = 0x20;
    if (param_3 < 0x20) {
      uVar5 = param_3;
    }
    iVar6 = 0;
    bVar1 = 0 < (int)uVar5;
    while( true ) {
      iVar2 = 0;
      if (bVar1) {
        puVar3 = (undefined2 *)(param_2 + iVar6 * 2);
        do {
          local_40[iVar2] = (char)*puVar3;
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar6 < (int)uVar5);
      }
      iVar2 = FUN_0893a324(param_1,local_40,iVar2,0);
      iVar4 = iVar4 + iVar2;
      if ((uVar5 == param_3) || (uVar5 = uVar5 + 0x20, iVar2 < 1)) break;
      if (param_3 < uVar5) {
        uVar5 = param_3;
      }
      bVar1 = iVar6 < (int)uVar5;
    }
  }
  else {
    uVar5 = FUN_0893a324(param_1,param_2,param_3 * 2,0);
    iVar4 = (uVar5 / param_3) * 2;
  }
  return iVar4;
}

