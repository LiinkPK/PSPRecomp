/* Entry 0x0883AF80 | file offset 0x00037F58 | FUN_0883af80 | bytes 1264 */

void FUN_0883af80(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
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
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  
  fVar4 = (float)FUN_08838300();
  if (0.0 < fVar4) {
    local_100 = *(undefined4 *)(param_1 + 0x80);
    local_fc = *(undefined4 *)(param_1 + 0x84);
    local_f8 = *(undefined4 *)(param_1 + 0x88);
    local_b0 = local_100;
    local_ac = local_fc;
    local_a8 = local_f8;
    FUN_089a34c0(param_1 + 0x2e0,&local_100);
    FUN_089a3a44(*(undefined4 *)(param_1 + 0xec),&local_d0,param_1 + 0xe0);
    local_c4 = 0;
    iVar3 = param_1 + 0xf0;
    if (*(char *)(param_1 + 0x542) == '\x06') {
      FUN_089a38a8(&local_d0,&local_d0,param_1 + 0xb0);
    }
    else {
      iVar2 = FUN_08837948(param_1);
      if (iVar2 == 0) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x3a4) + 8);
        (**(code **)(iVar2 + 0x54))
                  (&local_90,*(int *)(param_1 + 0x3a4) + (int)*(short *)(iVar2 + 0x50),param_1);
        local_a0 = local_90;
        local_9c = local_8c;
        local_98 = local_88;
        local_94 = local_84;
        FUN_089a38a8(&local_d0,&local_d0,&local_a0);
      }
    }
    FUN_08832eb8(&local_80,param_1);
    local_f0 = local_80;
    local_ec = local_7c;
    local_e8 = local_78;
    local_e4 = local_74;
    FUN_089a38a8(&local_d0,&local_d0,&local_f0);
    FUN_08832244(&local_70,param_1);
    local_f0 = local_70;
    local_ec = local_6c;
    local_e8 = local_68;
    local_e4 = local_64;
    FUN_089a38a8(&local_d0,&local_d0,&local_f0);
    if (*(float *)(param_1 + 300) != 0.0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x544) + 0x134))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x130));
      fVar5 = fVar4;
      if (iVar2 != 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x544) + 0x134))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x130));
        fVar5 = (float)FUN_08838300(uVar6);
        if (fVar5 <= fVar4) {
          fVar5 = fVar4;
        }
      }
      FUN_089a3a64(*(float *)(param_1 + 300) * fVar5,auStack_60,param_1 + 0x120);
      iVar2 = FUN_088374b0(param_1);
      if (iVar2 == 0) {
        local_5c = 0;
      }
      iVar2 = FUN_08837458(param_1);
      if (iVar2 != 0) {
        FUN_089a3a64(0x3f000000,auStack_60,auStack_60);
      }
      sVar1 = *(short *)(param_1 + 0x180);
      iVar2 = FUN_0883739c(param_1);
      if ((((iVar2 != 1) || ((*(byte *)(param_1 + 0x5b8) & 0x40) == 0)) && (sVar1 != 0x2be)) &&
         (((sVar1 != 0x2bf && (sVar1 != 0x2c0)) &&
          ((sVar1 != 0x2f0 && ((sVar1 != 0x2f1 && (sVar1 != 0x2f2)))))))) {
        FUN_089a38a8(&local_d0,&local_d0,auStack_60);
      }
      FUN_089a3868(param_1 + 0x120,&DAT_09af84c0);
    }
    if (0.0 < *(float *)(param_1 + 0x31c)) {
      FUN_089a3890(&local_d0);
    }
    FUN_089a383c(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2d8),
                 *(undefined4 *)(param_1 + 0x2dc),0,&local_c0);
    local_b4 = 0x3f800000;
    iVar2 = FUN_088375d4(param_1);
    if (((iVar2 != 0) && (*(char *)(param_1 + 0x542) != '\x05')) &&
       (*(char *)(param_1 + 0x542) != '\x03')) {
      (**(code **)(*(int *)(param_1 + 0x544) + 0xac))
                (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xa8),&local_c0);
    }
    FUN_089a3868(iVar3,&local_d0);
    if (1.0 < fVar4) {
      FUN_089a3a44(1.0 / fVar4,iVar3,iVar3);
    }
    uVar6 = FUN_089a3bf8(iVar3);
    *(undefined4 *)(param_1 + 0xfc) = uVar6;
    local_f0 = local_d0;
    local_ec = local_cc;
    local_e8 = local_c8;
    local_e4 = local_c4;
    local_e0 = local_c0;
    local_dc = local_bc;
    local_d8 = local_b8;
    local_d4 = local_b4;
    FUN_0883b470(param_1,&local_f0,&local_e0);
    FUN_089a34e0(param_1 + 0x2d4);
  }
  return;
}

