/* Entry 0x0897C27C | file offset 0x00179254 | FUN_0897c27c | bytes 588 */

void FUN_0897c27c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  
  iVar4 = *(int *)(param_1 + *(int *)(param_1 + 8) * 4);
  FUN_089a3918(auStack_80,&DAT_089da410,param_4);
  FUN_089a3a84(0,0x3f800000,auStack_80,auStack_80);
  uVar1 = FUN_089a48cc(auStack_80);
  FUN_089a3918(auStack_70,&DAT_089da410,param_4 + 0x10);
  FUN_089a3a84(0,0x3f800000,auStack_70,auStack_70);
  local_40 = FUN_089a48cc(auStack_70);
  FUN_089a3918(auStack_60,&DAT_089da410,param_5);
  FUN_089a3a84(0,0x3f800000,auStack_60,auStack_60);
  uVar2 = FUN_089a48cc(auStack_60);
  FUN_089a3918(auStack_50,&DAT_089da410,param_5 + 0x10);
  FUN_089a3a84(0,0x3f800000,auStack_50,auStack_50);
  uVar3 = FUN_089a48cc(auStack_50);
  FUN_089a34c0(iVar4 + 0x9c,param_3);
  *(undefined4 *)(iVar4 + 0x98) = uVar2;
  *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(iVar4 + 0xb4,param_3 + 0x30);
  *(undefined4 *)(iVar4 + 0xb0) = uVar3;
  *(undefined4 *)(iVar4 + 0xa8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0xac) = *(undefined4 *)(param_1 + 0x18);
  FUN_089a34c0(iVar4 + 0xcc,param_2);
  *(undefined4 *)(iVar4 + 200) = uVar1;
  *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(param_1 + 0x24);
  FUN_089a34c0(iVar4 + 0xe4,param_2 + 0x10);
  *(undefined4 *)(iVar4 + 0xe0) = local_40;
  *(undefined4 *)(iVar4 + 0xd8) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0xdc) = *(undefined4 *)(param_1 + 0x24);
  FUN_089a34c0(iVar4 + 0xfc,param_3 + 0x10);
  *(undefined4 *)(iVar4 + 0xf8) = uVar2;
  *(undefined4 *)(iVar4 + 0xf0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  FUN_089a34c0(iVar4 + 0x114,param_3 + 0x20);
  *(undefined4 *)(iVar4 + 0x110) = uVar3;
  *(undefined4 *)(iVar4 + 0x108) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar4 + 0x10c) = *(undefined4 *)(param_1 + 0x1c);
  return;
}

