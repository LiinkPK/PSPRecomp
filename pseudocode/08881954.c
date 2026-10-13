/* Entry 0x08881954 | file offset 0x0007E92C | FUN_08881954 | bytes 1496 */

void FUN_08881954(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  code *local_44;
  code *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  uVar1 = FUN_08882118(0x2ec00,0x80);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x2ec00,"SYSTEM FONT",0x10);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  iVar2 = FUN_0885c6cc(uVar1,0x39c4,0,0,1,0);
  *(int *)(param_1 + 0x28) = iVar2;
  pcVar9 = param_1 + 0x48;
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_0887d574(iVar2);
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0xf2c0) = iVar4;
  uVar1 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0xc),0x800,0,0,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  iVar4 = 0;
  pcVar6 = param_1;
  do {
    pcVar6[0x30] = '\0';
    pcVar6[0x31] = '\0';
    pcVar6[0x32] = '\0';
    pcVar6[0x33] = '\0';
    pcVar6[0x35] = '\x12';
    pcVar6[0x36] = -0x80;
    pcVar6[0x37] = '\0';
    iVar4 = iVar4 + 1;
    pcVar6 = pcVar6 + 8;
  } while (iVar4 < 2);
  uVar1 = FUN_08882118(0x19000,0x80);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_0885c40c(uVar1,0x19000,"SYSTEM FONT T",0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  uVar1 = FUN_0886eebc(DAT_089d5f98,"libfont.prx",0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  local_50 = 0;
  local_4c = 5;
  local_48 = 0;
  local_44 = FUN_0887d6e0;
  local_40 = FUN_0887d750;
  local_3c = &LAB_0887d790;
  local_38 = &LAB_0887d79c;
  local_34 = &LAB_0887d7a4;
  local_30 = &LAB_0887d7b0;
  local_2c = 0;
  local_28 = 0;
  iVar4 = sceFontNewLib(&local_50,pcVar9);
  *(int *)(param_1 + 0x44) = iVar4;
  if (iVar4 != 0) {
    uVar1 = sceFontSetAltCharacterCode(*(undefined4 *)(param_1 + 0x44),0);
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    local_24 = sceFontGetNumFontList(*(undefined4 *)(param_1 + 0x44),pcVar9);
    if (local_24 != 0) {
      iVar4 = FUN_0887d7b8(0,local_24 * 0xa8);
      iVar2 = sceFontGetFontList(*(undefined4 *)(param_1 + 0x44),iVar4,local_24);
      if (iVar2 == 0) {
        iVar2 = 0;
        pcVar6 = param_1;
        do {
          pcVar6[0x4c] = '\0';
          pcVar6[0x4d] = '\0';
          pcVar6[0x4e] = '\0';
          pcVar6[0x4f] = '\0';
          iVar2 = iVar2 + 1;
          pcVar6 = pcVar6 + 4;
        } while (iVar2 < 5);
        sceKernelTotalFreeMemSize();
        iVar10 = 0;
        iVar11 = 0;
        iVar2 = iVar4;
        do {
          if (((iVar10 == 0) || (iVar10 == -1)) &&
             (iVar3 = sceFontFindFont(*(undefined4 *)(param_1 + 0x44),iVar2,pcVar9), iVar3 != -1)) {
            iVar3 = sceFontOpen(*(undefined4 *)(param_1 + 0x44),iVar3,0,pcVar9);
            iVar5 = iVar11 * 4;
            iVar11 = iVar11 + 1;
            *(int *)(param_1 + iVar5 + 0x4c) = iVar3;
            if (iVar3 == 0) {
              return;
            }
          }
          iVar10 = iVar10 + 1;
          iVar2 = iVar2 + 0xa8;
        } while (iVar10 < 1);
        sceKernelTotalFreeMemSize();
        iVar2 = sceFontGetFontInfo(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x60);
        *(int *)(param_1 + 0x48) = iVar2;
        if (iVar2 == 0) {
          FUN_0887d828(0,iVar4);
          param_1[0x68] = -0x80;
          param_1[0x69] = '\x04';
          param_1[0x6a] = '\0';
          param_1[0x6b] = '\0';
          *param_1 = (char)(0x480 - *(int *)(param_1 + 0x6c) >> 6);
          *param_1 = *param_1 + '\x03';
          param_1[1] = (char)(*(uint *)(param_1 + 100) >> 6);
          param_1[2] = (char)(*(uint *)(param_1 + 0x60) >> 6);
          param_1[3] = '\x14';
          param_1[0x16c] = '\0';
          param_1[0x16d] = '\0';
          param_1[0x16e] = '\0';
          param_1[0x16f] = '\0';
          param_1[0x168] = '\0';
          param_1[0x169] = '\0';
          param_1[0x16a] = '\0';
          param_1[0x16b] = '\0';
          param_1[0x170] = '\0';
          param_1[0x171] = '\0';
          param_1[0x172] = '\0';
          param_1[0x173] = '\0';
          param_1[0x178] = '\0';
          param_1[0x179] = '\0';
          param_1[0x17a] = '\0';
          param_1[0x17b] = '\0';
          param_1[0x174] = '\0';
          param_1[0x175] = '\0';
          param_1[0x176] = '\0';
          param_1[0x177] = '\0';
          param_1[0x17c] = '\0';
          param_1[0x17d] = '\0';
          param_1[0x17e] = '\0';
          param_1[0x17f] = '\0';
          iVar4 = 0;
          pcVar6 = param_1 + 0xa90;
          pcVar7 = param_1 + 0x188;
          *(short *)(param_1 + 4) = (short)(8 / (byte)param_1[0x164]);
          pcVar9 = param_1;
          do {
            *(char **)(pcVar9 + 0x180) = pcVar6;
            *(char **)(pcVar9 + 0x184) = pcVar7;
            iVar4 = iVar4 + 1;
            pcVar6 = pcVar6 + 0x58;
            pcVar9 = pcVar9 + 8;
            pcVar7 = pcVar7 + 8;
          } while (iVar4 < 0x122);
          FUN_08935828(param_1 + 0xa90,0,0x63b0);
          pcVar9 = param_1 + 0x180;
          *(char **)(param_1 + 0xa8c) = pcVar9;
          *(char **)(param_1 + 0x6e40) = pcVar9;
          *(char **)(param_1 + 0x6e44) = pcVar9;
          iVar4 = 0;
          pcVar6 = param_1 + 0x74b0;
          pcVar7 = param_1 + 0x6e50;
          pcVar9 = param_1;
          do {
            *(char **)(pcVar9 + 0x6e48) = pcVar6;
            *(char **)(pcVar9 + 0x6e4c) = pcVar7;
            iVar4 = iVar4 + 1;
            pcVar6 = pcVar6 + 0x40;
            pcVar9 = pcVar9 + 8;
            pcVar7 = pcVar7 + 8;
          } while (iVar4 < 0xcd);
          FUN_08935828(param_1 + 0x74b0,0,0x3340);
          pcVar9 = param_1 + 0x6e48;
          *(char **)(param_1 + 0x74ac) = pcVar9;
          *(char **)(param_1 + 0xa7f0) = pcVar9;
          *(char **)(param_1 + 0xa7f4) = pcVar9;
          iVar4 = 0;
          pcVar9 = param_1 + 0xb6a8;
          pcVar6 = param_1 + 0x10000;
          pcVar7 = param_1 + 0xa800;
          pcVar8 = param_1 + 0x10000;
          do {
            *(char **)(pcVar6 + -0x5808) = pcVar9;
            *(char **)(pcVar8 + -0x5804) = pcVar7;
            iVar4 = iVar4 + 1;
            pcVar9 = pcVar9 + 0x18;
            pcVar6 = pcVar6 + 8;
            pcVar7 = pcVar7 + 8;
            pcVar8 = pcVar8 + 8;
          } while (iVar4 < 0x1d6);
          FUN_08935828(param_1 + 0xb6a8,0,0x2c10);
          pcVar9 = param_1 + 43000;
          *(char **)(param_1 + 0xb6a4) = pcVar9;
          *(char **)(param_1 + 0xe2b8) = pcVar9;
          *(char **)(param_1 + 0xe2bc) = pcVar9;
          iVar4 = 0;
          pcVar9 = param_1 + 0xe810;
          pcVar6 = param_1 + 0x10000;
          pcVar7 = param_1 + 0xe2c8;
          pcVar8 = param_1 + 0x10000;
          do {
            *(char **)(pcVar6 + -0x1d40) = pcVar9;
            *(char **)(pcVar8 + -0x1d3c) = pcVar7;
            iVar4 = iVar4 + 1;
            pcVar9 = pcVar9 + 0x10;
            pcVar6 = pcVar6 + 8;
            pcVar7 = pcVar7 + 8;
            pcVar8 = pcVar8 + 8;
          } while (iVar4 < 0xaa);
          FUN_08935828(param_1 + 0xe810,0,0xaa0);
          pcVar9 = param_1 + 0xe2c0;
          *(char **)(param_1 + 0xe80c) = pcVar9;
          *(char **)(param_1 + 0xf2b0) = pcVar9;
          *(char **)(param_1 + 0xf2b4) = pcVar9;
          uVar1 = FUN_08882274(DAT_089d69a8);
          uVar1 = FUN_088823c4(uVar1,0xffffffff,0x88b9,FUN_0887e4f4,"SYSTEM_FONT::Update");
          *(undefined4 *)(param_1 + 0xf2b8) = uVar1;
          uVar1 = FUN_08882274(DAT_089d69a8);
          uVar1 = FUN_088823c4(uVar1,0xffffffff,0x11196,FUN_0887e514,"SYSTEM_FONT::Draw");
          *(undefined4 *)(param_1 + 0xf2bc) = uVar1;
        }
      }
    }
  }
  return;
}

