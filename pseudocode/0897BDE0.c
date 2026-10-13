/* Entry 0x0897BDE0 | file offset 0x00178DB8 | FUN_0897bde0 | bytes 592 */

void FUN_0897bde0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  int local_40;
  
  iVar6 = *(int *)(param_1 + *(int *)(param_1 + 8) * 4);
  local_40 = param_3;
  FUN_089a3918(auStack_80,&DAT_089da410,param_5);
  FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
  uVar2 = FUN_089a48cc(auStack_80);
  FUN_089a3918(auStack_70,&DAT_089da410,param_6);
  FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
  uVar3 = FUN_089a48cc(auStack_70);
  FUN_089a3918(auStack_60,&DAT_089da410,param_7);
  FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
  uVar4 = FUN_089a48cc(auStack_60);
  FUN_089a3918(auStack_50,&DAT_089da410,param_8);
  FUN_089a3a84(0,0x3f800000,auStack_50,auStack_50);
  uVar5 = FUN_089a48cc(auStack_50);
  FUN_089a34c0(iVar6 + 300,param_2);
  *(undefined4 *)(iVar6 + 0x128) = uVar2;
  *(undefined4 *)(iVar6 + 0x120) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar6 + 0x124) = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(iVar6 + 0x144,param_2 + 0x30);
  iVar1 = local_40;
  *(undefined4 *)(iVar6 + 0x140) = uVar3;
  *(undefined4 *)(iVar6 + 0x138) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar6 + 0x13c) = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(iVar6 + 0x15c,local_40);
  *(undefined4 *)(iVar6 + 0x158) = uVar4;
  *(undefined4 *)(iVar6 + 0x150) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar6 + 0x154) = *(undefined4 *)(param_1 + 0x24);
  FUN_089a34c0(iVar6 + 0x174,iVar1 + 0x10);
  *(undefined4 *)(iVar6 + 0x170) = uVar5;
  *(undefined4 *)(iVar6 + 0x168) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar6 + 0x16c) = *(undefined4 *)(param_1 + 0x24);
  FUN_089a34c0(iVar6 + 0x18c,param_2 + 0x10);
  *(undefined4 *)(iVar6 + 0x188) = uVar2;
  *(undefined4 *)(iVar6 + 0x180) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar6 + 0x184) = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a34c0(iVar6 + 0x1a4,param_2 + 0x20);
  *(undefined4 *)(iVar6 + 0x1a0) = uVar3;
  *(undefined4 *)(iVar6 + 0x198) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar6 + 0x19c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

