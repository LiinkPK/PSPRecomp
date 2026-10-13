/* Entry 0x08960478 | file offset 0x0015D450 | FUN_08960478 | bytes 972 */

void FUN_08960478(int param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  
  local_34 = param_2;
  uVar5 = FUN_089a04c4(1);
  FUN_089a03dc(1);
  FUN_089a03dc(2);
  FUN_089a03dc(5);
  FUN_089a12a4(0,6,7,0,0);
  FUN_089a0384(9);
  iVar6 = *(int *)(param_2 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                 *(int *)(*(int *)(param_2 + 0x90) + 4) * 2);
  puVar2 = (undefined8 *)(iVar6 + 0x68);
  auVar1 = vmul_q(*(undefined1 (*) [16])(iVar6 + 0x60),
                  *(undefined1 (*) [16])(*(int *)(param_2 + 0x88) + 0x40));
  vpfxt(0,0,0,0);
  auVar3._4_8_ = *puVar2;
  auVar3._0_4_ = 0x437f0000;
  auVar3._12_4_ = 0;
  auVar1 = vmax_q(auVar1,auVar3 << 0x20);
  vpfxt(1,1,1,1);
  auVar4._4_8_ = *puVar2;
  auVar4._0_4_ = 0x437f0000;
  auVar4._12_4_ = 0;
  auVar1 = vmin_q(auVar1,auVar4 << 0x20);
  FUN_089a0c8c((int)auVar1._8_4_ << 0x10 | (int)auVar1._12_4_ << 0x18 | (int)auVar1._0_4_ |
               (int)auVar1._4_4_ << 8);
  FUN_0896fbf4();
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_089a04f4(2,&local_90);
  iVar6 = *(int *)(param_2 + 0xac);
  *(undefined4 *)(iVar6 + 0x40) = 1;
  FUN_08973714(iVar6,1);
  FUN_0897371c(iVar6,1,1,1,1);
  FUN_089a05f0(4,0x183,*(int *)(param_1 + 0xc) * 2,*(int *)(param_1 + 8) + -1,0,
               *(undefined4 *)(param_1 + *(int *)(param_1 + 0x18) * 4 + 0x10));
  *(int *)(param_1 + 0x18) = 1 - *(int *)(param_1 + 0x18);
  local_30 = uVar5;
  if (*(char *)(param_3 + 0xf) != '\0') {
    local_38 = param_3;
    FUN_089a0c8c(0x80808080);
    FUN_089a12a4(0,10,10,0x80ffffff,0);
    local_3c = *(undefined4 *)(iVar6 + 0x18);
    uVar5 = *(undefined4 *)(iVar6 + 0x28);
    iVar7 = 0;
    iVar9 = (int)(*(int *)(iVar6 + 0x14) + ((uint)(*(int *)(iVar6 + 0x14) >> 2) >> 0x1e)) >> 2;
    iVar8 = (int)(*(int *)(iVar6 + 0x24) + ((uint)(*(int *)(iVar6 + 0x24) >> 2) >> 0x1e)) >> 2;
    if (*(char *)(param_3 + 0xf) != '\0') {
      do {
        FUN_08973714(iVar6,1);
        FUN_0897371c(iVar6,1,1,1,1);
        FUN_089a0930(iVar8,uVar5,iVar9,local_3c);
        FUN_089a094c(0,0,0,0,0,0,0);
        FUN_089a094c(iVar9,0,0,iVar8,0,0,0);
        FUN_089a094c(iVar9 * 2,0,0,iVar8 * 2,0,0,0);
        FUN_089a094c(iVar9 * 3,0,0,iVar8 * 3,0,0,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uint)*(byte *)(local_38 + 0xf));
    }
  }
  iVar6 = local_34;
  FUN_0896fbc0();
  FUN_089a0438(1,local_30);
  *(undefined4 *)(*(int *)(iVar6 + 0xa4) + 0x18) = 0xfffffffe;
  return;
}

