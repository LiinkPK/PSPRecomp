/* Entry 0x08928314 | file offset 0x001252EC | FUN_08928314 | bytes 348 */

void FUN_08928314(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  ushort *puVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  
  uVar6 = (uint)*(byte *)(param_2 + 2);
  iVar4 = 0;
  puVar8 = (undefined2 *)(*(int *)(param_2 + 0x480) + param_2);
  puVar5 = puVar8;
  if (uVar6 / 2 != 0) {
    do {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      *puVar5 = puVar8[(uVar6 - iVar4) * 2 + -2];
      puVar5[1] = puVar8[((uint)*(byte *)(param_2 + 2) - iVar4) * 2 + -1];
      puVar8[((uint)*(byte *)(param_2 + 2) - iVar4) * 2 + -2] = uVar1;
      puVar8[((uint)*(byte *)(param_2 + 2) - iVar4) * 2 + -1] = uVar2;
      uVar6 = (uint)*(byte *)(param_2 + 2);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < (int)(uVar6 / 2));
  }
  iVar4 = 0;
  puVar9 = (ushort *)(*(int *)(param_2 + 0x408) + param_2);
  uVar6 = (uint)*puVar9;
  puVar7 = puVar9;
  if (uVar6 != 0) {
    do {
      uVar3 = puVar7[2];
      if (uVar3 < 0x66) {
        if (99 < uVar3) {
          *(uint *)(puVar7 + 6) = ((uint)*(byte *)(param_2 + 2) - *(int *)(puVar7 + 6)) + -1;
          uVar6 = (uint)*puVar9;
        }
      }
      else {
        switch(uVar3) {
        case 200:
        case 0xcd:
        case 0xd0:
        case 0xd2:
          *(uint *)(puVar7 + 8) = ((uint)*(byte *)(param_2 + 2) - *(int *)(puVar7 + 8)) + -1;
          uVar6 = (uint)*puVar9;
        }
      }
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 0x10;
    } while (iVar4 < (int)uVar6);
  }
  return;
}

