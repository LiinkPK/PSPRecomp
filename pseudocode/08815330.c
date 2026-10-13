/* Entry 0x08815330 | file offset 0x00012308 | FUN_08815330 | bytes 620 */

void FUN_08815330(int param_1)

{
  int iVar1;
  short *psVar2;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
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
  undefined4 local_a4;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  if (*(code **)(param_1 + 0x538) == (code *)0x0) {
    if ((*(int *)(param_1 + 0x5f4) == 0) || (iVar1 = FUN_0881f300(), iVar1 != 1)) {
      FUN_089a3efc(auStack_60,param_1 + 0x40);
      if (*(float *)(param_1 + 0x550) != 0.0) {
        FUN_089a4180(auStack_60,auStack_60);
      }
      if (*(float *)(param_1 + 0x554) != 0.0) {
        FUN_089a4124(auStack_60,auStack_60);
      }
      if (*(float *)(param_1 + 0x558) != 0.0) {
        FUN_089a40c8(auStack_60,auStack_60);
      }
      FUN_089a4094(param_1,auStack_60,param_1 + 0x80);
      psVar2 = (short *)(*(int *)(param_1 + 0x544) + 0xf0);
    }
    else {
      FUN_089a3efc(auStack_a0,param_1 + 0x40);
      FUN_0881f36c(*(undefined4 *)(param_1 + 0x5f4),auStack_a0);
      FUN_0881f388(*(undefined4 *)(param_1 + 0x5f4),auStack_a0);
      if (*(float *)(param_1 + 0x550) != 0.0) {
        FUN_089a4180(auStack_a0,auStack_a0);
      }
      if (*(float *)(param_1 + 0x554) != 0.0) {
        FUN_089a4124(auStack_a0,auStack_a0);
      }
      if (*(float *)(param_1 + 0x558) != 0.0) {
        FUN_089a40c8(auStack_a0,auStack_a0);
      }
      FUN_0881f3a4(*(undefined4 *)(param_1 + 0x5f4),auStack_a0);
      FUN_089a4094(auStack_a0,auStack_a0,param_1 + 0x80);
      FUN_0881f3c0(*(undefined4 *)(param_1 + 0x5f4),auStack_a0);
      FUN_089a3efc(param_1,auStack_a0);
      psVar2 = (short *)(*(int *)(param_1 + 0x544) + 0xf0);
    }
  }
  else {
    (**(code **)(param_1 + 0x538))(&local_e0,param_1);
    local_120 = local_e0;
    local_11c = local_dc;
    local_118 = local_d8;
    local_114 = local_d4;
    local_110 = local_d0;
    local_10c = local_cc;
    local_108 = local_c8;
    local_104 = local_c4;
    local_100 = local_c0;
    local_fc = local_bc;
    local_f8 = local_b8;
    local_f4 = local_b4;
    local_f0 = local_b0;
    local_ec = local_ac;
    local_e8 = local_a8;
    local_e4 = local_a4;
    FUN_089a3efc(param_1,&local_120);
    psVar2 = (short *)(*(int *)(param_1 + 0x544) + 0xf0);
  }
  (**(code **)(psVar2 + 2))(param_1 + *psVar2);
  return;
}

