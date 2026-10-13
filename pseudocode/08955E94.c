/* Entry 0x08955E94 | file offset 0x00152E6C | FUN_08955e94 | bytes 624 */

void FUN_08955e94(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(int *)(param_3 + 0xc) < 0) {
    iVar6 = 0;
  }
  else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                             *(int *)(param_3 + 0xc) * 4) + 0x10);
  }
  if (iVar6 != -1) {
    if (*(int *)(param_3 + 0xc) < 0) {
      uVar7 = 0;
    }
    else if (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined4 **)
                (*(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34) +
                *(int *)(param_3 + 0xc) * 4);
    }
    iVar4 = *(int *)(param_2 + 0x8c);
    uVar1 = *(ushort *)
             (*(int *)(*(int *)(param_2 + 0x90) + 8) + *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
    FUN_089a0384(9);
    if (*(char *)(param_3 + 0x15) == '\0') {
      FUN_089a03dc(2);
    }
    else {
      FUN_089a0384(2);
    }
    iVar5 = *(int *)(param_2 + 0x8c);
    puVar3 = *(undefined1 **)
              (*(int *)(iVar5 + 0x48) +
              (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
    FUN_08946ac4(uVar7,param_2,iVar5,*(undefined4 *)(iVar5 + 0x50),*puVar3,puVar3[1],puVar3[2],
                 auStack_e0);
    auVar2 = vmul_q(*(undefined1 (*) [16])(iVar4 + (uint)uVar1 + 0x60),
                    *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
    local_60 = auVar2._0_4_;
    uStack_5c = auVar2._4_4_;
    uStack_58 = auVar2._8_4_;
    uStack_54 = auVar2._12_4_;
    FUN_0896fb5c(auStack_e0);
    if (*(char *)(param_3 + 0x18) == '\0') {
      FUN_08972080(*(undefined4 *)(param_2 + 0xa0),iVar6,&local_60);
    }
    else {
      local_40 = *(undefined4 *)(param_3 + 0x10);
      iVar4 = *(int *)(param_2 + 0x8c);
      local_3c = local_40;
      local_38 = local_40;
      local_34 = local_40;
      FUN_08947b88(uVar7,param_2,iVar4,*(undefined4 *)(iVar4 + 0x50),
                   *(undefined1 *)
                    (*(int *)(*(int *)(iVar4 + 0x48) +
                             (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) + 1)
                   ,*(undefined1 *)(param_3 + 0x19),param_3,&local_40,auStack_a0);
      uVar7 = FUN_0896fd08(auStack_e0,auStack_a0);
      FUN_0896fd88(uVar7);
      FUN_08972080(*(undefined4 *)(param_2 + 0xa0),iVar6,&local_60);
      FUN_0896fe50();
    }
    FUN_089a119c(1);
  }
  return;
}

