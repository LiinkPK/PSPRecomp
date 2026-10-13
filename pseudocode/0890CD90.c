/* Entry 0x0890CD90 | file offset 0x00109D68 | FUN_0890cd90 | bytes 200 */

void FUN_0890cd90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((*(code **)(param_1 + 0x14) != (code *)0x0) && (iVar7 = *(int *)(param_1 + 0x48), 0 < iVar7))
     && (iVar7 % 10 == 0)) {
    uVar1 = (**(code **)(param_1 + 0x14))(iVar7,*(undefined4 *)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 4) {
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x3c) = 3;
      puVar4 = (undefined4 *)(param_1 + 0x1c);
      puVar3 = (undefined4 *)(param_1 + 0x24);
      do {
        uVar6 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        iVar2 = *(int *)(param_1 + 0x3c);
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 2;
        puVar3 = puVar3 + 2;
      } while (iVar5 < iVar2);
    }
    iVar5 = param_1 + iVar2 * 8;
    *(int *)(iVar5 + 0x1c) = iVar7;
    *(undefined4 *)(iVar5 + 0x20) = uVar1;
    *(int *)(param_1 + 0x3c) = iVar2 + 1;
  }
  return;
}

