/* Entry 0x08809F00 | file offset 0x00006ED8 | FUN_08809f00 | bytes 2720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_08809f00(undefined4 param_1,int param_2,int *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  int local_220;
  int local_21c;
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  int local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 local_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_40;
  int *local_3c;
  int local_38;
  undefined1 local_34;
  char local_33;
  int local_30;
  
  if ((*(uint *)(param_2 + 0x38c) & 4) != 0) {
    return 0;
  }
  local_34 = 0;
  if (*(int *)(param_2 + 0x474) == 0) {
    return 0;
  }
  local_38 = FUN_0883ea64(*(int *)(param_2 + 0x474),param_3 + 1);
  if (local_38 == 0) {
    return local_34;
  }
  iVar3 = FUN_08808a74(param_2,**(undefined1 **)(local_38 + 0xc));
  iVar14 = *param_3;
  if (iVar3 == 0) {
    return local_34;
  }
  if (iVar14 == 0) {
    return local_34;
  }
  if (*(int *)(iVar3 + 0x18) == 0) {
    return local_34;
  }
  if (*(int *)(iVar14 + 0x18) == 0) {
    return local_34;
  }
  iVar4 = FUN_088092e4(iVar14,iVar3);
  iVar5 = FUN_088092e4(iVar3,iVar14);
  if ((iVar4 == 0) || (iVar5 == 0)) {
    cVar12 = *(char *)(*(int *)(iVar3 + 0x34) + 4);
    if (((cVar12 == '\x04') ||
        ((((cVar12 == '\x06' || (cVar12 == '\x05')) || (cVar12 == '\t')) ||
         ((cVar12 == '\f' || (cVar12 == '\r')))))) ||
       ((cVar12 == '\x0e' || (bVar1 = false, cVar12 == '\x0f')))) {
      bVar1 = true;
    }
    if (!bVar1) {
      return local_34;
    }
    if (iVar4 == 0) {
      return local_34;
    }
  }
  *(int *)(*param_3 + 0x1c) = param_2;
  *(short *)(*param_3 + 0x30) = (short)**(undefined4 **)(iVar3 + 0x34);
  iVar4 = *(int *)(iVar14 + 0x18);
  cVar12 = *(char *)(*(int *)(iVar14 + 0x34) + 4);
  cVar11 = *(char *)(*(int *)(iVar3 + 0x34) + 4);
  if (*(char *)(iVar4 + 0x542) == '\x03') {
    iVar4 = *(int *)(iVar4 + 0x5d4);
  }
  local_3c = param_3;
  uVar6 = FUN_08835778(iVar4);
  iVar5 = FUN_088bf4cc(uVar6,0x137);
  if ((iVar5 != 0) && (cVar12 == '\t')) {
    cVar12 = '\x04';
  }
  uVar6 = FUN_08835778(param_2);
  iVar5 = FUN_088bf4cc(uVar6,0x137);
  if ((iVar5 != 0) && (cVar11 == '\t')) {
    cVar11 = '\x04';
  }
  if (((*(uint *)(iVar4 + 0x380) & 0x40000000) != 0) && ((cVar12 == '\0' || (cVar12 == '\x01')))) {
    cVar12 = '\x02';
  }
  if (((*(uint *)(param_2 + 0x380) & 0x40000000) != 0) && ((cVar11 == '\0' || (cVar11 == '\x01'))))
  {
    cVar11 = '\x02';
  }
  iVar5 = func_0x08a50140();
  if ((iVar5 == 1) && (iVar5 = func_0x08a50154(), iVar5 == iVar4)) {
    if ((cVar12 == '\0') || (cVar12 == '\x01')) {
      cVar12 = '\x02';
    }
    if ((cVar12 == '\a') || (cVar12 == '\b')) {
      cVar12 = '\x03';
    }
  }
  iVar5 = func_0x08a50140();
  if ((iVar5 == 1) && (iVar5 = func_0x08a50154(), iVar5 == param_2)) {
    if ((cVar11 == '\0') || (cVar11 == '\x01')) {
      cVar11 = '\x02';
    }
    if ((cVar11 == '\a') || (cVar11 == '\b')) {
      cVar11 = '\x03';
    }
  }
  iVar5 = 0;
  cVar13 = '\0';
  if ((cVar12 == '\x04') && (iVar7 = FUN_08837360(iVar4), iVar7 != 0)) {
    uVar6 = FUN_08835778(iVar4);
    iVar7 = FUN_088bf4cc(uVar6,0x40);
    if ((iVar7 != 0) &&
       (((*(byte *)(iVar4 + 0x195) & 0x20) != 0 && ((*(byte *)(iVar4 + 0x198) & 8) == 0)))) {
      iVar7 = FUN_0884a454(4,cVar11);
      if ((iVar7 != 3) && (iVar7 != 0)) {
        iVar5 = 1;
      }
      cVar12 = '\f';
      *(uint *)(iVar14 + 0x10) = *(uint *)(iVar14 + 0x10) | 0x200;
      func_0x08b34f9c(iVar4);
    }
  }
  local_40 = param_2;
  if ((cVar11 == '\x04') && (iVar7 = FUN_08837360(param_2), iVar7 != 0)) {
    local_40 = param_2;
    uVar6 = FUN_08835778(param_2);
    iVar7 = FUN_088bf4cc(uVar6,0x40);
    if ((iVar7 != 0) &&
       ((local_40 = param_2, (*(byte *)(param_2 + 0x195) & 0x20) != 0 &&
        ((*(byte *)(param_2 + 0x198) & 8) == 0)))) {
      iVar7 = FUN_0884a454(4,cVar12);
      cVar13 = '\0';
      if ((iVar7 != 3) && (iVar7 != 0)) {
        cVar13 = '\x01';
      }
      cVar11 = '\f';
      *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200;
      local_40 = param_2;
      func_0x08b34f9c(param_2);
    }
  }
  local_33 = cVar13;
  local_30 = iVar5;
  iVar5 = FUN_0884a454(cVar12,cVar11);
  iVar7 = FUN_0884a454(cVar11,cVar12);
  piVar2 = local_3c;
  if (local_30 != 0) {
    iVar5 = 1;
  }
  if (local_33 != '\0') {
    iVar7 = 1;
  }
  if (iVar5 != 0) {
    local_34 = 1;
  }
  if ((iVar5 == 1) && (iVar7 == 1)) {
    iVar5 = 5;
    iVar7 = 5;
  }
  iVar8 = FUN_0884a53c(iVar14,iVar3,iVar5);
  iVar9 = FUN_0884a53c(iVar3,iVar14,iVar7);
  iVar14 = local_38;
  if ((((iVar5 == 1) || (iVar5 == 2)) || (iVar5 == 5)) || ((iVar5 == 3 || (iVar5 == 6)))) {
    *(uint *)(*piVar2 + 0x10) = *(uint *)(*piVar2 + 0x10) | 8;
  }
  if (iVar8 == 0 && iVar9 == 0) {
    return local_34;
  }
  if ((iVar5 == 1) || (iVar7 == 1)) {
LAB_0880a48c:
    local_230 = *(undefined4 *)(local_38 + 0x10);
  }
  else {
    if (iVar5 != 2) {
      if (iVar7 != 2) {
        if (iVar5 == 5) {
          local_230 = *(undefined4 *)(local_38 + 0x10);
          goto LAB_0880a490;
        }
        if (iVar7 != 5) goto LAB_0880a684;
      }
      goto LAB_0880a48c;
    }
    local_230 = *(undefined4 *)(local_38 + 0x10);
  }
LAB_0880a490:
  local_22c = *(undefined4 *)(local_38 + 0x14);
  local_228 = *(undefined4 *)(local_38 + 0x18);
  local_134 = 0x3f800000;
  local_1d4 = 0x3f800000;
  local_220 = piVar2[5];
  local_21c = piVar2[6];
  local_218 = piVar2[7];
  local_224 = 0x3f800000;
  local_114 = 0x3f800000;
  local_1c4 = 0x3f800000;
  local_214 = 0x3f800000;
  local_1e0 = local_230;
  local_1dc = local_22c;
  local_1d8 = local_228;
  local_1d0 = local_220;
  local_1cc = local_21c;
  local_1c8 = local_218;
  local_140 = local_230;
  local_13c = local_22c;
  local_138 = local_228;
  local_120 = local_220;
  local_11c = local_21c;
  local_118 = local_218;
  FUN_089a38a8(&local_100,&local_230,&local_220);
  local_1f0 = local_100;
  local_1ec = local_fc;
  local_1e8 = local_f8;
  local_1e4 = local_f4;
  local_240 = local_100;
  local_23c = local_fc;
  local_238 = local_f8;
  local_234 = local_f4;
  FUN_089a3a44(0x3f000000,&local_e0,&local_240);
  local_200 = local_e0;
  local_1fc = local_dc;
  local_1f8 = local_d8;
  local_1f4 = local_d4;
  local_210 = local_e0;
  local_20c = local_dc;
  local_208 = local_d8;
  local_204 = local_d4;
  FUN_088084e0(&local_210,0);
  func_0x08abb714(_DAT_08abbdf8,iVar4,*(undefined4 *)(iVar3 + 0x18),&local_210);
LAB_0880a684:
  if ((iVar5 == 4) || (iVar7 == 4)) {
    iVar8 = 0;
    if ((iVar5 == 4) && (iVar9 = FUN_0883739c(iVar4), iVar9 != 0)) {
      iVar8 = iVar4;
    }
    if ((iVar7 == 4) && (iVar9 = FUN_0883739c(*(undefined4 *)(iVar3 + 0x18)), iVar9 != 0)) {
      iVar8 = *(int *)(iVar3 + 0x18);
    }
    piVar2 = local_3c;
    if (iVar8 != 0) {
      FUN_08808ee4(local_3c,local_40,iVar14,0);
      if ((*(byte *)(iVar8 + 0x5b5) & 0x20) == 0) {
        FUN_088593b4(DAT_089d4dc8 + 0x500,iVar8,3);
        local_1b0 = *(undefined4 *)(iVar14 + 0x10);
        local_1ac = *(undefined4 *)(iVar14 + 0x14);
        local_1a8 = *(undefined4 *)(iVar14 + 0x18);
        local_b4 = 0x3f800000;
        local_154 = 0x3f800000;
        local_1a0 = piVar2[5];
        local_19c = piVar2[6];
        local_198 = piVar2[7];
        local_1a4 = 0x3f800000;
        local_94 = 0x3f800000;
        local_144 = 0x3f800000;
        local_194 = 0x3f800000;
        local_160 = local_1b0;
        local_15c = local_1ac;
        local_158 = local_1a8;
        local_150 = local_1a0;
        local_14c = local_19c;
        local_148 = local_198;
        local_c0 = local_1b0;
        local_bc = local_1ac;
        local_b8 = local_1a8;
        local_a0 = local_1a0;
        local_9c = local_19c;
        local_98 = local_198;
        FUN_089a38a8(&local_80,&local_1b0,&local_1a0);
        local_170 = local_80;
        local_16c = local_7c;
        local_168 = local_78;
        local_164 = local_74;
        local_1c0 = local_80;
        local_1bc = local_7c;
        local_1b8 = local_78;
        local_1b4 = local_74;
        FUN_089a3a44(0x3f000000,&local_60,&local_1c0);
        local_180 = local_60;
        local_17c = local_5c;
        local_178 = local_58;
        local_174 = local_54;
        local_190 = local_60;
        local_18c = local_5c;
        local_188 = local_58;
        local_184 = local_54;
        FUN_088084e0(&local_190,1);
        uVar10 = *(uint *)(iVar8 + 0x380);
      }
      else {
        uVar10 = *(uint *)(iVar8 + 0x380);
      }
      *(uint *)(iVar8 + 0x380) = uVar10 | 0x8000000;
      *(byte *)(iVar8 + 0x5b5) = *(byte *)(iVar8 + 0x5b5) | 0x20;
    }
  }
  if ((iVar5 == 3) || (iVar7 == 3)) {
    iVar14 = 0;
    if (iVar5 == 3) {
      FUN_0883739c(iVar4);
      iVar14 = iVar4;
    }
    if (iVar7 == 3) {
      FUN_0883739c(*(undefined4 *)(iVar3 + 0x18));
      iVar14 = *(int *)(iVar3 + 0x18);
    }
    FUN_088593b4(DAT_089d4dc8 + 0x500,iVar14,2);
  }
  return local_34;
}

