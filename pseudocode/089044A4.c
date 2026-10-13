/* Entry 0x089044A4 | file offset 0x0010147C | FUN_089044a4 | bytes 308 */

undefined4 FUN_089044a4(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_20 [8];
  
  uVar4 = FUN_08905810(auStack_20,param_2);
  iVar6 = -1;
  if (0 < *(int *)(param_1 + 0x184)) {
    iVar9 = param_1 + 0x124;
    iVar5 = 0;
    do {
      iVar6 = iVar5;
      iVar5 = FUN_08935490(iVar9,uVar4,6);
      if (iVar5 == 0) break;
      iVar5 = iVar6 + 1;
      iVar9 = iVar9 + 6;
      iVar6 = -1;
    } while (iVar5 < *(int *)(param_1 + 0x184));
  }
  if (((-1 < iVar6) && (0 < *(int *)(param_1 + 0x184))) &&
     (iVar5 = *(int *)(param_1 + 0x184) + -1, *(int *)(param_1 + 0x184) = iVar5, iVar6 < iVar5)) {
    iVar5 = param_1 + iVar6 * 6;
    puVar8 = (undefined1 *)(iVar5 + 0x124);
    puVar7 = (undefined1 *)(iVar5 + 0x12a);
    do {
      uVar1 = puVar7[1];
      uVar2 = puVar7[2];
      *puVar8 = *puVar7;
      uVar3 = puVar7[3];
      puVar8[1] = uVar1;
      uVar1 = puVar7[4];
      puVar8[2] = uVar2;
      uVar2 = puVar7[5];
      puVar8[3] = uVar3;
      puVar8[4] = uVar1;
      puVar8[5] = uVar2;
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 6;
      puVar7 = puVar7 + 6;
    } while (iVar6 < *(int *)(param_1 + 0x184));
  }
  *(undefined1 *)(param_1 + 0x115) = 0;
  return 1;
}

