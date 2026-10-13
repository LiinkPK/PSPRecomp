/* Entry 0x08826718 | file offset 0x000236F0 | FUN_08826718 | bytes 1256 */

/* WARNING: Removing unreachable block (ram,0x08826958) */

void FUN_08826718(float param_1,int param_2)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_a0 [16];
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  float local_70 [3];
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  iVar4 = FUN_08822d30();
  if ((iVar4 != 0) &&
     (iVar4 = 0, 0 < (int)(((*(uint *)(param_2 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80))) {
    iVar8 = 0;
    do {
      if (((((*(byte *)(*(int *)(param_2 + 0x28) + iVar8 + 299) & 2) == 0) &&
           ((*(byte *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3f) != 1)) &&
          (*(float *)(*(int *)(param_2 + 0x28) + iVar8 + 0x124) != 3.4028235e+38)) &&
         ((*(byte *)(*(int *)(param_2 + 0x28) + iVar8 + 299) & 4) != 0)) {
        iVar6 = 0;
        uVar5 = 0;
        if ((*(byte *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3f) != 0) {
          iVar7 = *(int *)(param_2 + 0x28);
          while( true ) {
            iVar7 = *(int *)(param_2 + 0x2c) +
                    (((int)*(char *)(iVar7 + iVar8 + 0x129) & 0x7fU) + iVar6) * 0x80;
            if ((*(float *)(iVar7 + 0x78) == 3.4028235e+38) ||
               (*(float *)(*(int *)(param_2 + 0x28) + iVar8 + 0x124) - 1.5 <=
                *(float *)(iVar7 + 0x78))) {
              *(byte *)(iVar7 + 0x7f) = *(byte *)(iVar7 + 0x7f) | 2;
            }
            else {
              uVar5 = uVar5 + 1;
              *(byte *)(iVar7 + 0x7f) = *(byte *)(iVar7 + 0x7f) & 0xfd;
            }
            iVar6 = iVar6 + 1;
            if ((int)((int)*(char *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3fU) <= iVar6)
            break;
            iVar7 = *(int *)(param_2 + 0x28);
          }
        }
        if ((uVar5 == ((int)*(char *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3fU)) ||
           ((float)(int)uVar5 /
            (float)((int)*(char *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3f) < 0.5)) {
          iVar6 = *(int *)(param_2 + 0x28) + iVar8;
          *(byte *)(iVar6 + 299) = *(byte *)(iVar6 + 299) & 0xef;
        }
        else {
          iVar6 = *(int *)(param_2 + 0x28) + iVar8;
          *(byte *)(iVar6 + 299) = *(byte *)(iVar6 + 299) | 0x10;
          iVar6 = 0;
          if ((*(byte *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3f) != 0) {
            iVar7 = *(int *)(param_2 + 0x28);
            while ((*(byte *)(*(int *)(param_2 + 0x2c) +
                              (((int)*(char *)(iVar7 + iVar8 + 0x129) & 0x7fU) + iVar6) * 0x80 +
                             0x7f) & 2) == 0) {
              iVar6 = iVar6 + 1;
              if ((int)((int)*(char *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3fU) <= iVar6)
              goto LAB_08826a28;
              iVar7 = *(int *)(param_2 + 0x28);
            }
            FUN_089a3868(auStack_a0);
          }
LAB_08826a28:
          iVar6 = 0;
          if ((*(byte *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3f) != 0) {
            iVar7 = *(int *)(param_2 + 0x28);
            while ((*(byte *)(*(int *)(param_2 + 0x2c) +
                              (((int)*(char *)(iVar7 + iVar8 + 0x129) & 0x7fU) + iVar6) * 0x80 +
                             0x7f) & 2) != 0) {
              iVar6 = iVar6 + 1;
              if ((int)((int)*(char *)(*(int *)(param_2 + 0x28) + iVar8 + 0x12a) & 0x3fU) <= iVar6)
              goto LAB_08826aa8;
              iVar7 = *(int *)(param_2 + 0x28);
            }
            FUN_089a3868(&local_90);
          }
LAB_08826aa8:
          if (*(char *)(param_2 + 0x31) == '\0') {
            local_60 = local_90;
            local_5c = local_8c;
            local_58 = local_88;
            local_54 = local_84;
            FUN_089a38fc(&local_60,&local_60,auStack_a0);
            auVar3._4_4_ = 0;
            auVar3._0_4_ = local_60;
            auVar3._8_4_ = local_58;
            auVar2._4_4_ = 0;
            auVar2._0_4_ = local_60;
            auVar2._8_4_ = local_58;
            auVar1._4_4_ = 0;
            auVar1._0_4_ = local_60;
            auVar1._8_4_ = local_58;
            uVar9 = vdot_t(auVar1,auVar2);
            uVar10 = vzero_s();
            uVar11 = vcmp_s(8,uVar9,local_60);
            local_50 = vsqrt_s(uVar9);
            vrcp_s(local_50);
            uVar9 = vcmovt_s(uVar10,(byte)uVar11 & 1);
            vpfxd(4,4,4,5);
            auVar1 = vscl_t(auVar3,uVar9);
            local_60 = auVar1._0_4_;
            local_5c = auVar1._4_4_;
            local_58 = auVar1._8_4_;
            local_70[1] = 0.0;
            local_64 = 0x3f800000;
            local_70[0] = param_1 * 1.0;
            local_70[2] = param_1 * 1.0;
            FUN_089a3934(&local_60,&local_60,local_70);
            iVar6 = *(int *)(param_2 + 0x28) + iVar8 + 0xc0;
            FUN_089a38c4(iVar6,iVar6,&local_60);
          }
          else {
            FUN_089a38fc(auStack_80,&local_90,auStack_a0);
            local_7c = 0;
            iVar6 = *(int *)(param_2 + 0x28) + iVar8 + 0xb0;
            FUN_089a38a8(iVar6,iVar6,auStack_80);
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + 0x130;
    } while (iVar4 < (int)(((*(uint *)(param_2 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
  }
  return;
}

