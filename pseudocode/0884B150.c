/* Entry 0x0884B150 | file offset 0x00048128 | FUN_0884b150 | bytes 776 */

/* WARNING: Removing unreachable block (ram,0x0884b248) */

void FUN_0884b150(float param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_f0 [4];
  undefined4 local_ec;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  
  local_60 = (int)(param_1 * 40.0);
  if (0x1d < local_60) {
    local_60 = 0x1e;
  }
  iVar4 = 0;
  if (0 < local_60) {
    local_50 = 0x343fd;
    local_5c = param_1;
    local_58 = param_2;
    local_54 = param_4;
    do {
      iVar1 = DAT_09afb89c * local_50 + 0x269ec3;
      iVar2 = iVar1 * local_50 + 0x269ec3;
      iVar3 = iVar2 * local_50 + 0x269ec3;
      DAT_09afb89c = iVar3 * local_50 + 0x269ec3;
      FUN_089a383c((float)(iVar2 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0,
                   (float)(iVar3 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0,
                   (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0,0,auStack_e0);
      FUN_089a3b30(auStack_e0,param_5,auStack_e0);
      FUN_089a3bc8(auStack_e0,auStack_e0);
      FUN_089a3a44(local_5c,auStack_f0,auStack_e0);
      FUN_089a38a8(auStack_f0,auStack_f0,param_3);
      FUN_089a3868(auStack_d0,auStack_e0);
      FUN_089a3b30(auStack_c0,param_5,auStack_d0);
      FUN_089a38e0(&local_80,auStack_f0,param_3);
      local_90 = local_80;
      local_9c = local_7c;
      local_a0 = local_80;
      local_98 = local_78;
      local_94 = local_74;
      FUN_089a3868(auStack_e0,&local_a0);
      FUN_089a3bc8(auStack_e0,auStack_e0);
      FUN_089a3a44(0x3e800000,auStack_b0,auStack_e0);
      FUN_089a38a8(auStack_b0,auStack_b0,param_5);
      FUN_089a3bc8(auStack_b0,auStack_b0);
      local_ec = *(undefined4 *)(param_3 + 4);
      FUN_0884aaa0(local_58,auStack_f0,auStack_b0,iVar1 >> 0x10 & 1,local_54,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_60);
  }
  return;
}

