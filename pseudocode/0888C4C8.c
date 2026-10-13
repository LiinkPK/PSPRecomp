/* Entry 0x0888C4C8 | file offset 0x000894A0 | FUN_0888c4c8 | bytes 6876 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888c4c8(undefined4 *param_1)

{
  short *psVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  char cVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  undefined4 **ppuVar14;
  undefined **ppuVar15;
  undefined4 *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined4 *local_1080;
  undefined **local_107c;
  undefined4 local_1078;
  undefined4 local_1074;
  undefined4 local_1070;
  undefined4 local_106c;
  undefined4 local_1068;
  undefined **local_1064;
  undefined4 local_1060;
  undefined **local_105c;
  undefined4 local_1058;
  undefined4 local_1050 [34];
  undefined1 auStack_fc8 [20];
  undefined4 local_fb4 [17];
  undefined1 auStack_f70 [1912];
  undefined1 auStack_7f8 [1912];
  char *local_80 [2];
  undefined1 auStack_78 [4];
  int local_74;
  int local_70;
  undefined **local_6c;
  undefined4 *local_68 [4];
  undefined4 *local_58;
  undefined4 *local_54;
  undefined *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined **local_44;
  char local_40;
  char local_3f;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined **local_2c;
  
  ppuVar14 = &local_1080;
  ppuVar9 = &local_1080;
  FUN_08933c28(DAT_089d85e8);
  local_54 = param_1 + 0x1d5;
  local_50 = &DAT_089d6a18;
  local_48 = param_1 + 0x1b;
  local_58 = param_1 + 0x1f6;
  local_68[2] = param_1 + 0x2c;
  local_68[3] = param_1 + 0x1ca;
  local_4c = param_1 + 1;
  ppuVar19 = (undefined **)0xffffffff;
  puVar16 = &DAT_09afb8a0;
  if (param_1[0x13] == 9) {
    param_1[0x15] = *(undefined4 *)(param_1[0x1f2] + 0xbdb4);
  }
  uVar4 = FUN_088820d8(0x2800);
  *param_1 = uVar4;
  FUN_0886504c(local_4c,uVar4,0x2800);
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  FUN_08844890(DAT_089d4960);
  if (*(char *)(param_1 + 0x1a) == '\0') {
    FUN_08844b58(0,0);
  }
  cVar10 = *(char *)(DAT_089d6a00 + 0x18);
  if (cVar10 == '\0') {
    iVar13 = (int)DAT_09afd83c;
    if ((iVar13 != -1) && (iVar5 = FUN_088876b8(DAT_089d6a00,iVar13), iVar5 == 1)) {
      iVar5 = DAT_089d8508 + 0x68 + *(char *)(DAT_089d8508 + 0x2a05) * 0x2e8;
      FUN_088875b8(DAT_089d6a00,iVar13,*(undefined4 *)(DAT_089d8508 + 0x2a2c),
                   *(undefined4 *)(DAT_089d8508 + 0x2a30),*(undefined4 *)(DAT_089d8508 + 0x2a34),
                   *(undefined4 *)(DAT_089d8508 + 0x2a38),*(undefined4 *)(iVar5 + 8),
                   *(undefined4 *)(iVar5 + 0xc));
    }
    cVar10 = *(char *)(DAT_089d6a00 + 0x18);
  }
  if (cVar10 == '\x01') {
    FUN_08887730();
    cVar10 = *(char *)(DAT_089d6a00 + 0x18);
  }
  if ((cVar10 == '\0') || (*(int *)(DAT_089d6a00 + 4) == 0)) {
    switch(param_1[0x13]) {
    case 0:
    case 4:
    case 6:
    case 0xd:
    case 0xe:
      FUN_088f96c0();
      break;
    case 1:
    case 2:
    case 3:
      FUN_088f94a4();
      break;
    case 5:
      FUN_088f9850(param_1[0x15],*(uint *)(DAT_089d8140 + 0x1c) & 1);
      break;
    case 7:
      FUN_088f95c0();
      break;
    case 8:
      FUN_088f9788();
      break;
    case 9:
      FUN_088f98e0();
      break;
    case 10:
      FUN_088f9974(*(undefined4 *)(DAT_089d8140 + 0x18),*(undefined4 *)(DAT_089d8140 + 0x14));
      break;
    case 0xb:
      FUN_088f9b40();
      break;
    case 0xc:
      FUN_088f9a7c();
    }
  }
  cVar10 = *(char *)(param_1 + 0x1a);
  if (cVar10 == '\0') {
    iVar13 = 0;
    puVar8 = param_1;
    do {
      iVar13 = iVar13 + 1;
      puVar8[500] = (int)*(short *)((int)puVar16 + 0xf3a);
      psVar1 = (short *)((int)puVar16 + 0xf3e);
      puVar16 = puVar16 + 0x418;
      puVar8[0x1fa] = (int)*psVar1;
      puVar8 = puVar8 + 1;
    } while (iVar13 < 2);
  }
  iVar13 = 0;
  param_1[0x200] = (int)(short)DAT_09afde4c;
  puVar16 = param_1;
  do {
    if (puVar16[500] != -1) {
      uVar4 = puVar16[0x1f6];
      puVar16[0x1f6] = puVar16[500];
      puVar16[0x1f8] = uVar4;
      puVar16[500] = 0xffffffff;
    }
    if (cVar10 == '\0') {
      puVar16[0x1fe] = puVar16[0x1fc];
      puVar16[0x1fc] = puVar16[0x1fa];
      puVar16[0x1fa] = 0xffffffff;
    }
    iVar13 = iVar13 + 1;
    puVar16 = puVar16 + 1;
  } while (iVar13 < 2);
  bVar3 = false;
  iVar13 = 0;
  puVar16 = param_1;
  do {
    iVar5 = puVar16[0x1f8];
    if (iVar5 != -1) {
      bVar12 = false;
      iVar11 = 0;
      puVar8 = param_1;
      do {
        if (iVar5 == puVar8[0x1f6]) {
          bVar12 = true;
          break;
        }
        iVar11 = iVar11 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar11 < 2);
      if ((!bVar12) && (iVar5 = FUN_088444d4(DAT_089d4960,iVar5), iVar5 != 0)) {
        FUN_08844de0(puVar16[0x1f8]);
        bVar3 = true;
      }
    }
    iVar5 = puVar16[0x1fe];
    if (iVar5 != -1) {
      bVar12 = false;
      iVar11 = 0;
      puVar8 = param_1;
      do {
        if (iVar5 == puVar8[0x1fc]) {
          bVar12 = true;
          break;
        }
        iVar11 = iVar11 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar11 < 2);
      if ((!bVar12) && (iVar5 = FUN_088444d4(DAT_089d4960,iVar5), iVar5 != 0)) {
        FUN_08844de0(puVar16[0x1fe]);
        bVar3 = true;
      }
    }
    iVar13 = iVar13 + 1;
    puVar16 = puVar16 + 1;
  } while (iVar13 < 2);
  if ((*(char *)(param_1 + 0x1a) == '\0') && (bVar3)) {
    FUN_08844b58(0,0);
  }
  DAT_09af84d0 = DAT_09afde48;
  FUN_08842308();
  func_0x08a22b74(_DAT_08a22c70);
  FUN_088d16a4(DAT_089d7830);
  if (param_1[0x13] != 5) {
    FUN_08860e3c();
  }
  param_1[0x12] = 0;
  cVar10 = *(char *)(param_1 + 0x1a);
  if (cVar10 == '\0') {
    FUN_088907c4(DAT_089d6ac0);
    cVar10 = *(char *)(param_1 + 0x1a);
  }
  if (cVar10 == '\0') {
    local_30 = DAT_089d6ac8;
    uVar4 = FUN_088908e0();
    FUN_0889384c(local_30,uVar4);
    uVar4 = FUN_088908e0();
    FUN_08899604(uVar4);
  }
  FUN_08893c94(DAT_089d6ac8,param_1[0x200]);
  FUN_0888b544(param_1);
  func_0x08af2c10(local_1050);
  func_0x08afbdd8(local_fb4);
  local_3f = '\0';
  iVar13 = FUN_0888b080();
  local_40 = '\0';
  if (iVar13 == 0) {
    if (*(char *)(DAT_089d6a00 + 0x18) == '\x01') {
      if (0 < *(int *)(DAT_089d6a00 + 4)) {
        local_44 = (undefined **)&DAT_09afb8a0;
        FUN_088ebccc(DAT_089d7ed0,0,0);
        local_3f = '\0';
        goto LAB_0888cb90;
      }
      iVar13 = param_1[0x15];
    }
    else {
      iVar13 = param_1[0x15];
    }
    if (((uint)DAT_09afdfb2._1_1_ & 1 << ((int)(char)(&DAT_09afdfce)[(1 - iVar13) * 0x38] & 0x1fU))
        == 0) {
      local_44 = (undefined **)&DAT_09afb8a0;
      uVar4 = 0;
      if ((param_1[0x1d0] == 1) && (*(char *)(param_1 + 0x1a) == '\0')) {
        uVar4 = 1;
      }
      local_2c = (undefined **)0xffffffff;
      FUN_088cb9e8(auStack_f70);
      FUN_088cb9e8(auStack_7f8);
      FUN_088f8e50(&DAT_09afb8a0 + iVar13 * 0x418,auStack_f70);
      FUN_088f8e50(&DAT_09afb8a0 + (1 - iVar13) * 0x418,auStack_7f8);
      uVar6 = FUN_08889924(param_1);
      func_0x08af2cbc(local_1050,auStack_f70,auStack_7f8,uVar6,param_1[0x13],param_1[0x15],
                      param_1[0x201]);
      FUN_088ebdd4(DAT_089d7ed0,local_1050,uVar4);
      local_3f = '\x01';
      ppuVar19 = local_2c;
    }
    else {
      local_44 = (undefined **)&DAT_09afb8a0;
      FUN_088ebccc(DAT_089d7ed0,0,0);
      local_3f = '\0';
    }
  }
  else {
    local_44 = (undefined **)&DAT_09afb8a0;
    func_0x08afbe40(local_fb4,0);
    FUN_088ebdd4(DAT_089d7ed0,local_fb4,0);
    local_40 = '\x01';
    param_1[0x201] = *(undefined4 *)(param_1[0x1f2] + 0x22e4);
  }
LAB_0888cb90:
  func_0x08a3d7e8(_DAT_08a405e0);
  func_0x08a4fd00(_DAT_08a50568);
  FUN_0884bdd4(DAT_089d4d80);
  func_0x08ac6098(_DAT_08ac8ef8);
  uVar4 = FUN_088908e0();
  *(undefined4 *)(DAT_089d7830 + 8) = uVar4;
  local_80[0] = "general_archive/field/menu.bin";
  local_80[1] = "general_archive/field/JP/menu_lang.bin";
  iVar13 = 0;
  puVar17 = local_50;
  do {
    local_34 = FUN_088fe7c8(*(undefined4 *)((int)ppuVar14 + 0x1000),0);
    uVar4 = FUN_08890938();
    FUN_088fe708(*(undefined4 *)((int)ppuVar14 + 0x1000),uVar4,local_34,0);
    FUN_088fe944(*(undefined4 *)((int)ppuVar14 + 0x1000),uVar4,local_34);
    FUN_088698fc(auStack_78);
    FUN_08869954(auStack_78,uVar4);
    *(undefined1 *)(DAT_089d7830 + 0x23) = 1;
    local_2c = ppuVar19;
    uVar6 = FUN_088908e0();
    FUN_088d00fc(DAT_089d7830,uVar6,0xe0000,1,puVar17,auStack_78);
    *(undefined1 *)(DAT_089d7830 + 0x23) = 0;
    FUN_0889099c(uVar4);
    FUN_08869908(auStack_78,2);
    ppuVar19 = local_2c;
    iVar13 = iVar13 + 1;
    ppuVar14 = (undefined4 **)((int)ppuVar14 + 4);
    puVar17 = puVar17 + 0x18;
  } while (iVar13 < 2);
  iVar13 = 0;
  puVar16 = param_1 + 0x1d5;
  ppuVar15 = local_44;
  do {
    FUN_08890bb8(puVar16,iVar13,
                 (int)*(char *)((int)ppuVar15 + *(char *)((int)ppuVar15 + 0x773) * 0xc6 + 0xca));
    iVar13 = iVar13 + 1;
    ppuVar15 = ppuVar15 + 0x418;
    puVar16 = puVar16 + 10;
  } while (iVar13 < 2);
  func_0x08a3e874(_DAT_08a405e0);
  FUN_088a5250();
  FUN_088a0d40();
  ppuVar15 = local_44;
  iVar5 = 0;
  iVar13 = 0;
  puVar16 = param_1;
  ppuVar18 = local_44;
  do {
    if ((undefined **)puVar16[0x1f6] != ppuVar19) {
      iVar11 = FUN_088444d4(DAT_089d4960,(undefined **)puVar16[0x1f6]);
      if (iVar11 == 0) {
        uVar2 = *(ushort *)((int)ppuVar15 + iVar13 + 0x27e8);
        local_38 = puVar16[0x1f6];
        uVar4 = FUN_088908e0();
        uVar4 = FUN_08844c14(local_38,uVar4,uVar2 & 1);
        puVar16[0x1f6] = uVar4;
      }
      else {
        iVar11 = FUN_088470b8();
        if ((iVar11 != 0) && ((*(byte *)(iVar11 + 8) & 0x10) != 0)) {
          uVar2 = *(ushort *)((int)ppuVar15 + iVar13 + 0x27e8);
          uVar6 = puVar16[0x1f6];
          local_2c = ppuVar18;
          uVar4 = FUN_088908e0();
          FUN_08844f50(uVar6,uVar4,uVar2 & 1);
          ppuVar18 = local_2c;
        }
      }
    }
    if (((undefined **)puVar16[0x1fc] != ppuVar19) &&
       (iVar11 = FUN_088444d4(DAT_089d4960,(undefined **)puVar16[0x1fc]), iVar11 == 0)) {
      uVar6 = puVar16[0x1fc];
      uVar4 = FUN_088908e0();
      uVar4 = FUN_08844c14(uVar6,uVar4,0);
      puVar16[0x1fc] = uVar4;
    }
    iVar5 = iVar5 + 1;
    puVar16 = puVar16 + 1;
    iVar13 = iVar13 + 2;
  } while (iVar5 < 2);
  uVar4 = FUN_088908e0();
  FUN_0885a290(DAT_089d4dc8,uVar4);
  if (*(char *)(param_1 + 0x1a) == '\0') {
    FUN_08890874(DAT_089d6ac0);
  }
  if (local_3f == '\0') {
    if (local_40 != '\0') {
      func_0x08afbe4c(local_fb4);
    }
  }
  else {
    func_0x08af8720(local_1050);
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    if (*(char *)(DAT_089d6a00 + 0x18) == '\0') {
      FUN_088994c0(0);
      FUN_08893418(0,0,0x8b53830,0);
    }
    else {
      FUN_088994c0(1);
      FUN_08893418(0,1,0x8b53830,0);
    }
  }
  else {
    FUN_08892d30(DAT_089d6ac8);
    *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 1;
  }
  FUN_08899688();
  uVar4 = 0x3800;
  uVar6 = 0x38000;
  if (*(char *)(DAT_089d5ec0 + 0x2ccf) != '\0') {
    uVar6 = 0;
    uVar4 = 0;
  }
  FUN_088a5d78(DAT_089d6d80,FUN_08866528,FUN_08866560,uVar6,uVar4,0);
  FUN_088a94f0(DAT_089d6dc8,0);
  iVar13 = _DAT_08b23058;
  local_74 = (int)*(short *)(ppuVar18 + 0x3cf);
  local_70 = (int)*(short *)(ppuVar18 + 0x7e7);
  uVar4 = FUN_088908e0();
  func_0x08b21ab8(iVar13,local_54,local_58,&local_74,uVar4,param_1[0x15]);
  func_0x08b53890(_DAT_08b54330);
  uVar4 = FUN_088908e0();
  func_0x08abb7fc(uVar4);
  uVar4 = FUN_08889924(param_1);
  func_0x08b13b70(uVar4);
  puVar16 = (undefined4 *)FUN_088d09d8(DAT_089d7830,1,0xe);
  param_1[0x1cf] = puVar16;
  if (puVar16 != (undefined4 *)0x0) {
    FUN_0887d66c(*(undefined4 *)(DAT_089d6998 + 0xf2c0),*puVar16);
  }
  uVar4 = FUN_08889924(param_1);
  func_0x08b13c34(uVar4);
  uVar4 = FUN_088908e0();
  FUN_08841eb4(uVar4);
  FUN_08842220(2);
  FUN_08842220(7);
  func_0x08a61fc8(_DAT_08a62280);
  func_0x08ac8fe4(_DAT_08aca350,param_1 + 0x1ea);
  func_0x08aceec4(_DAT_08acf110);
  local_3c = 0;
  iVar5 = func_0x089dd67c(0x1d28);
  iVar13 = local_3c;
  if (iVar5 != 0) {
    func_0x089dd4d0(iVar5);
    iVar13 = iVar5;
  }
  param_1[0x1e9] = iVar13;
  func_0x08b177fc(*(undefined1 *)(param_1 + 0x1a),local_58);
  func_0x08b177b4();
  func_0x08b53254(_DAT_08b54330);
  uVar4 = param_1[1];
  if ((*(int *)(DAT_089d6a10 + 0x4c) != 9) || ((*(uint *)(param_1[0x1f2] + 0xbde8) & 2) == 0)) {
    if (*(int *)(DAT_089d6a10 + 0x4c) == 5) {
      local_1080 = local_68[2];
      func_0x08b20bc8(_DAT_08b212e8,uVar4,0x2f,0x7c42,local_48,param_1 + 0x3a,param_1 + 0x8c,
                      local_68[3]);
      *_DAT_08b212e8 = 0;
    }
    else {
      local_1080 = local_68[2];
      func_0x08b1d99c(_DAT_08b1fe60,uVar4,0x27,0x7c42,local_48,param_1 + 0x3a,param_1 + 0x8c,
                      local_68[3]);
    }
  }
  func_0x08b04d4c(_DAT_08b05258,uVar4,1,0xe09c);
  FUN_088cd624(local_48,uVar4,0x27,0x1ae,1,0x23a,0xf,1);
  FUN_088cca0c(local_68[2],uVar4,0x27,0x1b3,1,0x23a,0xf);
  iVar13 = 0;
  puVar8 = param_1 + 0x3a;
  puVar16 = param_1 + 0x8c;
  ppuVar15 = &PTR_caseD_893c500_089d0000;
  do {
    if ((iVar13 != 0) && (param_1[0x13] != 5)) break;
    iVar5 = 0;
    if (param_1[0x13] != 9) {
      iVar5 = param_1[0x15];
    }
    local_2c = ppuVar15;
    FUN_088de400(puVar8,uVar4,0x2f,0x1c2,1,0x23c,0xf,(uint)(iVar5 != iVar13));
    local_1080 = (undefined4 *)0x0;
    local_107c = (undefined **)(uint)(iVar5 != iVar13);
    FUN_088d6e24(puVar16,uVar4,0x27,0x1cc,1,0x23a,0xf,local_48);
    iVar13 = iVar13 + 1;
    puVar8 = puVar8 + 0x29;
    puVar16 = puVar16 + 0x9f;
    ppuVar15 = local_2c;
  } while (iVar13 < 2);
  FUN_088ce430(local_68[3],uVar4,0x27,0x1d6,1,0x23a,0xf);
  func_0x08b185d0(_DAT_08b18830,_DAT_08b23058,uVar4,1,0xdd18);
  local_1080 = (undefined4 *)0xe86c;
  FUN_08893b90(param_1[1],1,20000,0xffffffff,60000,0xffffffff,0x13114,0xffffffff);
  local_1080 = (undefined4 *)0x10d88;
  local_107c = ppuVar19;
  local_1078 = 73000;
  local_1074 = 1;
  local_1070 = 31000;
  local_106c = 1;
  local_1068 = 0x797c;
  local_1064 = ppuVar19;
  local_1060 = 58000;
  local_105c = ppuVar19;
  local_1058 = 86000;
  FUN_08841cc0(param_1[1],1,30000,1,40000,0xffffffff,70000,0xffffffff);
  func_0x08b3c45c(param_1[1],1,32000,0xffffffff,59000,0xffffffff,100000);
  func_0x08b3ba40(_DAT_08b3d6b8);
  func_0x08ab55e8(param_1[1],1,0x7b0c);
  puVar16 = local_4c;
  FUN_08865088(local_4c,1,0x7bd4,0x8ac949c,"obj::EX_REVENGE_MANAGER::Update");
  FUN_08865088(puVar16,1,0x7b3e,0x8acf064,"obj::HIT_STOP::Update");
  FUN_088759c0(DAT_089d6040);
  FUN_08865088(puVar16,0xffffffff,0x11017,FUN_0888b1a0,"SepiaDraw");
  FUN_08865088(puVar16,0xffffffff,87000,FUN_0888b1dc,"SepiaAfterDraw");
  local_1080 = (undefined4 *)0x186a0;
  local_107c = (undefined **)0x10fe0;
  local_1078 = 0x139ac;
  FUN_088a5a98(param_1[1],3,0xffffffff,0xdb24,0xdb88,0xe808,0x1101c,80000);
  FUN_088a9814(param_1[1],3,56000);
  FUN_08895d78(param_1[1],1,53000);
  FUN_0889597c(param_1[1],1,0xd0fc,0xffffffff,0x10f7c);
  FUN_08865088(puVar16,1,50000,FUN_088881dc,"UPHEAVE_MANAGER::Update");
  FUN_08865088(puVar16,1,0x7594,FUN_0888b98c,"MAP_UNIQUE_MANAGER::Update");
  FUN_08865088(puVar16,0xffffffff,0xe89e,FUN_0888b9ac,"MAP_UNIQUE_MANAGER::FirstDraw");
  FUN_08865088(puVar16,0xffffffff,0xec54,FUN_0888b9cc,"MAP_UNIQUE_MANAGER::SecondDraw");
  FUN_08865088(puVar16,0xffffffff,85000,FUN_0888b9ec,"MAP_UNIQUE_MANAGER::Draw");
  FUN_08865088(puVar16,1,0xd1c4,FUN_088880f8,"SCRAPE_MANAGER::Update");
  FUN_08865088(puVar16,0xffffffff,61000,FUN_088880b8,"SCRAPE_MANAGER::Draw");
  FUN_08865088(puVar16,0xffffffff,0x13178,FUN_088880d8,"SCRAPE_MANAGER::DrawAlpha");
  uVar6 = _DAT_08acee24;
  uVar7 = FUN_088908f0();
  func_0x08acd9b4(uVar6,uVar7);
  FUN_08865088(puVar16,1,0xd228,FUN_0888813c,"GLASS_CRACK::Update");
  FUN_08865088(puVar16,0xffffffff,79000,FUN_0888815c,"GLASS_CRACK::Draw");
  FUN_08865088(puVar16,0xffffffff,0x1368c,FUN_088881bc,"SUPER_SKILL::DrawFlash");
  FUN_08865088(puVar16,1,0xdcb4,FUN_08888078,"SCREEN_FADE::UpdateBeforeMenu");
  FUN_08865088(puVar16,1,0xdcb4,FUN_08873e48,"SCREEN_FADE::UpdateAfterMenu");
  FUN_08865088(puVar16,0xffffffff,0x18768,FUN_08888098,"SCREEN_FADE::DrawBeforeMenu");
  FUN_08865088(puVar16,1,0xd1f6,FUN_0888817c,"PROG_EFFECT_MANAGER::Update");
  FUN_08865088(puVar16,0xffffffff,83000,FUN_0888819c,"PROG_EFFECT_MANAGER::Draw");
  FUN_08865088(puVar16,0xffffffff,0xd282,0x8abaef4,"CRYSTAL_MANAGER::UpdateFirst");
  FUN_08865088(puVar16,1,0xd28c,0x8abaf14,"CRYSTAL_MANAGER::Update");
  FUN_08865088(puVar16,0xffffffff,0xd296,0x8abaf34,"CRYSTAL_MANAGER::UpdateLast");
  FUN_08865088(puVar16,0xffffffff,77000,0x8abaf54,"CRYSTAL_MANAGER::Draw");
  FUN_08865088(puVar16,0xffffffff,0x14dfc,0x8abaf74,"CRYSTAL_MANAGER::DrawEffect");
  func_0x08ab54c0(_DAT_08ab6738);
  func_0x08ad0810(param_1[1],1,0x75f8);
  FUN_08865088(puVar16,9,1000,FUN_088890f8,"FIELD::MainTask");
  uVar6 = DAT_089d69a8;
  uVar7 = FUN_0888227c(DAT_089d69a8,0xffffffff,0x11194,FUN_08889118,"DrawAfter");
  param_1[0x202] = uVar7;
  uVar6 = FUN_0888227c(uVar6,0xffffffff,0x1b59,FUN_08889138,"NetworkMaskTask");
  param_1[0x203] = uVar6;
  FUN_08865088(puVar16,0xffffffff,1000,0x8adfa74,"BRAVE_BREAK_EFFECT::Draw");
  uVar6 = DAT_089d6ad0;
  uVar7 = FUN_088908e0();
  FUN_088958ec(uVar6,uVar7);
  FUN_08886744(DAT_089d69f8);
  func_0x08acabfc(_DAT_08acbbc8);
  FUN_08895be4(DAT_089d6ae0);
  if (DAT_09afee54 != 0) {
    iVar13 = sceGeEdramGetAddr();
    iVar13 = iVar13 + DAT_09afee54;
    uVar6 = FUN_08866ef4(DAT_089d5ec0);
    FUN_088711c0(iVar13,uVar6,0x1e0,0x110);
  }
  func_0x08a80188(_DAT_08a80218);
  func_0x08aeaf9c();
  FUN_0888ba0c(param_1);
  FUN_088421ec();
  uVar6 = _DAT_08b54330;
  uVar7 = FUN_088908e0();
  DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
  func_0x08b532fc(uVar6,uVar7,DAT_09af84d0 >> 0x10 & 0x7fff);
  func_0x08abb114(_DAT_08abbdf8,(int)*(short *)((int)local_44 + 0x25da));
  func_0x08abb5bc(_DAT_08abbdf8);
  func_0x08a22044(_DAT_08a22ab0,local_54,_DAT_08b23058);
  func_0x08b015f8(_DAT_08b04ba0);
  FUN_08888354(param_1);
  FUN_0888700c(DAT_089d69f8,param_1[0xe],param_1[0xf]);
  iVar13 = FUN_0889716c(param_1[0x200]);
  func_0x08b11988(_DAT_08b11e28,(int)*(short *)(iVar13 + 0x44));
  func_0x08b05ccc(_DAT_08b0cf20);
  FUN_0888fcac();
  uVar6 = param_1[1];
  if (param_1[0x1e9] != 0) {
    func_0x089dd6b4(param_1[0x1e9],uVar6,_DAT_08b23058);
    uVar6 = param_1[1];
  }
  func_0x08aef05c(uVar6);
  FUN_08865088(puVar16,1,0xd192,0x8ab3e80,"BRIGHTNESS_MANAGER::Update");
  iVar13 = FUN_08865088(puVar16,3,0x5dc,0x8a22978,"PTCOMMAND_MANAGER::Update");
  if (iVar13 != 0) {
    *(undefined4 *)(iVar13 + 4) = _DAT_08a22ab0;
  }
  iVar13 = FUN_08865088(puVar16,0xffffffff,1000,0x8a229c8,"PTCOMMAND_MANAGER::Draw");
  if (iVar13 != 0) {
    *(undefined4 *)(iVar13 + 4) = _DAT_08a22ab0;
  }
  iVar13 = FUN_08865088(puVar16,0xffffffff,0x752e,0x8a22a18,"PTCOMMAND_MANAGER::SetFlagToPlayer");
  if (iVar13 != 0) {
    *(undefined4 *)(iVar13 + 4) = _DAT_08a22ab0;
  }
  iVar13 = FUN_08865088(puVar16,1,0x7b70,0x8b01b74,"ASSIST_MANAGER::Update");
  if (iVar13 != 0) {
    *(undefined4 *)(iVar13 + 4) = _DAT_08b04ba0;
  }
  iVar13 = FUN_08865088(puVar16,0xffffffff,29999,0x8b01bc4,"ASSIST_MANAGER::SetFlagToPlayer");
  if (iVar13 != 0) {
    *(undefined4 *)(iVar13 + 4) = _DAT_08b04ba0;
  }
  func_0x08abb3c4(*(undefined4 *)(_DAT_08b4afa8 + 0x10),*(undefined4 *)(_DAT_08b4afa8 + 0x18),
                  *(undefined4 *)(_DAT_08b4afa8 + 0x1c),*(undefined4 *)(_DAT_08b4afa8 + 0x20),
                  _DAT_08abbdf8);
  if (param_1[0x1e9] != 0) {
    iVar13 = FUN_088f47e0(0xb);
    if (iVar13 < 1) {
      if (-1 < iVar13) {
        func_0x089dda98(param_1[0x1e9],2);
      }
    }
    else if (iVar13 < 2) {
      func_0x089dda98(param_1[0x1e9],0);
    }
    else if (iVar13 < 3) {
      func_0x089dda98(param_1[0x1e9],1);
    }
  }
  FUN_08887a4c(DAT_089d6a00);
  FUN_088ebebc(DAT_089d7ed0);
  if ((local_3f == '\x01') && (func_0x08af2d08(local_1050,&local_6c), local_6c != ppuVar19)) {
    param_1[0x201] = local_6c;
  }
  func_0x08b0db10(_DAT_08b11e28);
  if ((*(int *)(DAT_089d6a10 + 0x4c) != 9) ||
     (iVar13 = param_1[0x1f2], (*(uint *)(iVar13 + 0xbde8) & 2) == 0)) {
    if (*(int *)(DAT_089d6a10 + 0x4c) == 5) {
      func_0x08b20d28(_DAT_08b212e8,local_48);
      iVar13 = param_1[0x1f2];
    }
    else {
      func_0x08b1e5dc(_DAT_08b1fe60);
      iVar13 = param_1[0x1f2];
    }
  }
  FUN_088c990c(iVar13,param_1[0x201]);
  if (param_1[0x13] == 5) {
    cVar10 = *(char *)(DAT_089d8508 + 0x2a12);
    uVar6 = FUN_088f7030(0,(int)*(char *)(DAT_089d8508 + 0x2a05));
    uVar7 = FUN_088f7030(1,(int)cVar10);
    FUN_08907000(DAT_089d8364,uVar6,uVar7);
    func_0x08b132a0(_DAT_08b13b48);
  }
  uVar6 = _DAT_08acee20;
  local_4c = puVar16;
  uVar7 = FUN_088908f0();
  func_0x08acd0f0(uVar6,uVar7);
  FUN_08865088(local_4c,0xffffffff,0x11044,FUN_08888118,"GLASS_CRACK_CAPTURE::Update");
  FUN_088f0a78(1);
  *(undefined4 *)(ppuVar15[0x1e0c] + 8) = 0;
  FUN_08865088(local_4c,0xffffffff,100,FUN_088892c8,"ExecPadInitByChangeTask");
  FUN_08865088(local_4c,3,300,FUN_0888948c,"FIELD::ReplayRecordAndPlayTask");
  if (param_1[0x13] == 9) {
    iVar13 = 0;
    iVar5 = param_1[0x1f2];
    puVar16 = param_1;
    do {
      iVar13 = iVar13 + 1;
      *(undefined4 *)((int)ppuVar9 + 0x1018) = puVar16[0xe];
      puVar16 = puVar16 + 1;
      ppuVar9 = (undefined4 **)((int)ppuVar9 + 4);
    } while (iVar13 < 2);
    if ((*(uint *)(iVar5 + 0xbde8) & 2) == 0) {
      uVar6 = FUN_088720a4();
      uVar7 = param_1[0x1f2];
    }
    else {
      uVar6 = FUN_08872b48(0);
      uVar7 = param_1[0x1f2];
    }
    local_1080 = (undefined4 *)0x7c9c;
    local_107c = (undefined **)0xe679;
    func_0x08b236ec(_DAT_08b27990,uVar6,uVar7,local_68,uVar4,0x23,0x27,0x7c38);
    iVar13 = param_1[0x1f2];
    if ((*(uint *)(iVar13 + 0xbde8) & 2) == 0) {
      func_0x08b27b1c(_DAT_08b28588,uVar4,0x27,57000,iVar13,_DAT_08b27990,_DAT_08b23058);
      iVar13 = FUN_088d7244(param_1 + 0x8c);
      if ((iVar13 != 0) && (*(int *)(_DAT_08b23058 + 4) != 0)) {
        FUN_088cfa94(ppuVar15[0x1e0c],iVar13,*(int *)(_DAT_08b23058 + 4));
      }
    }
    else {
      func_0x08b27c58(_DAT_08b28588,iVar13,_DAT_08b23058);
      func_0x08b2cd60(_DAT_08b2d2b8,uVar4,0x43,0xe100,param_1[0x1f2]);
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_08844a60(DAT_089d4960);
  local_fb4[0] = 0x8afc570;
  FUN_088ec234(local_fb4,0);
  local_1050[0] = 0x8afb520;
  FUN_0887b1f4(auStack_fc8,2);
  FUN_088ec234(local_1050,0);
  return;
}

