/* Entry 0x089896C4 | file offset 0x0018669C | FUN_089896c4 | bytes 1112 */

void FUN_089896c4(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 local_80 [12];
  undefined1 local_70 [12];
  undefined1 auStack_60 [16];
  float local_50;
  int local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  int local_34;
  
  if (*(char *)(param_2 + 0xbb) == '\0') {
    local_40 = (int *)(param_1 + 0x68);
  }
  else {
    local_40 = (int *)(param_1 + 0x68);
    if (*(char *)(param_2 + 0xbd) != '\0') {
      local_40 = (int *)(param_1 + 0x70);
    }
  }
  local_40[1] = 0;
  uVar10 = vone_s();
  auVar2._12_4_ = uVar10;
  auVar2._8_4_ = DAT_089da358;
  auVar2._4_4_ = DAT_089da354;
  auVar2._0_4_ = DAT_089da350;
  auVar2 = vtfm4_q(**(undefined1 (**) [64])(*(int *)(DAT_09b6f478 + 0x8c) + 0x50),auVar2);
  local_a0 = auVar2._0_4_;
  uStack_9c = auVar2._4_4_;
  uStack_98 = auVar2._8_4_;
  uStack_94 = auVar2._12_4_;
  local_34 = 0;
  if ((*(char *)(param_2 + 0xc4) == '\0') || (*(char *)(param_2 + 0xc5) != '\0')) {
    local_34 = 1;
  }
  local_3c = param_2;
  if (local_34 != 0) {
    iVar7 = local_40[1];
    local_40[1] = iVar7 + 1;
    FUN_089a3868(*local_40 + iVar7 * 0x10,&DAT_089da350);
  }
  iVar7 = **(int **)(param_1 + 0xc);
  (**(code **)(iVar7 + 0x1c))((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar7 + 0x18));
  iVar7 = **(int **)(param_1 + 0x60);
  local_48 = 0;
  (**(code **)(iVar7 + 0x34))((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar7 + 0x30));
  iVar7 = **(int **)(param_1 + 0xc);
  piVar4 = (int *)(**(code **)(iVar7 + 0x1c))
                            ((int)*(int **)(param_1 + 0xc) + (int)*(short *)(iVar7 + 0x18));
  iVar7 = 0;
  local_38 = piVar4;
  if (0 < piVar4[8]) {
    local_44 = local_40 + 1;
    puVar9 = &local_a0;
    do {
      puVar8 = (undefined1 *)*piVar4;
      if (*(int *)(puVar8 + 0x10) == 1) {
        FUN_089a38e0(auStack_90,puVar9,puVar8);
        FUN_089a38c4(auStack_90,puVar9,auStack_90);
        FUN_089a3868(puVar8,auStack_90);
      }
      if (*(char *)(local_3c + 0xb3) != '\0') {
        uVar10 = *(undefined4 *)(local_3c + 0x50);
        FUN_089a38e0(auStack_60,puVar8,puVar9);
        FUN_089a3bc8(auStack_60,auStack_60);
        FUN_089a3a44(uVar10,auStack_60,auStack_60);
        FUN_089a38c4(auStack_90,puVar9,auStack_60);
        FUN_089a3868(puVar8,auStack_90);
      }
      FUN_089a38fc(local_80,puVar9,&local_a0);
      FUN_089a38fc(local_70,puVar8,&local_a0);
      piVar3 = local_40;
      if (local_48 == 0 && local_34 == 0) {
        iVar6 = *local_44;
        iVar5 = *local_40;
        *local_44 = iVar6 + 1;
        FUN_089a3868(iVar5 + iVar6 * 0x10,local_70);
      }
      else {
        auVar1 = vsub_t(local_70,local_80);
        uVar10 = vdot_t(auVar1,auVar1);
        local_50 = (float)vsqrt_s(uVar10);
        FUN_08988dec(local_50 / *(float *)(local_3c + 0x5c),param_1,local_40,local_80,local_70,
                     *(undefined1 *)(local_3c + 0xb6));
        iVar5 = *piVar3;
        iVar6 = *local_44;
        *local_44 = iVar6 + 1;
        FUN_089a3868(iVar5 + iVar6 * 0x10,local_70);
        iVar5 = **(int **)(param_1 + 0x60);
        (**(code **)(iVar5 + 0x2c))
                  ((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar5 + 0x28),local_70);
      }
      iVar7 = iVar7 + 1;
      local_48 = local_48 + 1;
      piVar4 = piVar4 + 1;
      puVar9 = (undefined4 *)puVar8;
    } while (iVar7 < local_38[8]);
  }
  if ((*(char *)(local_3c + 0xbb) != '\0') && (*(char *)(local_3c + 0xbd) != '\0')) {
    if (*(int *)(param_1 + 0x6c) == 0) {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x74)) {
        iVar5 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x6c);
          *(int *)(param_1 + 0x6c) = iVar6 + 1;
          FUN_089a3868(*(int *)(param_1 + 0x68) + iVar6 * 0x10,*(int *)(param_1 + 0x70) + iVar5);
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar7 < *(int *)(param_1 + 0x74));
      }
    }
    else if (0 < *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c)) {
      iVar7 = 0;
      if (0 < *(int *)(param_1 + 0x74)) {
        iVar5 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x6c);
          *(int *)(param_1 + 0x6c) = iVar6 + 1;
          FUN_089a3868(*(int *)(param_1 + 0x68) + iVar6 * 0x10,*(int *)(param_1 + 0x70) + iVar5);
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 0x10;
        } while (iVar7 < *(int *)(param_1 + 0x74));
      }
    }
  }
  return;
}

