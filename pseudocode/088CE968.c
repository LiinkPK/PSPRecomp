/* Entry 0x088CE968 | file offset 0x000CB940 | FUN_088ce968 | bytes 972 */

undefined4 FUN_088ce968(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  piVar7 = param_1 + 0xf;
  piVar8 = param_1 + 0xcdd;
  piVar9 = param_1 + 0x3140;
  piVar10 = param_1 + 0x3af5;
  iVar1 = FUN_08882118(0x63c00,0x40);
  uVar3 = iVar1 + 3U & 0xfffffffc;
  *param_1 = iVar1;
  iVar1 = FUN_0885c40c(uVar3,0x63c00 - ((uVar3 - iVar1) + 3 & 0xfffffffc),"MENU MANAGER",4);
  param_1[1] = iVar1;
  param_1[2] = 0;
  iVar1 = FUN_0885c6cc(iVar1,0x3520,0,0,1,0);
  param_1[4] = iVar1;
  FUN_08935828(piVar7,0x39,0x3338);
  FUN_08935828(piVar8,0x39,0x9180);
  FUN_08935828(piVar9,0x39,0x26c8);
  FUN_08935828(piVar10,0x39,0x1d90);
  param_1[7] = -1;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  iVar1 = 0;
  piVar4 = param_1 + 0x207;
  piVar6 = param_1 + 0x11;
  piVar5 = param_1;
  do {
    piVar5[0xf] = (int)piVar4;
    piVar5[0x10] = (int)piVar6;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 0xb;
    piVar5 = piVar5 + 2;
    piVar6 = piVar6 + 2;
  } while (iVar1 < 0xfc);
  FUN_08935828(param_1 + 0x207,0,0x2b50);
  param_1[0x206] = (int)piVar7;
  param_1[0xcdb] = (int)piVar7;
  param_1[0xcdc] = (int)piVar7;
  iVar1 = 0;
  piVar4 = param_1 + 0x10b1;
  piVar6 = param_1 + 0xcdf;
  piVar5 = param_1;
  do {
    piVar5[0xcdd] = (int)piVar4;
    piVar5[0xcde] = (int)piVar6;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 0x11;
    piVar5 = piVar5 + 2;
    piVar6 = piVar6 + 2;
  } while (iVar1 < 0x1ea);
  FUN_08935828(param_1 + 0x10b1,0,0x8228);
  param_1[0x10b0] = (int)piVar8;
  param_1[0x313b] = (int)piVar8;
  param_1[0x313c] = (int)piVar8;
  param_1[0x313e] = 0;
  param_1[0x313d] = 0;
  param_1[0x313f] = 0;
  iVar1 = 0;
  piVar5 = param_1 + 0x31e0;
  piVar4 = param_1 + 0x4000;
  piVar6 = param_1 + 0x3142;
  piVar7 = param_1 + 0x4000;
  do {
    piVar4[-0xec0] = (int)piVar5;
    piVar7[-0xebf] = (int)piVar6;
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 0x1d;
    piVar4 = piVar4 + 2;
    piVar6 = piVar6 + 2;
    piVar7 = piVar7 + 2;
  } while (iVar1 < 0x50);
  FUN_08935828(param_1 + 0x31e0,0,0x2440);
  param_1[0x31df] = (int)piVar9;
  param_1[0x3af0] = (int)piVar9;
  param_1[0x3af1] = (int)piVar9;
  param_1[0x3af3] = 0;
  param_1[0x3af2] = 0;
  param_1[0x3af4] = 0;
  iVar1 = 0;
  piVar5 = param_1 + 0x3d11;
  piVar4 = param_1 + 0x4000;
  piVar6 = param_1 + 0x3af7;
  piVar7 = param_1 + 0x4000;
  do {
    piVar4[-0x50b] = (int)piVar5;
    piVar7[-0x50a] = (int)piVar6;
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 5;
    piVar4 = piVar4 + 2;
    piVar6 = piVar6 + 2;
    piVar7 = piVar7 + 2;
  } while (iVar1 < 0x10e);
  FUN_08935828(param_1 + 0x3d11,0,0x1518);
  param_1[0x3d10] = (int)piVar10;
  param_1[0x4257] = (int)piVar10;
  param_1[0x4258] = (int)piVar10;
  param_1[0x4259] = 0;
  param_1[0x425a] = 0;
  param_1[0x425b] = 0;
  uVar2 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar2,1,0x88ba,FUN_088d1598,"MENU_MANAGER::ExecuteUpdate");
  uVar2 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar2,0xffffffff,0x11193,FUN_088d15bc,"MENU_MANAGER::Draw");
  uVar2 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar2,0xffffffff,0x11199,FUN_088d15e0,"MENU_MANAGER::DrawAfter");
  return 1;
}

