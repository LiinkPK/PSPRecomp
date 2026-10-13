/* Entry 0x0884AD14 | file offset 0x00047CEC | FUN_0884ad14 | bytes 1084 */

/* WARNING: Removing unreachable block (ram,0x0884ae74) */

void FUN_0884ad14(float param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  
  if ((0 < param_4) && (param_4 < 0x20)) {
    if (param_4 == 0x1e) {
      FUN_0884b150(param_1,param_2,param_3,0x1e,param_5);
    }
    else {
      local_58 = (int)(param_1 * 40.0);
      if (0x1d < local_58) {
        local_58 = 0x1e;
      }
      local_4c = 0;
      if (0 < local_58) {
        local_5c = param_4 * 2;
        local_60 = param_5;
        local_54 = param_4;
        local_50 = param_3;
        do {
          iVar2 = DAT_09afb89c * 0x343fd + 0x269ec3;
          uVar4 = iVar2 >> 0x10 & 1;
          iVar2 = iVar2 * 0x343fd + 0x269ec3;
          iVar3 = iVar2 * 0x343fd + 0x269ec3;
          DAT_09afb89c = iVar3 * 0x343fd + 0x269ec3;
          FUN_089a383c((float)(iVar2 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0,
                       (float)(iVar3 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0,
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0,0,
                       auStack_a0);
          uVar1 = local_60;
          FUN_089a3b30(auStack_a0,local_60,auStack_a0);
          FUN_089a3bc8(auStack_a0,auStack_a0);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44((float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * param_1,auStack_b0,
                       auStack_a0);
          FUN_089a38a8(auStack_b0,auStack_b0,local_50);
          FUN_089a3868(auStack_90,auStack_a0);
          FUN_089a3b30(auStack_80,uVar1,auStack_90);
          iVar2 = *(int *)(DAT_089d4d80 + 0x2810) + (local_5c + uVar4) * 0x48;
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          fVar5 = -*(float *)(iVar2 + -100);
          local_48 = uVar4;
          FUN_089a3a44(*(float *)(iVar2 + -0x70) +
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                       (*(float *)(iVar2 + -100) - fVar5) + fVar5,auStack_70,uVar1);
          fVar5 = -*(float *)(iVar2 + -0x6c);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44(*(float *)(iVar2 + -0x78) +
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                       (*(float *)(iVar2 + -0x6c) - fVar5) + fVar5,auStack_a0,auStack_80);
          FUN_089a38a8(auStack_70,auStack_70,auStack_a0);
          fVar5 = -*(float *)(iVar2 + -0x68);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44(*(float *)(iVar2 + -0x74) +
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                       (*(float *)(iVar2 + -0x68) - fVar5) + fVar5,auStack_a0,auStack_90);
          FUN_089a38a8(auStack_70,auStack_70,auStack_a0);
          FUN_089a3bc8(auStack_70,auStack_70);
          FUN_0884aaa0(param_2,auStack_b0,auStack_70,local_48,local_54,1);
          local_4c = local_4c + 1;
        } while (local_4c < local_58);
      }
    }
  }
  return;
}

