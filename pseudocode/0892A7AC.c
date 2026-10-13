/* Entry 0x0892A7AC | file offset 0x00127784 | FUN_0892a7ac | bytes 208 */

undefined4 FUN_0892a7ac(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  iVar5 = 0;
  iVar7 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x20);
  puVar1 = (undefined4 *)(param_1 + 0x20);
  iVar3 = param_1;
  iVar4 = param_1;
  do {
    if (*(int *)(iVar4 + 0x20) != 0) {
      if (*(int *)(iVar3 + 0x20) != *(int *)(iVar4 + 0x20)) {
        uVar8 = 1;
      }
      uVar6 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 8;
      puVar2 = puVar2 + 2;
    }
    iVar7 = iVar7 + 1;
    iVar4 = iVar4 + 8;
    puVar1 = puVar1 + 2;
  } while (iVar7 < 5);
  for (; iVar5 < 5; iVar5 = iVar5 + 1) {
    FUN_0892a790(param_1,iVar5);
  }
  FUN_0892a654(param_1);
  return uVar8;
}

