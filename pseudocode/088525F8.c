/* Entry 0x088525F8 | file offset 0x0004F5D0 | FUN_088525f8 | bytes 1204 */

void FUN_088525f8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [12];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_20;
  
  uVar3 = 0;
  iVar4 = 0;
  do {
    uVar6 = uVar3;
    if (*(int *)(param_1 + iVar4 * 0xd) == param_4) break;
    uVar3 = uVar3 + 1;
    iVar4 = uVar3 * 0x40;
    uVar6 = 0xffffffff;
  } while ((int)uVar3 < 2);
  if ((uVar6 < 2) &&
     (param_1 = param_1 + uVar6 * 0x340, (*(byte *)(*(int *)(param_2 + 0x2f8) + 8) & 1) == 0)) {
    FUN_089a3efc(auStack_e0,param_2 + 0x330);
    iVar4 = FUN_089b0e78(*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x394) + 0x84) + 8),param_3);
    if ((iVar4 != 0) && (iVar4 = FUN_089b1224(iVar4), iVar4 != 0)) {
      FUN_089a3f40(auStack_a0,auStack_e0,iVar4 + 0x30);
      FUN_089a3fb8(auStack_120,auStack_e0,iVar4);
      FUN_089a3890(auStack_f0);
      iVar4 = DAT_09afb89c * 0x343fd + 0x269ec3;
      iVar5 = iVar4 * 0x343fd + 0x269ec3;
      DAT_09afb89c = iVar5 * 0x343fd + 0x269ec3;
      FUN_089a383c((float)(iVar4 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -5.0,
                   (float)(iVar5 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + 4.0,
                   (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + 2.0,0,auStack_90);
      FUN_089a3f40(auStack_90,auStack_120,auStack_90);
      if (*(int *)(param_1 + 0x334) < 10) {
        iVar4 = *(int *)(param_1 + 0x334);
        *(int *)(param_1 + 0x334) = iVar4 + 1;
        iVar4 = param_1 + ((*(int *)(param_1 + 0x330) + iVar4) % 10) * 0x50 + 0x10;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x330);
        *(int *)(param_1 + 0x330) = iVar4 + 1;
        iVar4 = param_1 + iVar4 * 0x50 + 0x10;
        if (9 < *(int *)(param_1 + 0x330)) {
          *(undefined4 *)(param_1 + 0x330) = 0;
        }
      }
      FUN_089a3868(iVar4,auStack_a0);
      FUN_089a3868(iVar4 + 0x10,auStack_90);
      *(undefined4 *)(iVar4 + 0x40) = 0x43960000;
      FUN_089a3a44(0xbf800000,&local_60,auStack_90);
      local_80 = local_60;
      local_7c = local_5c;
      local_78 = local_58;
      local_74 = local_54;
      local_130 = local_60;
      local_12c = local_5c;
      local_128 = local_58;
      local_124 = local_54;
      pauVar7 = (undefined1 (*) [12])(iVar4 + 0x20);
      FUN_089a3868(pauVar7,&local_130);
      uVar2 = *(undefined4 *)(iVar4 + 0x2c);
      uVar8 = vdot_t(*pauVar7,*pauVar7);
      uVar9 = vzero_s();
      uVar10 = vcmp_s(8,uVar8,*(undefined4 *)*pauVar7);
      local_20 = vsqrt_s(uVar8);
      vrcp_s(local_20);
      uVar8 = vcmovt_s(uVar9,(byte)uVar10 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar7,uVar8);
      *(int *)*pauVar7 = auVar1._0_4_;
      *(int *)(iVar4 + 0x24) = auVar1._4_4_;
      *(int *)(iVar4 + 0x28) = auVar1._8_4_;
      *(undefined4 *)(iVar4 + 0x2c) = uVar2;
      *(float *)(iVar4 + 0x48) = *(float *)(param_2 + 0x84) - *(float *)(param_2 + 0x3c0);
      FUN_089a3b30(&local_40,pauVar7,&DAT_09af84e0);
      local_70 = local_40;
      local_6c = local_3c;
      local_68 = local_38;
      local_64 = local_34;
      local_130 = local_40;
      local_12c = local_3c;
      local_128 = local_38;
      local_124 = local_34;
      FUN_089a3868(iVar4 + 0x30,&local_130);
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      *(float *)(iVar4 + 0x44) =
           (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * 12.56637 + 6.2831855;
      *(undefined1 *)(iVar4 + 0x4c) = 0;
    }
  }
  return;
}

