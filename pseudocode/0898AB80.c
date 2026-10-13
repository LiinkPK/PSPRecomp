/* Entry 0x0898AB80 | file offset 0x00187B58 | FUN_0898ab80 | bytes 616 */

void FUN_0898ab80(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined4 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined *local_40;
  
  local_40 = &DAT_089da410;
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  local_50 = puVar6;
  local_4c = param_1;
  local_48 = param_4;
  local_44 = param_3;
  FUN_0898a908(param_1,auStack_d0,param_2,param_3,param_4,param_5,param_6);
  uVar2 = FUN_089a48cc(param_7);
  uVar3 = FUN_089a48cc(param_8);
  FUN_089a34c0(puVar6 + 1,auStack_d0);
  FUN_089a3918(auStack_70,&DAT_089da410,param_2 + 0x20);
  FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
  uVar4 = FUN_089a48cc(auStack_70);
  *puVar6 = uVar4;
  FUN_089a34c0(puVar6 + 5,auStack_c0);
  puVar6[4] = uVar2;
  FUN_089a34c0(puVar6 + 9,auStack_b0);
  puVar6[8] = uVar3;
  uVar9 = 1;
  puVar5 = puVar6 + 0xc;
  iVar8 = 3;
  puVar6 = puVar6 + 0xd;
  iVar1 = local_48;
  iVar7 = local_44;
  if (1 < param_6 - 1U) {
    do {
      FUN_089a34c0(puVar6,iVar7 + 0x10);
      *puVar5 = uVar2;
      FUN_089a34c0(puVar6 + 4,iVar1 + 0x10);
      puVar5[4] = uVar3;
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 2;
      puVar5 = puVar5 + 8;
      puVar6 = puVar6 + 8;
      iVar1 = iVar1 + 0x10;
      iVar7 = iVar7 + 0x10;
    } while (uVar9 < param_6 - 1U);
  }
  FUN_089a34c0(puVar6,auStack_90);
  puVar6 = local_50;
  *puVar5 = uVar2;
  puVar5 = local_50 + (iVar8 + 1) * 4;
  FUN_089a34c0(puVar5 + 1,auStack_80);
  *puVar5 = uVar3;
  puVar5 = puVar6 + (iVar8 + 2) * 4;
  FUN_089a34c0(puVar5 + 1,auStack_a0);
  iVar1 = local_4c;
  FUN_089a3918(auStack_60,local_40,local_4c + 0x70);
  FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
  uVar2 = FUN_089a48cc(auStack_60);
  *puVar5 = uVar2;
  *(undefined4 **)(iVar1 + 0x28) = puVar6 + (iVar8 + 3) * 4;
  return;
}

