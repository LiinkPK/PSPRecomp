/* Entry 0x0884CA90 | file offset 0x00049A68 | FUN_0884ca90 | bytes 1236 */

/* WARNING: Removing unreachable block (ram,0x0884ced4) */

void FUN_0884ca90(float param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  
  if ((0 < param_4) && (param_4 < 0x20)) {
    local_4c = param_2;
    local_48 = param_4;
    local_44 = param_5;
    local_3c = param_3;
    FUN_089a38e0(auStack_60,param_3,param_2);
    FUN_089a3bc8(auStack_80,auStack_60);
    FUN_089a3b30(auStack_70,auStack_80,param_5);
    local_50 = 0;
    local_40 = param_4 * 0x90;
    do {
      iVar2 = *(int *)(DAT_089d4d80 + 0x2810) + local_40;
      fVar4 = (float)FUN_089a3c18(local_4c,local_3c);
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      iVar3 = 0;
      iVar5 = (int)(fVar4 * (float)(int)((uint)*(byte *)(iVar2 + -0x8a) +
                                        ((DAT_09afb89c >> 0x10 & 0x7fffU) %
                                         ((uint)*(byte *)(iVar2 + -0x89) * 2 + 1) -
                                        (uint)*(byte *)(iVar2 + -0x89))));
      if (0 < iVar5) {
        do {
          iVar1 = FUN_0884c3f0(DAT_089d4d80);
          if (*(char *)(iVar2 + -0x84) == '\0') {
            DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
            fVar4 = (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05;
          }
          else {
            fVar4 = (float)iVar3 / (float)iVar5;
          }
          FUN_089a3a44(fVar4,auStack_a0,auStack_60);
          FUN_089a38a8(iVar1,local_4c,auStack_a0);
          FUN_089a3868(iVar1 + 0x20,iVar1);
          fVar4 = -*(float *)(iVar2 + -100);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44(*(float *)(iVar2 + -0x70) +
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                       (*(float *)(iVar2 + -100) - fVar4) + fVar4,auStack_90,local_44);
          fVar4 = -*(float *)(iVar2 + -0x6c);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44(*(float *)(iVar2 + -0x78) +
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                       (*(float *)(iVar2 + -0x6c) - fVar4) + fVar4,auStack_a0,auStack_70);
          FUN_089a38a8(auStack_90,auStack_90,auStack_a0);
          fVar4 = -*(float *)(iVar2 + -0x68);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44(*(float *)(iVar2 + -0x74) +
                       (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                       (*(float *)(iVar2 + -0x68) - fVar4) + fVar4,auStack_a0,auStack_80);
          FUN_089a38a8(auStack_90,auStack_90,auStack_a0);
          FUN_089a3bc8(auStack_90,auStack_90);
          fVar4 = -*(float *)(iVar2 + -0x5c);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          FUN_089a3a44(param_1 * (*(float *)(iVar2 + -0x60) +
                                 (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
                                 (*(float *)(iVar2 + -0x5c) - fVar4) + fVar4),iVar1 + 0x10,
                       auStack_90);
          fVar4 = -*(float *)(iVar2 + -0x7c);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          *(float *)(iVar1 + 0x30) =
               *(float *)(iVar2 + -0x80) +
               (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
               (*(float *)(iVar2 + -0x7c) - fVar4) + fVar4;
          fVar4 = (float)(int)-(uint)*(byte *)(iVar2 + -0x87);
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          *(float *)(iVar1 + 0x34) =
               (float)*(byte *)(iVar2 + -0x88) +
               (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
               ((float)*(byte *)(iVar2 + -0x87) - fVar4) + fVar4;
          *(char *)(iVar1 + 0x39) = (char)local_50;
          *(char *)(iVar1 + 0x38) = (char)local_48;
          DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
          *(byte *)(iVar1 + 0x3a) = (byte)((uint)DAT_09afb89c >> 0x10) & 3;
          *(int *)(iVar1 + 0x3c) = iVar2 + -0x90;
          FUN_0884c474(DAT_089d4d80,iVar1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar5);
      }
      local_50 = local_50 + 1;
      local_40 = local_40 + 0x48;
    } while (local_50 < 2);
  }
  return;
}

