/* Entry 0x08822800 | file offset 0x0001F7D8 | FUN_08822800 | bytes 648 */

undefined4 FUN_08822800(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
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
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [16];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_30;
  int local_2c;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((*(uint *)(*(int *)(param_1 + 0x24) + 0x560) & 0xf0) == 0x10) {
    local_30 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x394) + 0xc);
    local_2c = 0;
    if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
      iVar3 = 0;
      do {
        uVar1 = FUN_089b0e78(local_30,*(undefined1 *)(*(int *)(param_1 + 0x28) + iVar3 + 0x128));
        FUN_089a3ebc(&local_130);
        local_b0 = local_130;
        local_ac = local_12c;
        local_a8 = local_128;
        local_a4 = local_124;
        local_a0 = local_120;
        local_9c = local_11c;
        local_98 = local_118;
        local_94 = local_114;
        local_90 = local_110;
        local_8c = local_10c;
        local_88 = local_108;
        local_84 = local_104;
        local_80 = local_100;
        local_170 = local_130;
        local_16c = local_12c;
        local_168 = local_128;
        local_164 = local_124;
        local_160 = local_120;
        local_15c = local_11c;
        local_158 = local_118;
        local_154 = local_114;
        local_150 = local_110;
        local_14c = local_10c;
        local_148 = local_108;
        local_144 = local_104;
        local_140 = local_100;
        local_13c = local_fc;
        local_138 = local_f8;
        local_134 = local_f4;
        FUN_089a4124(*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar3 + 0x118),&local_170,&local_170
                    );
        FUN_089a3efc(&local_130,&local_170);
        uVar2 = FUN_089b1224(uVar1);
        FUN_089a3efc(auStack_f0,uVar2);
        FUN_089a3fb8(auStack_f0,&local_130,auStack_f0);
        FUN_089a3868(auStack_c0,*(int *)(param_1 + 0x28) + iVar3 + 0x90);
        FUN_089b11cc(uVar1,auStack_f0);
        local_2c = local_2c + 1;
        iVar3 = iVar3 + 0x130;
      } while (local_2c < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

