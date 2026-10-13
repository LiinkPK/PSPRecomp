/* Entry 0x08932558 | file offset 0x0012F530 | FUN_08932558 | bytes 372 */

void FUN_08932558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [4];
  undefined2 local_4c [7];
  undefined2 local_3e;
  undefined2 local_36;
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x10));
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  iVar5 = 0;
  iVar8 = param_1;
  do {
    uVar2 = FUN_088daa68(param_2);
    *(undefined4 *)(iVar8 + 0x10) = uVar2;
    iVar5 = iVar5 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar5 < 4);
  uVar6 = 3;
  uVar4 = 4;
  if (param_5 == '\0') {
    uVar6 = 2;
    uVar4 = 3;
  }
  FUN_08935524(local_4c,&DAT_089d8568,0x28);
  local_3e = uVar6;
  local_36 = uVar4;
  iVar8 = 0;
  puVar3 = (undefined2 *)(param_1 + 0x38);
  puVar7 = local_4c;
  do {
    uVar4 = puVar7[1];
    uVar6 = puVar7[2];
    uVar1 = puVar7[3];
    *puVar3 = *puVar7;
    puVar3[1] = uVar4;
    puVar3[2] = uVar6;
    puVar3[3] = uVar1;
    iVar8 = iVar8 + 1;
    puVar3 = puVar3 + 4;
    puVar7 = puVar7 + 4;
  } while (iVar8 < 5);
  FUN_088da0a8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_90,auStack_50);
  FUN_088d9b84(*(undefined4 *)(param_1 + 0x1c),auStack_90);
  FUN_088d9af4(*(undefined4 *)(param_1 + 0x1c),auStack_50);
  FUN_088d3cf0(0,param_1 + 0x10,param_1 + 0x38);
  if (param_5 == '\0') {
    FUN_088d9cfc(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}

