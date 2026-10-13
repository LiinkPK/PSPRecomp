/* Entry 0x088E3F2C | file offset 0x000E0F04 | FUN_088e3f2c | bytes 1044 */

void FUN_088e3f2c(int *param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 local_1c0 [16];
  short local_180 [16];
  undefined4 local_160 [16];
  short local_120 [16];
  undefined4 local_100 [32];
  short local_80 [32];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  puVar13 = local_1c0;
  puVar14 = local_1c0;
  puVar15 = local_1c0;
  puVar16 = local_1c0;
  iVar4 = param_1[1];
  iVar6 = *(int *)(iVar4 + 0x488);
  if (0 < iVar6) {
    iVar10 = 0;
    iVar12 = 0;
    iVar9 = 0;
    do {
      iVar4 = FUN_08935c14(iVar4 + iVar10 + 0x48c,".sequence");
      iVar8 = iVar9 + 1;
      if (iVar4 == 0) {
        iVar4 = param_1[1];
        iVar6 = *(int *)(iVar4 + 0x488);
      }
      else {
        uVar3 = FUN_088e2afc(param_1,param_2,*(undefined4 *)(*param_1 + iVar12 + 0x170c),
                             *(undefined4 *)(*param_1 + iVar12 + 0x175c));
        iVar4 = *param_1;
        *puVar13 = uVar3;
        iVar10 = iVar10 + 0x40;
        *(short *)((int)puVar14 + 0x40) = (short)*(undefined4 *)(iVar4 + iVar12 + 0x175c);
        iVar12 = iVar12 + 4;
        FUN_08935c14(param_1[1] + iVar10 + 0x48c,&DAT_089cc5a8);
        uVar3 = FUN_088e2afc(param_1,param_2,*(undefined4 *)(*param_1 + iVar12 + 0x170c),
                             *(undefined4 *)(*param_1 + iVar12 + 0x175c));
        iVar4 = *param_1;
        puVar13[0x18] = uVar3;
        puVar13 = puVar13 + 1;
        *(short *)((int)puVar14 + 0xa0) = (short)*(undefined4 *)(iVar4 + iVar12 + 0x175c);
        iVar4 = param_1[1];
        puVar14 = (undefined4 *)((int)puVar14 + 2);
        iVar8 = iVar9 + 2;
        iVar6 = *(int *)(iVar4 + 0x488);
      }
      iVar10 = iVar10 + 0x40;
      iVar12 = iVar12 + 4;
      iVar9 = iVar8;
    } while (iVar8 < iVar6);
  }
  iVar10 = 0;
  iVar9 = 0;
  if (0 < iVar6) {
    iVar6 = 0;
    iVar12 = 0;
    do {
      iVar4 = FUN_08935c14(iVar4 + iVar6 + 0x48c,&DAT_089cc5ac);
      if (iVar4 == 0) {
        iVar4 = param_1[1];
        iVar8 = *(int *)(iVar4 + 0x488);
      }
      else {
        uVar3 = FUN_088e2afc(param_1,param_2,*(undefined4 *)(*param_1 + iVar12 + 0x170c),
                             *(undefined4 *)(*param_1 + iVar12 + 0x175c));
        iVar4 = *param_1;
        *(undefined4 *)((int)puVar15 + 0xc0) = uVar3;
        iVar9 = iVar9 + 1;
        *(short *)((int)puVar16 + 0x140) = (short)*(undefined4 *)(iVar4 + iVar12 + 0x175c);
        iVar4 = param_1[1];
        puVar15 = (undefined4 *)((int)puVar15 + 4);
        puVar16 = (undefined4 *)((int)puVar16 + 2);
        iVar8 = *(int *)(iVar4 + 0x488);
      }
      iVar10 = iVar10 + 1;
      iVar6 = iVar6 + 0x40;
      iVar12 = iVar12 + 4;
    } while (iVar10 < iVar8);
  }
  iVar6 = 0;
  iVar10 = 0;
  uVar7 = 0;
  piVar11 = param_1;
  if (*(char *)(iVar4 + 2) != '\0') {
    do {
      psVar5 = (short *)(*(int *)(iVar4 + 0x480) + iVar10);
      sVar2 = *psVar5;
      iVar4 = (int)psVar5[1];
      if ((iVar9 < 1) || (iVar9 <= iVar4)) {
        iVar12 = FUN_088cf188(DAT_089d7830,local_1c0[sVar2],(int)local_180[sVar2],0,0,
                              local_160[sVar2],(int)local_120[sVar2]);
        iVar4 = param_1[1];
        piVar11[0x18] = iVar12;
        bVar1 = *(byte *)(iVar4 + 2);
      }
      else {
        iVar12 = FUN_088cf188(DAT_089d7830,local_1c0[sVar2],(int)local_180[sVar2],local_100[iVar4],
                              (int)local_80[iVar4],local_160[sVar2],(int)local_120[sVar2]);
        iVar4 = param_1[1];
        piVar11[0x18] = iVar12;
        bVar1 = *(byte *)(iVar4 + 2);
      }
      uVar7 = (uint)bVar1;
      iVar6 = iVar6 + 1;
      iVar10 = iVar10 + 4;
      piVar11 = piVar11 + 1;
    } while (iVar6 < (int)uVar7);
  }
  iVar6 = uVar7 - 1;
  iVar9 = iVar6 * 4;
  if (-1 < iVar6) {
    piVar11 = param_1 + iVar6;
    do {
      FUN_088cf970(DAT_089d7830,piVar11[0x18]);
      iVar9 = iVar9 + -4;
      piVar11 = piVar11 + -1;
    } while (-1 < iVar9);
    iVar4 = param_1[1];
  }
  iVar6 = 0;
  if (0 < *(int *)(iVar4 + 0x488)) {
    iVar9 = 0;
    iVar10 = 0;
    do {
      iVar4 = FUN_08935c14(iVar4 + iVar9 + 0x48c,&DAT_089cc5b4);
      if (iVar4 == 0) {
        iVar4 = param_1[1];
        iVar12 = *(int *)(iVar4 + 0x488);
      }
      else {
        local_40 = 0;
        local_3c = 0;
        iVar4 = FUN_08870bd4(*(undefined4 *)(*param_1 + iVar10 + 0x170c),&local_40,&local_3c);
        if (iVar4 == 0) {
          local_40 = *(undefined4 *)(*param_1 + iVar10 + 0x170c);
          local_3c = *(undefined4 *)(*param_1 + iVar10 + 0x175c);
        }
        iVar4 = FUN_0885c6cc(param_2,local_3c,0,0,1,0);
        param_1[0x19b] = iVar4;
        FUN_08935524(iVar4,local_40,local_3c);
        local_38 = 0;
        iVar12 = FUN_0887b080(0x10);
        iVar4 = local_38;
        if (iVar12 != 0) {
          FUN_0887a61c(iVar12);
          iVar4 = iVar12;
        }
        param_1[0xe4] = iVar4;
        FUN_0887ac24(iVar4,param_1[0x19b]);
        iVar4 = param_1[1];
        iVar12 = *(int *)(iVar4 + 0x488);
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 0x40;
      iVar10 = iVar10 + 4;
    } while (iVar6 < iVar12);
  }
  return;
}

