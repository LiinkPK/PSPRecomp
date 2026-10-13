/* Entry 0x088FB028 | file offset 0x000F8000 | FUN_088fb028 | bytes 380 */

void FUN_088fb028(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  
  puVar4 = (undefined2 *)(param_1 + 0x20c0);
  puVar8 = &DAT_09afd960;
  iVar7 = 0;
  puVar6 = &DAT_09afb8a0;
  iVar5 = param_1;
  do {
    iVar2 = 0;
    iVar9 = 0x20c;
    do {
      uVar3 = ((undefined4 *)(iVar5 + iVar2))[1];
      *(undefined4 *)((int)puVar6 + iVar2) = *(undefined4 *)(iVar5 + iVar2);
      ((undefined4 *)((int)puVar6 + iVar2))[1] = uVar3;
      iVar9 = iVar9 + -1;
      iVar2 = iVar2 + 8;
    } while (iVar9 != 0);
    uVar1 = puVar4[1];
    *puVar8 = *puVar4;
    puVar8[1] = uVar1;
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 0x418;
    iVar5 = iVar5 + 0x1060;
    puVar8 = puVar8 + 2;
    puVar4 = puVar4 + 2;
  } while (iVar7 < 2);
  iVar7 = 0;
  iVar5 = 0x2d;
  do {
    puVar6 = (undefined4 *)(param_1 + 0x20c8 + iVar7);
    uVar3 = puVar6[1];
    *(undefined4 *)((int)&DAT_09afde48 + iVar7) = *puVar6;
    *(undefined4 *)((int)&DAT_09afde4c + iVar7) = uVar3;
    iVar5 = iVar5 + -1;
    iVar7 = iVar7 + 8;
  } while (iVar5 != 0);
  iVar7 = 0;
  iVar5 = 0x1d;
  do {
    puVar4 = (undefined2 *)(param_1 + 0x2230 + iVar7);
    uVar1 = puVar4[1];
    *(undefined2 *)((int)&DAT_09afdfb0 + iVar7) = *puVar4;
    *(undefined2 *)((int)&DAT_09afdfb2 + iVar7) = uVar1;
    iVar5 = iVar5 + -1;
    iVar7 = iVar7 + 4;
  } while (iVar5 != 0);
  DAT_09afe024 = *(undefined4 *)(param_1 + 0x22a4);
  DAT_09afe028 = *(undefined4 *)(param_1 + 0x22a8);
  DAT_09afe02c = *(undefined4 *)(param_1 + 0x22ac);
  DAT_09afe05c = *(undefined4 *)(param_1 + 0x22b0);
  DAT_09afe060 = *(undefined4 *)(param_1 + 0x22b4);
  DAT_09afe064 = *(undefined4 *)(param_1 + 0x22b8);
  DAT_09afe068 = *(undefined4 *)(param_1 + 0x22bc);
  DAT_09afe06c = *(undefined4 *)(param_1 + 0x22c0);
  DAT_09afe070 = *(undefined4 *)(param_1 + 0x22c4);
  DAT_09afe074 = *(undefined4 *)(param_1 + 0x22c8);
  DAT_09afe078 = *(undefined4 *)(param_1 + 0x22cc);
  DAT_09afe07c = *(undefined4 *)(param_1 + 0x22d0);
  DAT_09afe080 = *(undefined4 *)(param_1 + 0x22d4);
  DAT_09afe084 = *(undefined4 *)(param_1 + 0x22d8);
  DAT_09afe088 = *(undefined2 *)(param_1 + 0x22dc);
  DAT_09afe08a = *(undefined2 *)(param_1 + 0x22de);
  return;
}

