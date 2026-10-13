/* Entry 0x088FB1A4 | file offset 0x000F817C | FUN_088fb1a4 | bytes 384 */

void FUN_088fb1a4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  
  puVar7 = &DAT_09afd960;
  iVar5 = 0;
  puVar10 = &DAT_09afb8a0;
  puVar6 = (undefined2 *)(param_1 + 0x20c0);
  iVar4 = param_1;
  do {
    iVar9 = 0;
    iVar8 = 0x20c;
    do {
      uVar11 = ((undefined4 *)((int)puVar10 + iVar9))[1];
      *(undefined4 *)(iVar4 + iVar9) = *(undefined4 *)((int)puVar10 + iVar9);
      ((undefined4 *)(iVar4 + iVar9))[1] = uVar11;
      iVar8 = iVar8 + -1;
      iVar9 = iVar9 + 8;
    } while (iVar8 != 0);
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x1060;
    puVar10 = puVar10 + 0x418;
    puVar6 = puVar6 + 2;
    puVar7 = puVar7 + 2;
  } while (iVar5 < 2);
  iVar5 = 0;
  iVar4 = 0x2d;
  do {
    uVar11 = *(undefined4 *)((int)&DAT_09afde4c + iVar5);
    puVar10 = (undefined4 *)(param_1 + 0x20c8 + iVar5);
    *puVar10 = *(undefined4 *)((int)&DAT_09afde48 + iVar5);
    puVar10[1] = uVar11;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 8;
  } while (iVar4 != 0);
  iVar5 = 0;
  iVar4 = 0x1d;
  do {
    uVar1 = *(undefined2 *)((int)&DAT_09afdfb2 + iVar5);
    puVar7 = (undefined2 *)(param_1 + 0x2230 + iVar5);
    *puVar7 = *(undefined2 *)((int)&DAT_09afdfb0 + iVar5);
    puVar7[1] = uVar1;
    uVar2 = DAT_09afe02c;
    uVar11 = DAT_09afe028;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 4;
  } while (iVar4 != 0);
  *(undefined4 *)(param_1 + 0x22a4) = DAT_09afe024;
  *(undefined4 *)(param_1 + 0x22a8) = uVar11;
  *(undefined4 *)(param_1 + 0x22ac) = uVar2;
  uVar2 = DAT_09afe064;
  uVar11 = DAT_09afe060;
  *(undefined4 *)(param_1 + 0x22b0) = DAT_09afe05c;
  uVar3 = DAT_09afe068;
  *(undefined4 *)(param_1 + 0x22b4) = uVar11;
  uVar11 = DAT_09afe06c;
  *(undefined4 *)(param_1 + 0x22b8) = uVar2;
  uVar2 = DAT_09afe070;
  *(undefined4 *)(param_1 + 0x22bc) = uVar3;
  uVar3 = DAT_09afe074;
  *(undefined4 *)(param_1 + 0x22c0) = uVar11;
  uVar11 = DAT_09afe078;
  *(undefined4 *)(param_1 + 0x22c4) = uVar2;
  uVar2 = DAT_09afe07c;
  *(undefined4 *)(param_1 + 0x22c8) = uVar3;
  *(undefined4 *)(param_1 + 0x22cc) = uVar11;
  *(undefined4 *)(param_1 + 0x22d0) = uVar2;
  uVar11 = DAT_09afe084;
  *(undefined4 *)(param_1 + 0x22d4) = DAT_09afe080;
  *(undefined4 *)(param_1 + 0x22d8) = uVar11;
  uVar1 = DAT_09afe08a;
  *(undefined2 *)(param_1 + 0x22dc) = DAT_09afe088;
  *(undefined2 *)(param_1 + 0x22de) = uVar1;
  *(undefined4 *)(param_1 + 0x22e0) = param_2;
  return;
}

