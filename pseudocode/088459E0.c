/* Entry 0x088459E0 | file offset 0x000429B8 | FUN_088459e0 | bytes 3144 */

void FUN_088459e0(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  int local_2c;
  
  iVar4 = DAT_089d4960;
  FUN_0885c93c(param_2);
  iVar2 = FUN_0885ca3c(param_2,7,0);
  local_30 = &DAT_089c8990;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[7] = iVar2;
  }
  iVar2 = FUN_0885ca3c(param_2,8,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[8] = iVar2;
  }
  iVar2 = FUN_0885ca3c(param_2,5,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[6] = iVar2;
  }
  iVar2 = FUN_0885ca3c(param_2,6,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[9] = iVar2;
  }
  iVar2 = FUN_0885ca3c(param_2,9,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[0xc] = iVar2;
  }
  iVar2 = FUN_0885ca98(param_2,4,0x65666665,0);
  if (iVar2 != 0) {
    FUN_0883eb10(param_1 + 0xd,*param_1 + 0x34,*(undefined4 *)(iVar2 + 8),
                 *(undefined4 *)(iVar2 + 0xc));
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  iVar2 = FUN_0885ca98(param_2,0xe,0x5f646e73,0);
  if (iVar2 != 0) {
    uVar9 = *(undefined4 *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
  }
  iVar2 = FUN_0885ca98(param_2,0xe,0x5f646e73,1);
  if (iVar2 != 0) {
    uVar7 = *(undefined4 *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
  }
  FUN_088423a8(param_1 + 0x18,*param_1 + 0x24,uVar9,uVar8,uVar7,uVar6);
  iVar2 = FUN_0885ca98(param_2,1,0x61796c70,0);
  puVar1 = local_30;
  if (iVar2 != 0) {
    iVar3 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc));
    if ((*(int *)(iVar2 + 8) != 0) && (iVar3 != 0)) {
      FUN_08935524(iVar3,*(int *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
      param_1[0x22] = iVar3;
    }
  }
  iVar2 = FUN_0885ca98(param_2,1,0x626d6f63,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[0x23] = iVar2;
  }
  iVar2 = FUN_0885ca98(param_2,1,0x706b7461,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    param_1[0x24] = iVar2;
  }
  iVar2 = FUN_0885ca98(param_2,1,0x6967616d,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (local_2c = iVar2, iVar2 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar2 != 0)) {
    FUN_08935524(iVar2,*(undefined4 *)(local_2c + 8),*(undefined4 *)(local_2c + 0xc));
    FUN_08828a98(param_1 + 0x25,iVar2);
  }
  iVar2 = FUN_0885ca98(param_2,1,0x74617262,0);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) &&
     (iVar3 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc)), iVar3 != 0)) {
    FUN_08935524(iVar3,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
    FUN_088105fc(param_1 + 0x28,iVar3,*(undefined4 *)(iVar2 + 0xc));
  }
  iVar2 = FUN_0885ca98(param_2,1,0x74786574,0);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    local_50 = 0;
    local_4c = 0;
    iVar3 = FUN_08870b10(*(undefined4 *)(iVar2 + 8),&local_50,&local_4c);
    if (iVar3 == 0) {
      iVar4 = FUN_08844130(iVar4,*(undefined4 *)(iVar2 + 0xc));
      param_1[0x32] = iVar4;
      if (iVar4 != 0) {
        FUN_08935524(iVar4,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
        iVar2 = FUN_0887b080(0x10);
        iVar4 = 0;
        if (iVar2 != 0) {
          FUN_0887a61c(iVar2);
          iVar4 = iVar2;
        }
        param_1[0x33] = iVar4;
        FUN_0887ac24(iVar4,param_1[0x32]);
      }
    }
    else {
      iVar4 = FUN_08844130(iVar4,local_4c);
      param_1[0x32] = iVar4;
      if (iVar4 != 0) {
        FUN_08935524(iVar4,local_50,local_4c);
        iVar2 = FUN_0887b080(0x10);
        iVar4 = 0;
        if (iVar2 != 0) {
          FUN_0887a61c(iVar2);
          iVar4 = iVar2;
        }
        param_1[0x33] = iVar4;
        FUN_0887ac24(iVar4,param_1[0x32]);
      }
    }
  }
  iVar4 = FUN_0885ca98(param_2,0x11,0x63657073,0);
  iVar2 = FUN_0885ca98(param_2,3,0x63657073,0);
  iVar3 = FUN_0885ca98(param_2,0xd,0x63657073,0);
  if (iVar4 == 0) {
    param_1[0x34] = 0;
  }
  else if (iVar2 == 0) {
    param_1[0x34] = 0;
  }
  else {
    if (*(char *)(*param_1 + 6) != '\0') {
      local_48 = *(undefined4 *)(iVar4 + 8);
      local_44 = *(undefined4 *)(iVar4 + 0xc);
      FUN_08870b10(*(undefined4 *)(iVar4 + 8),&local_48,&local_44);
      local_40 = *(undefined4 *)(iVar2 + 8);
      local_3c = *(undefined4 *)(iVar2 + 0xc);
      FUN_08870b10(*(undefined4 *)(iVar2 + 8),&local_40,&local_3c);
      local_38 = *(undefined4 *)(iVar3 + 8);
      local_34 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar3 != 0) {
        FUN_08870b10(*(undefined4 *)(iVar3 + 8),&local_38,&local_34);
      }
      uVar6 = 0;
      if (iVar3 != 0) {
        uVar6 = local_38;
      }
      uVar7 = 0;
      if (iVar3 != 0) {
        uVar7 = local_34;
      }
      iVar4 = FUN_088cf188(DAT_089d7830,local_48,local_44,local_40,local_3c,uVar6,uVar7);
      param_1[0x34] = iVar4;
      if (iVar4 != 0) {
        FUN_088db4e4(iVar4,0x96);
        FUN_088cff30(DAT_089d7830,param_1[0x34]);
      }
      uVar5 = (int)(char)puVar1[2] << 0x10 | (int)(char)puVar1[3] << 0x18 |
              (int)(char)puVar1[1] << 8 | 0x66U;
      goto LAB_08846300;
    }
    param_1[0x34] = 0;
  }
  uVar5 = (int)(char)puVar1[2] << 0x10 | (int)(char)puVar1[3] << 0x18 |
          (int)(char)puVar1[1] << 8 | 0x66U;
LAB_08846300:
  iVar4 = FUN_0885ca98(param_2,3,uVar5,0);
  if (iVar4 != 0) {
    FUN_08854a5c(DAT_089d4dc8 + 0x4e0,*(undefined4 *)(DAT_089d4960 + 4),*(undefined4 *)(iVar4 + 8),
                 *(undefined4 *)(iVar4 + 0xc));
    param_1[0x39] = param_1[0x39] | 1;
  }
  iVar4 = FUN_0885ca98(param_2,3,0x73697270,0);
  if (iVar4 != 0) {
    FUN_08859da4(DAT_089d4dc8 + 0x6200,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
    param_1[0x39] = param_1[0x39] | 2;
  }
  iVar4 = FUN_0885ca98(param_2,3,0x62627562,0);
  if (iVar4 != 0) {
    FUN_08851c78(DAT_089d4dc8 + 0x65e0,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc));
    param_1[0x39] = param_1[0x39] | 4;
  }
  iVar4 = FUN_0885ca98(param_2,3,0x74726163,0);
  if (iVar4 != 0) {
    FUN_08852378(DAT_089d4dc8 + 0x6b00,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0xc),
                 (int)*(short *)(*param_1 + 2));
    param_1[0x39] = param_1[0x39] | 0x40;
  }
  iVar4 = FUN_0885ca98(param_2,3,0x656e696d,0);
  if (iVar4 != 0) {
    FUN_08857824(DAT_089d4dc8 + 0x52d0,param_2);
    param_1[0x39] = param_1[0x39] | 8;
  }
  iVar4 = FUN_0885ca98(param_2,3,0x646e6977,0);
  if ((iVar4 != 0) && (*(char *)(*param_1 + 6) != '\0')) {
    iVar2 = FUN_088b70c8();
    FUN_08856acc(DAT_089d4dc8 + 0x69c0,*(undefined1 *)(iVar2 + 9),*(undefined4 *)(iVar4 + 8),
                 *(undefined4 *)(iVar4 + 0xc));
    param_1[0x39] = param_1[0x39] | 0x10;
  }
  iVar4 = FUN_0885ca3c(param_2,2,0);
  if (iVar4 != 0) {
    uVar6 = FUN_0885ca3c(param_2,0x12,0);
    FUN_08842f78(param_1,iVar4,uVar6);
    param_1[0x39] = param_1[0x39] | 0x20;
  }
  return;
}

