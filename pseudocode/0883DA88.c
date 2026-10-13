/* Entry 0x0883DA88 | file offset 0x0003AA60 | FUN_0883da88 | bytes 1312 */

uint FUN_0883da88(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auStack_150 [44];
  uint local_124;
  undefined1 local_120 [4];
  float local_11c;
  undefined1 local_110 [12];
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_f0 [4];
  float local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [4];
  float local_bc;
  undefined4 local_b4;
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [28];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  
  local_40 = param_3 & 0xff;
  local_3c = param_4 & 0xff;
  local_38 = param_5 & 0xff;
  if ((*(uint *)(param_1 + 0x388) & 0x20000000) == 0) {
    if (*(int *)(DAT_089d6ac8 + 0x4d0) == -1) {
      uVar8 = 0;
      uVar9 = 0;
      local_34 = param_2;
      iVar3 = FUN_0883739c(param_1);
      iVar5 = param_1;
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      if (*(int *)(param_1 + 0x39c) == 0) {
        uVar8 = 1;
      }
      else {
        iVar3 = FUN_0883739c(param_1);
        iVar7 = *(int *)(param_1 + 0x39c);
        if ((iVar3 == 0) ||
           (((bVar2 = (*(byte *)(iVar5 + 0x5b2) & 4) != 0, bVar2 || (*(char *)(iVar7 + 7) == '\0'))
            && ((!bVar2 || (*(char *)(iVar7 + 8) == '\0')))))) {
          if (*(char *)(iVar7 + 7) == '\0') {
            bVar1 = *(byte *)(iVar7 + 2);
            if (bVar1 == 0) {
              uVar8 = 0;
            }
            else if (bVar1 < 2) {
              uVar8 = 1;
            }
            else if (bVar1 < 3) {
              uVar8 = 2;
            }
          }
          else {
            uVar8 = 3;
          }
        }
        else {
          uVar8 = 3;
        }
      }
      uVar4 = FUN_08899300();
      if (*(int *)(param_1 + 0x3a0) == 0) {
        FUN_089a3868(local_120,param_1 + 0x80);
        local_104 = 1.5;
      }
      else {
        FUN_08812664(auStack_f0,param_1,*(int *)(param_1 + 0x3a0));
        local_60 = local_e0;
        local_d0 = local_e0;
        local_5c = local_dc;
        local_cc = local_dc;
        local_58 = local_d8;
        local_54 = 0x3f800000;
        local_c8 = local_d8;
        local_c4 = 0x3f800000;
        local_100 = local_e0;
        local_fc = local_dc;
        local_f8 = local_d8;
        local_f4 = 0x3f800000;
        FUN_089a3868(local_120,&local_100);
        local_104 = local_ec * 1.5;
      }
      if (local_40 == 0) {
        if (local_3c == 0) {
          FUN_089a34c0(auStack_98,local_120);
          FUN_089a34c0(auStack_8c,&DAT_09af8b10);
          iVar5 = FUN_0889beb0(0x40400000,uVar4,auStack_150,auStack_98,2,1,1,0,0,0,0);
          if (iVar5 == 0) {
            iVar5 = FUN_088978c4(uVar4,auStack_150,local_110,4,1,0,0,0,0);
            if (iVar5 != 0) {
              uVar9 = (local_124 & 0x1f0000) >> 0x10;
            }
          }
          else {
            uVar9 = (local_124 & 0x1f0000) >> 0x10;
          }
        }
        else {
          iVar5 = FUN_088978c4(uVar4,auStack_150,local_110,4,1,0,0,0,0);
          if (iVar5 != 0) {
            uVar9 = (local_124 & 0x1f0000) >> 0x10;
          }
        }
      }
      else {
        local_bc = local_11c + 0.5;
        local_b4 = 0x3f800000;
        FUN_089a34c0(auStack_b0,local_c0);
        FUN_089a34c0(auStack_a4,&DAT_09af8b10);
        iVar5 = FUN_0889beb0(0x40400000,uVar4,auStack_150,auStack_b0,2,1,1,0,0,0,0);
        if (iVar5 != 0) {
          uVar9 = (local_124 & 0x1f0000) >> 0x10;
        }
      }
      puVar6 = (undefined4 *)FUN_08896b40(DAT_089d6af0,uVar9,local_34,uVar8);
      if (puVar6 != (undefined4 *)0x0) {
        if (local_38 == 0) {
          puVar6[0x15] = param_1 + 0x510;
        }
        else {
          FUN_08838d14(&local_70,param_1);
          *puVar6 = local_70;
          puVar6[0xd] = puVar6[0xd] & 0xfffffdff;
          puVar6[1] = local_6c;
          puVar6[2] = local_68;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[0xd] = puVar6[0xd] & 0xfffffdff;
        }
      }
    }
    else {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}

