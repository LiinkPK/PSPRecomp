/* Entry 0x08824E24 | file offset 0x00021DFC | FUN_08824e24 | bytes 1752 */

undefined4 FUN_08824e24(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar2 & 0xfffffffd;
    *(uint *)(param_1 + 0x20) = uVar2 & 0xfffffff9;
    *(uint *)(param_1 + 0x20) = uVar2 & 0xfffffff1;
    *(uint *)(param_1 + 0x20) = uVar2 & 0xffffffe1;
    FUN_089a3890(param_1);
    FUN_089a3890(param_1 + 0x10);
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x394) + 0xc);
    FUN_089b18fc(0,uVar1,1000);
    FUN_089b2c14(uVar1);
    local_38 = 0;
    if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xfe;
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xfd;
        local_160 = 0;
        local_15c = 0;
        local_158 = 0;
        local_154 = 0x3f800000;
        FUN_089a3868(*(int *)(param_1 + 0x28) + iVar7 + 0x90,&local_160);
        FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + 0xa0);
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 0x129) = *(byte *)(iVar3 + 0x129) & 0x7f;
        FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + 0xb0);
        FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + 0xc0);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 + 0x118) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 + 0x11c) = 0;
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar7);
        FUN_089a3ebc(puVar4);
        local_150 = *puVar4;
        local_14c = puVar4[1];
        local_148 = puVar4[2];
        local_144 = puVar4[3];
        local_140 = puVar4[4];
        local_13c = puVar4[5];
        local_138 = puVar4[6];
        local_134 = puVar4[7];
        local_130 = puVar4[8];
        local_12c = puVar4[9];
        local_128 = puVar4[10];
        local_124 = puVar4[0xb];
        local_120 = puVar4[0xc];
        local_3c = puVar4[0xd];
        local_40 = puVar4[0xe];
        uVar8 = puVar4[0xf];
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        FUN_089a3ebc((undefined4 *)(iVar3 + 0x40));
        local_110 = *(undefined4 *)(iVar3 + 0x40);
        local_10c = *(undefined4 *)(iVar3 + 0x44);
        local_108 = *(undefined4 *)(iVar3 + 0x48);
        local_104 = *(undefined4 *)(iVar3 + 0x4c);
        local_100 = *(undefined4 *)(iVar3 + 0x50);
        local_fc = *(undefined4 *)(iVar3 + 0x54);
        local_f8 = *(undefined4 *)(iVar3 + 0x58);
        local_f4 = *(undefined4 *)(iVar3 + 0x5c);
        local_f0 = *(undefined4 *)(iVar3 + 0x60);
        local_ec = *(undefined4 *)(iVar3 + 100);
        local_e8 = *(undefined4 *)(iVar3 + 0x68);
        local_e4 = *(undefined4 *)(iVar3 + 0x6c);
        local_e0 = *(undefined4 *)(iVar3 + 0x70);
        uVar10 = *(undefined4 *)(iVar3 + 0x74);
        uVar9 = *(undefined4 *)(iVar3 + 0x78);
        uVar1 = *(undefined4 *)(iVar3 + 0x7c);
        FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + 0x80);
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xdf;
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xbf;
        FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + 0xd0);
        FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + 0xe0);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 + 0x120) = 0x7f7fffff;
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 + 0x124) = 0x7f7fffff;
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xfb;
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xf7;
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        *(byte *)(iVar3 + 299) = *(byte *)(iVar3 + 299) & 0xef;
        iVar3 = *(int *)(param_1 + 0x28) + iVar7;
        iVar6 = 0;
        *(byte *)(iVar3 + 0x12a) = *(byte *)(iVar3 + 0x12a) & 0x3f;
        iVar5 = 0;
        iVar3 = 0;
        do {
          FUN_089a3890(*(int *)(param_1 + 0x28) + iVar7 + iVar5 + 0xf0);
          iVar6 = iVar6 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar7 + iVar3 + 0x110) = 0;
          iVar5 = iVar5 + 0x10;
          iVar3 = iVar3 + 4;
        } while (iVar6 < 2);
        local_38 = local_38 + 1;
        iVar7 = iVar7 + 0x130;
      } while (local_38 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
      local_11c = local_3c;
      local_118 = local_40;
      local_114 = uVar8;
      local_dc = uVar10;
      local_d8 = uVar9;
      local_d4 = uVar1;
    }
    iVar7 = 0;
    if ('\0' < *(char *)(param_1 + 0x30)) {
      iVar3 = 0;
      do {
        local_d0 = 0;
        local_cc = 0;
        local_c8 = 0;
        local_c4 = 0x3f800000;
        FUN_089a3868(*(int *)(param_1 + 0x2c) + iVar3,&local_d0);
        local_d0 = 0;
        local_cc = 0;
        local_c8 = 0;
        local_c4 = 0x3f800000;
        FUN_089a3868(*(int *)(param_1 + 0x2c) + iVar3 + 0x10,&local_d0);
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 + 0x74) = 0x7f7fffff;
        *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar3 + 0x78) = 0x7f7fffff;
        iVar5 = *(int *)(param_1 + 0x2c) + iVar3;
        *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xfe;
        iVar5 = *(int *)(param_1 + 0x2c) + iVar3;
        *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xfd;
        *(undefined2 *)(*(int *)(param_1 + 0x2c) + iVar3 + 0x7c) = 0xffff;
        iVar5 = *(int *)(param_1 + 0x2c) + iVar3;
        *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xfb;
        FUN_089a3890(*(int *)(param_1 + 0x2c) + iVar3 + 0x20);
        FUN_089a3890(*(int *)(param_1 + 0x2c) + iVar3 + 0x30);
        FUN_089a3890(*(int *)(param_1 + 0x2c) + iVar3 + 0x40);
        FUN_089a3890(*(int *)(param_1 + 0x2c) + iVar3 + 0x50);
        FUN_089a3890(*(int *)(param_1 + 0x2c) + iVar3 + 0x60);
        iVar5 = *(int *)(param_1 + 0x2c) + iVar3;
        *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xf7;
        iVar7 = iVar7 + 1;
        iVar5 = *(int *)(param_1 + 0x2c) + iVar3;
        *(byte *)(iVar5 + 0x7f) = *(byte *)(iVar5 + 0x7f) & 0xef;
        iVar3 = iVar3 + 0x80;
      } while (iVar7 < *(char *)(param_1 + 0x30));
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x544);
    (**(code **)(iVar7 + 0xec))(*(int *)(param_1 + 0x24) + (int)*(short *)(iVar7 + 0xe8));
    FUN_08823870(param_1);
    iVar7 = 0;
    iVar3 = 0;
    if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
      do {
        iVar5 = *(int *)(param_1 + 0x28) + iVar3;
        FUN_089a3868(iVar5 + 0x90,iVar5 + 0x30);
        FUN_089a3868(iVar5 + 0x80,iVar5 + 0x90);
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x130;
      } while (iVar7 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
    }
    FUN_088242ec(param_1);
    FUN_088243d0(param_1);
    FUN_088244f4(param_1);
    iVar7 = 0;
    iVar3 = 0;
    if ('\0' < *(char *)(param_1 + 0x30)) {
      do {
        iVar5 = *(int *)(param_1 + 0x2c) + iVar3;
        iVar6 = iVar5 + 0x10;
        FUN_089a3868(iVar6,*(int *)(param_1 + 0x2c) + iVar3);
        FUN_089a3868(iVar5 + 0x40,iVar6);
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + 0x80;
      } while (iVar7 < *(char *)(param_1 + 0x30));
    }
    FUN_08825de0(param_1,0xffffffff);
    uVar1 = 0;
  }
  return uVar1;
}

