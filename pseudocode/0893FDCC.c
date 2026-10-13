/* Entry 0x0893FDCC | file offset 0x0013CDA4 | FUN_0893fdcc | bytes 272 */

int FUN_0893fdcc(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 *local_28;
  
  iVar6 = 0;
  if (param_2 == 0) {
    iVar6 = 0;
  }
  else {
    uVar5 = param_2 - 1;
    puVar7 = param_1 + 1;
    local_30 = param_3;
    while (iVar2 = FUN_0893f9d4(&local_30), iVar2 != 0) {
      local_28 = local_2c;
      FUN_0893fba8(&local_28,iVar2);
      uVar3 = (int)local_28 - (int)local_2c;
      if (uVar5 < uVar3) break;
      uVar5 = uVar5 - uVar3;
      puVar4 = local_2c;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *param_1 = uVar1;
        iVar6 = iVar6 + 1;
        param_1 = puVar7;
        puVar7 = puVar7 + 1;
      }
    }
    *param_1 = 0;
  }
  return iVar6;
}

