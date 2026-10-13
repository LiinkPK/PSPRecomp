/* Entry 0x08920D18 | file offset 0x0011DCF0 | FUN_08920d18 | bytes 1044 */

void FUN_08920d18(uint *param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
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
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0892112c();
  if ((*param_1 & 1) != 0) {
    uVar1 = param_1[3];
    fVar3 = *(float *)(uVar1 + 0x14);
    if (fVar3 < *(float *)(uVar1 + 0x1c)) {
      *(float *)(uVar1 + 0x14) = fVar3 + 1.0;
    }
    else if (fVar3 < *(float *)(uVar1 + 0x18) - 1.0) {
      FUN_089a3680(0x3f800000,&local_7c,uVar1 + 0x2c);
      local_e0 = local_7c;
      local_dc = local_78;
      local_d8 = local_74;
      local_100 = local_7c;
      local_fc = local_78;
      local_f8 = local_74;
      FUN_089a34f4(uVar1 + 0x20,uVar1 + 0x20,&local_100);
      iVar2 = param_1[3] + 0x2c;
      FUN_089a3680(0x3f800000,&local_64,param_1[3] + 0x38);
      local_d4 = local_64;
      local_d0 = local_60;
      local_cc = local_5c;
      local_100 = local_64;
      local_fc = local_60;
      local_f8 = local_5c;
      FUN_089a34f4(iVar2,iVar2,&local_100);
      uVar1 = param_1[3];
      local_f0 = *(undefined4 *)(uVar1 + 0x2c);
      local_ec = *(undefined4 *)(uVar1 + 0x30);
      local_e8 = *(undefined4 *)(uVar1 + 0x34);
      local_e4 = 0x3f800000;
      FUN_08835ba4(*(undefined4 *)(uVar1 + 4),&local_f0);
      uVar1 = param_1[3];
      local_100 = *(undefined4 *)(uVar1 + 0x20);
      local_fc = *(undefined4 *)(uVar1 + 0x24);
      local_f8 = *(undefined4 *)(uVar1 + 0x28);
      FUN_08921d74(param_1,&local_100);
      *(float *)(param_1[3] + 0x14) = *(float *)(param_1[3] + 0x14) + 1.0;
    }
    else if (fVar3 < *(float *)(uVar1 + 0x18)) {
      FUN_089a3680(0x3f800000,&local_4c,uVar1 + 0x2c);
      local_a0 = local_4c;
      local_9c = local_48;
      local_98 = local_44;
      local_c8 = local_4c;
      local_c4 = local_48;
      local_c0 = local_44;
      FUN_089a34f4(uVar1 + 0x20,uVar1 + 0x20,&local_c8);
      iVar2 = param_1[3] + 0x2c;
      FUN_089a3680(0x3f800000,&local_34,param_1[3] + 0x38);
      local_94 = local_34;
      local_90 = local_30;
      local_8c = local_2c;
      local_c8 = local_34;
      local_c4 = local_30;
      local_c0 = local_2c;
      FUN_089a34f4(iVar2,iVar2,&local_c8);
      uVar1 = param_1[3];
      local_b0 = *(undefined4 *)(uVar1 + 0x2c);
      local_ac = *(undefined4 *)(uVar1 + 0x30);
      local_a8 = *(undefined4 *)(uVar1 + 0x34);
      local_a4 = 0x3f800000;
      FUN_08835ba4(*(undefined4 *)(uVar1 + 4),&local_b0);
      uVar1 = param_1[3];
      local_c8 = *(undefined4 *)(uVar1 + 0x20);
      local_c4 = *(undefined4 *)(uVar1 + 0x24);
      local_c0 = *(undefined4 *)(uVar1 + 0x28);
      FUN_08921d74(param_1,&local_c8);
      *(float *)(param_1[3] + 0x14) = *(float *)(param_1[3] + 0x14) + 1.0;
      if ((*param_1 & 4) == 0) {
        *param_1 = *param_1 & 0xfffffffd;
      }
    }
    else {
      FUN_0882fac4(0x41000000,0,*(int *)(uVar1 + 4) + 0x130,0x66,0);
      FUN_0882fb90(0x41000000,0,*(int *)(param_1[3] + 4) + 0x130,*(undefined4 *)(param_1[3] + 0x4c))
      ;
      uVar1 = *param_1;
      *param_1 = uVar1 & 0xfffffffe;
      *param_1 = uVar1 & 0xfffffffc;
      *param_1 = uVar1 & 0xfffffff8;
      FUN_089212f4(param_1);
      FUN_08921dc0(param_1);
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      FUN_089a34c0(param_1[3] + 0x2c,&local_88);
    }
  }
  return;
}

