/* Entry 0x08859844 | file offset 0x0005681C | FUN_08859844 | bytes 1304 */

void FUN_08859844(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  float local_1e0 [5];
  float local_1cc;
  float local_1c8;
  undefined1 auStack_1c0 [64];
  undefined1 auStack_180 [64];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100 [5];
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
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_50;
  int local_4c;
  
  if (((*(byte *)(*(int *)(param_1 + 0x2f8) + 8) & 1) != 0) &&
     (DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3, (DAT_09afb89c >> 0x10 & 0x7fffU) % 10 == 0))
  {
    FUN_089a3efc(auStack_1c0,param_1 + 0x330);
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    iVar5 = *(int *)(*(int *)(param_1 + 0x394) + 0xa4 +
                    *(int *)(&DAT_089c8dc4 + ((DAT_09afb89c >> 0x10 & 0x7fffU) % 6) * 4) * 4);
    iVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x394) + 0x84) + 8),iVar5);
    if (iVar1 != 0) {
      local_4c = param_1;
      uVar2 = FUN_089b1224();
      FUN_089a3efc(auStack_180,uVar2);
      if (**(int **)(param_1 + 0x394) == 0) {
        local_1e0[0] = 0.0;
      }
      else {
        local_1e0[0] = *(float *)(**(int **)(param_1 + 0x394) + iVar5 * 4);
      }
      local_1e0[1] = 0.0;
      local_1e0[2] = 0.0;
      local_1e0[3] = 1.0;
      local_50 = local_1e0[0];
      FUN_089a3f40(&local_d0,auStack_180,local_1e0);
      local_130 = local_d0;
      local_12c = local_cc;
      local_128 = local_c8;
      local_124 = local_c4;
      local_1f0 = local_d0;
      local_1ec = local_cc;
      local_1e8 = local_c8;
      local_1e4 = local_c4;
      FUN_089a3f40(&local_b0,auStack_1c0,&local_1f0);
      local_140 = local_b0;
      local_13c = local_ac;
      local_138 = local_a8;
      local_134 = local_a4;
      local_200 = local_b0;
      local_1fc = local_ac;
      local_1f8 = local_a8;
      pfVar6 = local_1e0 + 4;
      local_1f4 = local_a4;
      FUN_089a3868(pfVar6,&local_200);
      iVar1 = 0;
      iVar5 = local_4c + 0x80;
      do {
        DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
        local_100[1] = 0.0;
        local_100[2] = 0.0;
        local_100[3] = 1.0;
        local_100[0] = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * local_50;
        FUN_089a3f40(&local_90,auStack_180,local_100);
        local_e0 = local_90;
        local_dc = local_8c;
        local_d8 = local_88;
        local_d4 = local_84;
        local_110 = local_90;
        local_10c = local_8c;
        local_108 = local_88;
        local_104 = local_84;
        FUN_089a3f40(&local_70,auStack_1c0,&local_110);
        local_100[4] = (float)local_70;
        local_ec = local_6c;
        local_e8 = local_68;
        local_e4 = local_64;
        local_120 = local_70;
        local_11c = local_6c;
        local_118 = local_68;
        local_114 = local_64;
        FUN_089a3868(pfVar6,&local_120);
        iVar3 = DAT_09afb89c * 0x343fd + 0x269ec3;
        iVar4 = iVar3 * 0x343fd + 0x269ec3;
        DAT_09afb89c = iVar4 * 0x343fd + 0x269ec3;
        local_1e0[4] = (float)(iVar3 >> 0x10 & 0x7fff) * 3.051851e-05 * 0.8 + -0.4 + local_1e0[4];
        local_1cc = (float)(iVar4 >> 0x10 & 0x7fff) * 3.051851e-05 * 0.8 + -0.4 + local_1cc;
        local_1c8 = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 0.8 + -0.4 + local_1c8;
        FUN_089a38e0(pfVar6,pfVar6,iVar5);
        FUN_0885a1d8(0x41f00000,0x3e4ccccd,DAT_089d4dc8 + 0x6200,local_4c,pfVar6);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 1);
    }
  }
  return;
}

