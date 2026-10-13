/* Entry 0x0891813C | file offset 0x00115114 | FUN_0891813c | bytes 2712 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0891813c(undefined4 *param_1)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = FUN_088820d8(0x2000);
  *param_1 = uVar1;
  FUN_0886504c(param_1 + 1,uVar1,0x2000);
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  FUN_08860e3c();
  FUN_08933c28(DAT_089d85e8);
  FUN_08914b64(param_1,0);
  FUN_08911020(DAT_089d83a0,0);
  FUN_088a5250();
  FUN_088a5d78(DAT_089d6d80,FUN_08866528,FUN_08866560,0,0,0);
  FUN_088a94f0(DAT_089d6dc8,0);
  FUN_0890ea5c(0);
  if (-1 < (int)param_1[0x13]) {
    uVar1 = FUN_08912cfc();
    param_1[0x15] = uVar1;
    param_1[0x14] = 0xffffffff;
    if ((int)param_1[0x16] < 0) {
      param_1[0x16] = (int)*(char *)(param_1[0x15] + 2);
    }
    if ((int)param_1[0xe] < 0) {
      param_1[0xe] = (int)*(char *)(param_1[0x15] + 5);
    }
  }
  psVar2 = (short *)FUN_0891705c(0xffffffff);
  *(undefined4 *)(psVar2 + 0x132) = *(undefined4 *)(psVar2 + 0x132);
  *(uint *)(psVar2 + 0x130) = *(uint *)(psVar2 + 0x130) | 1;
  psVar2[0xd8] = (short)param_1[0x13];
  psVar2[0xd9] = (short)param_1[0xe];
  psVar2[5] = (short)*(char *)(param_1[0x15] + 4);
  *(undefined1 *)((int)param_1 + 0x7e6) = 0;
  if ((((*(uint *)(psVar2 + 0x130) & 2) == 0) && ((int)param_1[0x11] < 0)) &&
     ((int)param_1[0x10] < 0)) {
    *(undefined1 *)((int)param_1 + 0x7e6) = 1;
  }
  uVar1 = FUN_089132a4(param_1[0xe]);
  param_1[0xf] = uVar1;
  if ((*(char *)((int)param_1 + 0x7e6) == '\0') && (0 < *psVar2)) {
    param_1[0x17] = (int)*psVar2;
    iVar4 = param_1[0x17];
    param_1[0x18] = (uint)*(byte *)((int)psVar2 + 0xf);
    param_1[0x19] = (uint)*(byte *)(psVar2 + 0xe8);
  }
  else {
    iVar5 = param_1[0xf];
    iVar4 = (int)*(char *)(iVar5 + 9);
    if (iVar4 < 1) {
      iVar4 = (int)*psVar2;
    }
    param_1[0x17] = iVar4;
    param_1[0x18] = (int)*(char *)(iVar5 + 10);
    param_1[0x19] = (int)*(char *)(iVar5 + 0xb);
    FUN_08912ad8(psVar2,0,iVar4);
    FUN_08912af8(psVar2,param_1[0x18],param_1[0x19]);
    iVar4 = param_1[0x17];
  }
  if (iVar4 < 1) {
    param_1[0x17] = 1;
    FUN_08912ad8(psVar2,0,1);
  }
  iVar4 = FUN_0889716c((int)*(short *)(param_1[0xf] + 2));
  FUN_0890ecfc(iVar4 + 0x20);
  iVar4 = param_1[0xf];
  iVar5 = 0;
  puVar7 = param_1;
  do {
    puVar7[0x1b5] = 0;
    puVar7[0x1b9] = 0;
    puVar7[0x1bd] = 0xffffffff;
    puVar7[0x1c1] = 0;
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 4);
  iVar5 = 0;
  puVar7 = param_1;
  do {
    iVar8 = (int)*(char *)(iVar4 + 0x1c + iVar5);
    if (iVar8 != 0) {
      puVar7[0x1b5] = iVar8;
      puVar7[0x1b9] = (int)*(char *)(iVar4 + 0x20 + iVar5);
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar5 < 4);
  FUN_08915048(param_1);
  if (param_1[0x1c] == 4) {
    if (*(char *)((int)param_1 + 0x7dd) == '\0') {
      iVar5 = DAT_089d712c + 0x3f548;
      iVar4 = FUN_089203bc(iVar5);
      FUN_0892039c(iVar5,(int)((float)iVar4 * -0.2));
    }
    else {
      iVar4 = FUN_0891705c(0xffffffff);
      iVar5 = FUN_089121d0(param_1[0x1db]);
      puVar6 = (uint *)(iVar4 + ((uint)(int)*(short *)(iVar5 + 2) >> 5) * 4 + 0x90);
      *puVar6 = *puVar6 | 1 << ((int)*(short *)(iVar5 + 2) & 0x1fU);
    }
  }
  iVar4 = FUN_088f47e0(4);
  iVar5 = FUN_088f47e0(1);
  iVar8 = FUN_088f47e0(2);
  iVar9 = 0;
  do {
    FUN_0887309c(iVar9,iVar4 == 0,iVar5 == 0,iVar8 == 0,0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  iVar4 = FUN_0891595c(param_1);
  if (iVar4 == 0) {
    FUN_088ebccc(DAT_089d7ed0,1,0);
    FUN_08866aa8(0,0,0);
    FUN_088d16a4(DAT_089d7830);
    FUN_088a0d40();
    uVar1 = FUN_089110b4();
    FUN_08841eb4(uVar1);
    iVar5 = func_0x08b43818(0x288);
    iVar4 = 0;
    if (iVar5 != 0) {
      func_0x08b437d4(iVar5);
      iVar4 = iVar5;
    }
    param_1[0x22] = iVar4;
    func_0x08b43850(iVar4,param_1[0xe]);
    iVar5 = func_0x08b44f8c(0x10);
    iVar4 = 0;
    if (iVar5 != 0) {
      func_0x08b44f6c(iVar5);
      iVar4 = iVar5;
    }
    param_1[0x23] = iVar4;
    func_0x08b44fc4(iVar4,param_1[0xe]);
    FUN_0890f48c(param_1 + 0x24);
    FUN_08841cc0(param_1[1],1,30000,1,40000,3,70000,3,69000,3,73000,1,31000,1,0x797c,3,58000,3,
                 0x18a88);
    func_0x08b3c45c(param_1[1],1,32000,3,59000,3,0x1bd50);
    func_0x08b3ba40(_DAT_08b3d6b8);
    FUN_0891521c(param_1);
    FUN_0890ef38();
    FUN_088a5a98(param_1[1],1,3,0xdb24,0xdb88,0xe808,0x1101c,80000,100000,0x10fe0,0x139ac);
    FUN_088a9814(param_1[1],1,56000);
    uVar1 = DAT_089d6ac8;
    uVar3 = FUN_089110b4();
    FUN_0889384c(uVar1,uVar3);
    uVar1 = FUN_08899300();
    uVar3 = FUN_089110b4();
    FUN_08898df8(uVar1,uVar3);
    uVar1 = FUN_089110b4();
    FUN_089109fc(param_1 + 0x1f,uVar1);
    FUN_08899758(param_1[1],1,2000);
    FUN_08893b90(param_1[1],1,20000,3,60000,3,0x13114,1,0xe86c);
    FUN_08893c6c(param_1[1],1,2000);
    FUN_08915afc(param_1);
    FUN_088ab5a4(DAT_089d6dd0,0,0,1);
    func_0x08ad0810(param_1[1],1,0x75f8);
    FUN_08895d78(param_1[1],1,53000);
    FUN_0889597c(param_1[1],1,0xd0fc,3,0x10f7c);
    uVar1 = DAT_089d6ad0;
    uVar3 = FUN_089110b4();
    FUN_088958ec(uVar1,uVar3);
    if (DAT_09afee54 != 0) {
      iVar4 = sceGeEdramGetAddr();
      iVar4 = iVar4 + DAT_09afee54;
      uVar1 = FUN_08866ef4(DAT_089d5ec0);
      FUN_088711c0(iVar4,uVar1,0x1e0,0x110);
    }
    FUN_088823c4(param_1[1],1,0x7594,FUN_08917ed4,"map_unique::MAP_UNIQUE_MANAGER::Update");
    FUN_088823c4(param_1[1],3,0xe89e,FUN_08917ef4,"map_unique::MAP_UNIQUE_MANAGER::FirstDraw");
    FUN_088823c4(param_1[1],3,0xec54,FUN_08917f14,"map_unique::MAP_UNIQUE_MANAGER::SecondDraw");
    FUN_088823c4(param_1[1],3,85000,FUN_08917f34,"map_unique::MAP_UNIQUE_MANAGER::Draw");
    FUN_088823c4(param_1[1],1,0xd1f6,FUN_08917e94,"obj::PROG_EFFECT_MANAGER::Update");
    FUN_088823c4(param_1[1],3,83000,FUN_08917eb4,"obj::PROG_EFFECT_MANAGER::Draw");
    *(undefined1 *)(param_1 + 0x1f6) = 0;
    *(undefined1 *)((int)param_1 + 0x7da) = 0;
    *(undefined1 *)(param_1 + 0x1fa) = 0;
    FUN_088823c4(param_1[1],3,0x186a1,FUN_08861030,"DEPTH_BLUR::Draw");
    FUN_088823c4(param_1[1],3,0x186a2,FUN_08875958,"SEPIA::Draw");
    FUN_088eb2c8();
    FUN_088823c4(param_1[1],1,0x44c,FUN_089172a0,"ExecTalkEventTask");
    iVar5 = FUN_08862758(0x17d0);
    param_1[0x1d1] = iVar5;
    iVar4 = 0;
    if (iVar5 != 0) {
      FUN_088dfcf8(iVar5);
      iVar4 = iVar5;
    }
    param_1[0x1d1] = iVar4;
    FUN_088dfe58(iVar4,0);
    *(undefined4 *)(param_1[0x1d1] + 0xc30) = 0x40000;
    FUN_088823c4(param_1[1],0xffffffff,0x1b198,FUN_08917250,"DrawScreenFadeTask");
    uVar1 = FUN_08911128(0xc8000);
    param_1[0x1d4] = uVar1;
    if (param_1[0x1c] != 4) {
      param_1[0x1da] = 0xffffffff;
      param_1[0x1db] = 0xffffffff;
    }
    FUN_08916768(param_1);
    FUN_08911284(DAT_089d83a8);
    FUN_08915f88(param_1);
    uVar1 = DAT_089d83a8;
    uVar3 = FUN_089110b4();
    FUN_089115a4(uVar1,uVar3);
    FUN_08915d2c(param_1);
    FUN_089136fc(param_1);
    FUN_089114d0(DAT_089d83a8);
    FUN_08911510(DAT_089d83a8);
    FUN_08916298(param_1);
    uVar3 = param_1[0x15c];
    uVar1 = FUN_08911664(DAT_089d83a8);
    func_0x08b49cec(uVar3,uVar1);
    uVar1 = FUN_089110b4();
    FUN_0891f688(DAT_089d8520,1,uVar1);
    FUN_08916410(param_1);
    uVar1 = FUN_0891118c(0x4b000);
    uVar3 = FUN_088fe7c8("battle_non_residing.bin",0);
    FUN_088fe708("battle_non_residing.bin",uVar1,uVar3,0);
    FUN_088fe944("battle_non_residing.bin",uVar1,uVar3);
    FUN_0881391c(uVar1,uVar3);
    FUN_089111c4(uVar1);
    func_0x08a80188(_DAT_08a80218);
    *(undefined1 *)(DAT_089d4dc8 + 0x6a30) = 0;
    FUN_08844a60(DAT_089d4960);
    param_1[0x1c5] = 0;
    FUN_088823c4(param_1[1],4,0x4b0,FUN_089173d0,"CustomizeChange");
    FUN_088823c4(param_1[1],8,0x4b1,FUN_089175bc,"ShopChange");
    *(undefined1 *)((int)param_1 + 0x7db) = 0;
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    FUN_088ebebc(DAT_089d7ed0);
  }
  else {
    FUN_08933c00(DAT_089d85e8);
    FUN_08914b64(param_1,0x15);
  }
  return;
}

