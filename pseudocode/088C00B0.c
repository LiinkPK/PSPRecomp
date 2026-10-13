/* Entry 0x088C00B0 | file offset 0x000BD088 | FUN_088c00b0 | bytes 156 */

void FUN_088c00b0(undefined2 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  
  sVar1 = *(short *)(param_2 + 2);
  iVar3 = 0;
  *(int *)(param_1 + 0x18) = (int)sVar1;
  if (0 < sVar1) {
    iVar2 = 0;
    puVar7 = param_1;
    do {
      puVar8 = (undefined2 *)(*(int *)(param_2 + 4) + iVar2);
      iVar6 = 0;
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      iVar5 = 0;
      puVar4 = puVar7;
      if (0 < (short)puVar7[1]) {
        do {
          iVar6 = iVar6 + 1;
          puVar9 = (undefined2 *)(*(int *)(puVar8 + 2) + iVar5);
          iVar5 = iVar5 + 2;
          puVar4[2] = *puVar9;
          puVar4 = puVar4 + 1;
        } while (iVar6 < (short)puVar7[1]);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
      puVar7 = puVar7 + 6;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return;
}

