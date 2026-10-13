/* Entry 0x08919500 | file offset 0x001164D8 | FUN_08919500 | bytes 1300 */

void FUN_08919500(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_830 [16];
  undefined1 auStack_820 [1892];
  undefined1 local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
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
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [4];
  int local_38;
  uint local_34;
  
  local_38 = FUN_0891705c(0xffffffff);
  uVar5 = (uint)((*(uint *)(local_38 + 0x260) & 4) != 0);
  iVar9 = 0;
  iVar8 = 0;
  iVar6 = param_1;
  do {
    if (-1 < *(int *)(iVar6 + 0x6f4)) {
      local_34 = uVar5;
      iVar1 = FUN_088470b8(*(int *)(iVar6 + 0x6f4));
      iVar2 = FUN_08831320(0x12d0);
      iVar4 = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_088729a0(1);
        func_0x08b39e5c(iVar2,uVar3,iVar1,*(undefined4 *)(param_1 + 0x714),0);
        iVar4 = iVar2;
      }
      iVar2 = *(int *)(param_1 + 0x714);
      *(int *)(iVar6 + 0x704) = iVar4;
      *(int *)(param_1 + 0x714) = iVar2 + 1;
      FUN_088cb9e8(auStack_830);
      FUN_088cba10(auStack_830);
      FUN_088cba54(auStack_830,(int)*(char *)(iVar1 + 6));
      iVar4 = FUN_0890f3f8((int)*(char *)(iVar1 + 6));
      uVar3 = FUN_088bca50((int)*(short *)(iVar4 + 2));
      FUN_088bc17c(uVar3,auStack_820);
      local_bc = *(undefined1 *)(iVar1 + 7);
      iVar4 = *(int *)(*(int *)(iVar6 + 0x704) + 0x544);
      (**(code **)(iVar4 + 0x104))
                (*(int *)(iVar6 + 0x704) + (int)*(short *)(iVar4 + 0x100),auStack_830,0);
      uVar5 = local_34;
      iVar2 = (int)*(short *)(*(int *)(param_1 + 0x3c) + 0x2c + iVar8);
      iVar4 = (int)*(short *)(*(int *)(param_1 + 0x3c) + 0x34 + iVar8);
      if ((iVar2 == 0) && (iVar4 == 0)) {
        iVar4 = *(int *)(param_1 + 0x6d0);
        local_b0 = *(undefined4 *)(iVar4 + 0x80);
        local_ac = *(undefined4 *)(iVar4 + 0x84);
        local_a8 = *(undefined4 *)(iVar4 + 0x88);
        local_a4 = *(undefined4 *)(iVar4 + 0x8c);
        FUN_088359a8(*(undefined4 *)(iVar6 + 0x704),&local_b0,1);
        iVar4 = *(int *)(iVar6 + 0x704);
      }
      else {
        local_8c = 0;
        local_90 = (float)iVar2;
        local_84 = 0;
        local_88 = (float)iVar4;
        FUN_08899780(0x41a00000,&local_80,&local_90);
        local_a0 = local_80;
        local_9c = local_7c;
        local_98 = (float)local_78;
        local_94 = local_74;
        FUN_089a3868(&local_90,&local_a0);
        local_a0 = local_90;
        local_9c = local_8c;
        local_98 = local_88;
        local_94 = local_84;
        FUN_088359a8(*(undefined4 *)(iVar6 + 0x704),&local_a0,1);
        iVar4 = *(int *)(iVar6 + 0x704);
      }
      *(uint *)(iVar4 + 0x380) = *(uint *)(iVar4 + 0x380) & 0xfffffffd;
      func_0x08b2f2e4(*(undefined4 *)(iVar6 + 0x704),5);
      func_0x08a6419c(*(undefined4 *)(*(int *)(iVar6 + 0x704) + 0x5c4),
                      (int)*(short *)(*(int *)(param_1 + 0x3c) + 0x24 + iVar8));
      func_0x08a640cc(*(undefined4 *)(*(int *)(iVar6 + 0x704) + 0x5c4),7);
      func_0x08a64100(*(undefined4 *)(*(int *)(iVar6 + 0x704) + 0x5c4),10);
      uVar7 = *(undefined4 *)(iVar6 + 0x704);
      uVar3 = FUN_08916fa0();
      FUN_08836da4(uVar7,uVar3);
      func_0x08b34e00(*(undefined4 *)(iVar6 + 0x704));
      FUN_0882fa10(0,0,*(int *)(iVar6 + 0x704) + 0x130,1,0);
      iVar4 = *(int *)(iVar6 + 0x704);
      *(uint *)(iVar4 + 0x38c) = *(uint *)(iVar4 + 0x38c) | 0x20;
      *(undefined4 *)(iVar4 + 0x388) = *(undefined4 *)(iVar4 + 0x388);
      *(byte *)(*(int *)(iVar6 + 0x704) + 0x5b7) = *(byte *)(*(int *)(iVar6 + 0x704) + 0x5b7) | 8;
      if (uVar5 != 0) {
        FUN_0891297c(local_38,iVar9,&local_60,&local_50,&local_40,local_3c);
        local_70 = local_60;
        local_6c = local_5c;
        local_68 = local_58;
        local_64 = local_54;
        FUN_088359a8(*(undefined4 *)(iVar6 + 0x704),&local_70,1);
        local_70 = local_50;
        local_6c = local_4c;
        local_68 = local_48;
        local_64 = local_44;
        FUN_08835ba4(*(undefined4 *)(iVar6 + 0x704),&local_70);
        func_0x08a6419c(*(undefined4 *)(*(int *)(iVar6 + 0x704) + 0x5c4),local_40);
        if (local_3c[0] != '\0') {
          iVar4 = *(int *)(*(int *)(iVar6 + 0x704) + 0x544);
          (**(code **)(iVar4 + 0x164))(*(int *)(iVar6 + 0x704) + (int)*(short *)(iVar4 + 0x160));
        }
      }
      iVar4 = *(int *)(*(int *)(iVar6 + 0x704) + 0x5ac);
      *(undefined4 *)(iVar4 + 0x100) = 1;
      func_0x08b3b310(iVar4,0);
      *(undefined1 *)(iVar4 + 0x126) = 0;
      func_0x08b3b5ec(iVar4,5);
      if ((int)*(char *)(iVar1 + 6) == *(int *)(param_1 + 0x5c)) {
        iVar4 = *(int *)(*(int *)(iVar6 + 0x704) + 0x544);
        (**(code **)(iVar4 + 0x164))(*(int *)(iVar6 + 0x704) + (int)*(short *)(iVar4 + 0x160));
      }
    }
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 4;
    iVar8 = iVar8 + 2;
  } while (iVar9 < 4);
  if (uVar5 != 0) {
    *(undefined4 *)(local_38 + 0x264) = *(undefined4 *)(local_38 + 0x264);
    *(uint *)(local_38 + 0x260) = *(uint *)(local_38 + 0x260) & 0xfffffffb;
  }
  return;
}

