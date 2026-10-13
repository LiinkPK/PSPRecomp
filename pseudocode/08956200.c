/* Entry 0x08956200 | file offset 0x001531D8 | FUN_08956200 | bytes 764 */

void FUN_08956200(float param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_4 + 0xc) < 0) {
    iVar6 = 0;
  }
  else if (*(int *)(*(int *)(*(int *)(param_3 + 0x88) + 0x1c8) + 0x34) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x88) + 0x1c8) + 0x34) +
                             *(int *)(param_4 + 0xc) * 4) + 0x10);
  }
  if (iVar6 != -1) {
    if (*(int *)(param_4 + 0xc) < 0) {
      uVar7 = 0;
    }
    else if (*(int *)(*(int *)(*(int *)(param_3 + 0x88) + 0x1c8) + 0x34) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = **(undefined4 **)
                (*(int *)(*(int *)(*(int *)(param_3 + 0x88) + 0x1c8) + 0x34) +
                *(int *)(param_4 + 0xc) * 4);
    }
    iVar5 = *(int *)(param_3 + 0x8c);
    uVar1 = *(ushort *)
             (*(int *)(*(int *)(param_3 + 0x90) + 8) + *(int *)(*(int *)(param_3 + 0x90) + 4) * 2);
    fVar8 = *(float *)(param_5 + 0x18) * 0.5 * param_1 * param_1 +
            *(float *)(param_5 + 0x10) * param_1 + *(float *)(param_5 + 8);
    fVar9 = *(float *)(param_5 + 0x1c) * 0.5 * param_1 * param_1 +
            *(float *)(param_5 + 0x14) * param_1 + *(float *)(param_5 + 0xc);
    FUN_089a0384(9);
    if (*(char *)(param_4 + 0x45) == '\0') {
      FUN_089a03dc(2);
    }
    else {
      FUN_089a0384(2);
    }
    iVar4 = *(int *)(param_3 + 0x8c);
    puVar3 = *(undefined1 **)
              (*(int *)(iVar4 + 0x48) +
              (uint)*(ushort *)(*(int *)(*(int *)(param_3 + 0x90) + 8) + 2) * 4);
    FUN_08946ac4(uVar7,param_3,iVar4,*(undefined4 *)(iVar4 + 0x50),*puVar3,puVar3[1],puVar3[2],
                 auStack_f0);
    auVar2 = vmul_q(*(undefined1 (*) [16])(iVar5 + (uint)uVar1 + 0x60),
                    *(undefined1 (*) [16])(*(int *)(param_3 + 0x88) + 0x40));
    local_70 = auVar2._0_4_;
    uStack_6c = auVar2._4_4_;
    uStack_68 = auVar2._8_4_;
    uStack_64 = auVar2._12_4_;
    FUN_0896fb5c(auStack_f0);
    if (*(char *)(param_4 + 0x48) == '\0') {
      FUN_089720b0(fVar8,fVar9,*(undefined4 *)(param_3 + 0xa0),iVar6,&local_70);
    }
    else {
      local_50 = *(undefined4 *)(param_4 + 0x40);
      iVar5 = *(int *)(param_3 + 0x8c);
      local_4c = local_50;
      local_48 = local_50;
      local_44 = local_50;
      FUN_08947b88(uVar7,param_3,iVar5,*(undefined4 *)(iVar5 + 0x50),
                   *(undefined1 *)
                    (*(int *)(*(int *)(iVar5 + 0x48) +
                             (uint)*(ushort *)(*(int *)(*(int *)(param_3 + 0x90) + 8) + 2) * 4) + 1)
                   ,*(undefined1 *)(param_4 + 0x49),param_4,&local_50,auStack_b0);
      uVar7 = FUN_0896fd08(auStack_f0,auStack_b0);
      FUN_0896fd88(uVar7);
      FUN_089720b0(fVar8,fVar9,*(undefined4 *)(param_3 + 0xa0),iVar6,&local_70);
      FUN_0896fe50();
    }
    FUN_089a0f84(0,0);
    FUN_089a119c(1);
  }
  return;
}

