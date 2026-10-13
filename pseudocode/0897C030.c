/* Entry 0x0897C030 | file offset 0x00179008 | FUN_0897c030 | bytes 588 */

void FUN_0897c030(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int local_40;
  
  puVar6 = *(undefined4 **)(param_1 + *(int *)(param_1 + 8) * 4);
  local_40 = param_3;
  FUN_089a3918(auStack_80,&DAT_089da410,param_6 + 0x10);
  FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
  uVar2 = FUN_089a48cc(auStack_80);
  FUN_089a3918(auStack_70,&DAT_089da410,param_5 + 0x10);
  FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
  uVar3 = FUN_089a48cc(auStack_70);
  FUN_089a3918(auStack_60,&DAT_089da410,param_8 + 0x10);
  FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
  uVar4 = FUN_089a48cc(auStack_60);
  FUN_089a3918(auStack_50,&DAT_089da410,param_7 + 0x10);
  FUN_089a3a84(0,0x3f800000,auStack_50,auStack_50);
  uVar5 = FUN_089a48cc(auStack_50);
  FUN_089a34c0(puVar6 + 3,param_2);
  puVar6[2] = uVar2;
  *puVar6 = *(undefined4 *)(param_1 + 0x20);
  puVar6[1] = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(puVar6 + 9,param_2 + 0x30);
  iVar1 = local_40;
  puVar6[8] = uVar3;
  puVar6[6] = *(undefined4 *)(param_1 + 0x14);
  puVar6[7] = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(puVar6 + 0xf,local_40);
  puVar6[0xe] = uVar4;
  puVar6[0xc] = *(undefined4 *)(param_1 + 0x20);
  puVar6[0xd] = *(undefined4 *)(param_1 + 0x24);
  FUN_089a34c0(puVar6 + 0x15,iVar1 + 0x10);
  puVar6[0x14] = uVar5;
  puVar6[0x12] = *(undefined4 *)(param_1 + 0x14);
  puVar6[0x13] = *(undefined4 *)(param_1 + 0x24);
  FUN_089a34c0(puVar6 + 0x1b,param_2 + 0x10);
  puVar6[0x1a] = uVar2;
  puVar6[0x18] = *(undefined4 *)(param_1 + 0x20);
  puVar6[0x19] = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a34c0(puVar6 + 0x21,param_2 + 0x20);
  puVar6[0x20] = uVar3;
  puVar6[0x1e] = *(undefined4 *)(param_1 + 0x14);
  puVar6[0x1f] = *(undefined4 *)(param_1 + 0x1c);
  return;
}

