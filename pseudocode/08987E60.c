/* Entry 0x08987E60 | file offset 0x00184E38 | FUN_08987e60 | bytes 1412 */

void FUN_08987e60(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 *local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined1 *local_50;
  
  uVar9 = *(uint *)(*(int *)(*(int *)(param_2 + 0x8c) +
                             (uint)*(ushort *)
                                    (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                                    (*(int *)(*(int *)(param_2 + 0x90) + 4) +
                                    *(int *)(param_1 + 0xbc)) * 2) + 0x60) + 0x14);
  FUN_089a3a44(0x3c000000,auStack_100,param_1 + 0x70);
  FUN_089a3a44(0x3c000000,auStack_f0,param_1 + 0x80);
  FUN_089a3918(&local_e0,auStack_100,param_1 + 0x50);
  FUN_089a3918(auStack_c0,auStack_f0,param_1 + 0x50);
  iVar7 = *(int *)(param_1 + 0xb4);
  FUN_089a3a44(0x3c000000,&local_e0,&local_e0);
  iVar6 = 0x9b70000;
  FUN_089a3918(&local_e0,
               *(int *)(DAT_09b6f478 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + iVar7) * 2) + 0x60,&local_e0);
  FUN_089a4aac(0,0x437f0000,&local_e0,&local_e0);
  iVar7 = *(int *)(param_1 + 0xb4);
  FUN_089a3a44(0x3c000000,auStack_c0,auStack_c0);
  FUN_089a3918(auStack_c0,
               *(int *)(DAT_09b6f478 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                      (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + iVar7) * 2) + 0x60,auStack_c0);
  FUN_089a4aac(0,0x437f0000,auStack_c0,auStack_c0);
  fVar11 = (float)(int)uVar9;
  puVar4 = auStack_a0;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_50 = auStack_a0;
    FUN_089a3918(&local_d0,auStack_100,param_1 + 0x60);
    FUN_089a3918(auStack_b0,auStack_f0,param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0xb4);
    FUN_089a3a44(0x3c000000,&local_d0,&local_d0);
    FUN_089a3918(&local_d0,
                 *(int *)(DAT_09b6f478 + 0x8c) +
                 (uint)*(ushort *)
                        (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                        (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + iVar7) * 2) + 0x60,&local_d0)
    ;
    FUN_089a4aac(0,0x437f0000,&local_d0,&local_d0);
    iVar7 = *(int *)(param_1 + 0xb4);
    FUN_089a3a44(0x3c000000,auStack_b0,auStack_b0);
    FUN_089a3918(auStack_b0,
                 *(int *)(DAT_09b6f478 + 0x8c) +
                 (uint)*(ushort *)
                        (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 8) +
                        (*(int *)(*(int *)(DAT_09b6f478 + 0x90) + 4) + iVar7) * 2) + 0x60,auStack_b0
                );
    FUN_089a4aac(0,0x437f0000,auStack_b0,auStack_b0);
    puVar4 = local_50;
  }
  FUN_089a38e0(puVar4,auStack_c0,&local_e0);
  FUN_089a3a44(1.0 / fVar11,puVar4,puVar4);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_089a38e0(auStack_90,auStack_b0,&local_d0);
    FUN_089a3a44(1.0 / fVar11,auStack_90,auStack_90);
  }
  iVar7 = *(int *)(param_1 + 0x18);
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      fVar10 = *(float *)(param_1 + 0xe4);
      goto LAB_089881e8;
    }
    local_80[1] = &local_70;
    iVar6 = 2;
  }
  else if (iVar7 < 2) {
    local_80[2] = &local_70;
    local_80[1] = &local_60;
    iVar6 = 3;
  }
  else {
    if (2 < iVar7) {
      fVar10 = *(float *)(param_1 + 0xe4);
      goto LAB_089881e8;
    }
    local_80[3] = &local_70;
    local_80[1] = &local_60;
    iVar6 = 4;
    local_80[2] = local_80[1];
  }
  local_80[0] = &local_70;
  fVar10 = *(float *)(param_1 + 0xe4);
LAB_089881e8:
  if (fVar11 * (fVar10 / 100.0) < 2.1474836e+09) {
    uVar2 = (uint)(fVar11 * (*(float *)(param_1 + 0xe4) / 100.0));
  }
  else {
    uVar2 = (int)(fVar11 * (*(float *)(param_1 + 0xe4) / 100.0) - 2.1474836e+09) + 0x80000000;
  }
  fVar11 = 0.0;
  fVar10 = 1.0;
  if (uVar9 < uVar2) {
    fVar11 = (float)(int)uVar9;
    if ((int)uVar9 < 0) {
      fVar11 = fVar11 + 4.2949673e+09;
    }
    fVar11 = 1.0 / fVar11;
    fVar10 = 0.0;
  }
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    iVar7 = 0x18;
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 8);
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 0x1c);
    iVar7 = 0x10;
  }
  iVar8 = 0;
  if (0 < (int)uVar9) {
    do {
      local_70 = local_e0;
      local_64 = local_d4 * fVar10;
      local_6c = local_dc;
      local_68 = local_d8;
      FUN_089a38a8(&local_e0,&local_e0,auStack_a0);
      if (*(int *)(param_1 + 0x18) != 0) {
        local_60 = local_d0;
        local_54 = local_c4 * fVar10;
        local_5c = local_cc;
        local_58 = local_c8;
        FUN_089a38a8(&local_d0,&local_d0,auStack_90);
      }
      iVar3 = 0;
      fVar10 = fVar10 + fVar11;
      puVar4 = auStack_100;
      if (iVar6 != 0) {
        do {
          auVar1 = vf2iz_q(**(undefined1 (**) [16])(puVar4 + 0x80),0x17);
          uVar12 = vi2uc_q(auVar1);
          *puVar5 = uVar12;
          puVar5 = (undefined4 *)((int)puVar5 + iVar7);
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 4;
        } while (iVar3 < iVar6);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)uVar9);
  }
  return;
}

