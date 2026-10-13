/* Entry 0x0883F69C | file offset 0x0003C674 | FUN_0883f69c | bytes 6728 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0883f69c(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 local_f0 [4];
  int local_e0 [4];
  undefined1 auStack_d0 [4];
  float afStack_cc [3];
  int local_c0 [9];
  uint local_9c;
  char local_98 [8];
  int local_90;
  undefined1 auStack_80 [20];
  int local_6c;
  int local_64;
  int local_4c;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  int local_34;
  
  FUN_0883739c(param_2);
  *(undefined4 *)(param_1 + 0x5e8) = 0;
  local_f0[0] = 100;
  local_34 = param_1 + 0x80;
  iVar13 = 0;
  if (*(int *)(DAT_089d6ac8 + 0x4d0) == -1) {
    iVar3 = (**(code **)(*(int *)(param_2 + 0x544) + 0x134))
                      (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x130));
    if (iVar3 != 0) {
      uVar4 = (**(code **)(*(int *)(param_2 + 0x544) + 0x134))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x130));
      iVar3 = FUN_0883739c(uVar4);
      if (iVar3 != 0) {
        iVar13 = (**(code **)(*(int *)(param_2 + 0x544) + 0x134))
                           (param_2 + *(short *)(*(int *)(param_2 + 0x544) + 0x130));
      }
    }
    iVar3 = DAT_089d69f8;
    if (iVar13 != 0) {
      local_e0[0] = param_2;
      local_90 = iVar13;
      iVar13 = 0;
      do {
        iVar12 = iVar13 * 0x50;
        piVar15 = local_e0 + iVar13 * 0x14;
        iVar8 = *piVar15;
        pbVar16 = *(byte **)(iVar8 + 0x52c);
        iVar17 = *(int *)(iVar3 + *(short *)(iVar8 + 0x10cc) * 4);
        iVar11 = *piVar15;
        local_e0[iVar13 * 0x14 + 1] = *(int *)(iVar8 + 0x1108);
        FUN_089a3868(auStack_d0 + iVar12,iVar11 + 0x80);
        local_e0[iVar13 * 0x14 + 2] = iVar17 + 8;
        *(int *)(auStack_d0 + iVar12 + -4) = iVar17 + 0x110;
        iVar8 = *(int *)(pbVar16 + 0xc);
        local_c0[iVar13 * 0x14] = iVar8;
        iVar8 = iVar8 - *(int *)(pbVar16 + 8);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        local_c0[iVar13 * 0x14 + 1] = iVar8;
        iVar8 = *(int *)(pbVar16 + 0xc) - *(int *)(pbVar16 + 8);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar11 = *piVar15;
        local_c0[iVar13 * 0x14 + 2] = (iVar8 * 100) / *(int *)(pbVar16 + 0xc);
        local_c0[iVar13 * 0x14 + 3] = (int)*(short *)(pbVar16 + 0x14);
        local_c0[iVar13 * 0x14 + 4] = (int)*(short *)(pbVar16 + 0x16);
        local_c0[iVar13 * 0x14 + 5] = (int)*(float *)(pbVar16 + 0x18);
        local_c0[iVar13 * 0x14 + 6] = (int)(*(float *)(pbVar16 + 0x18) * 100.0) / 10000;
        local_c0[iVar13 * 0x14 + 7] = (int)*(float *)(pbVar16 + 0x1c);
        local_c0[iVar13 * 0x14 + 8] = (int)*(short *)(iVar11 + 0x180);
        if (pbVar16[1] == 0) {
          bVar2 = *pbVar16;
        }
        else {
          bVar2 = pbVar16[1];
        }
        iVar8 = *piVar15;
        *(uint *)(local_98 + iVar12 + -4) = (uint)bVar2;
        local_98[iVar12] = (*(byte *)(iVar8 + 0x5b2) & 4) != 0;
        local_98[iVar12 + 1] = (*(uint *)(pbVar16 + 0x28) & 4) != 0;
        iVar8 = *piVar15;
        local_98[iVar12 + 2] = (*(uint *)(pbVar16 + 0x28) & 2) != 0;
        iVar8 = *(int *)(iVar8 + 0x30c);
        cVar1 = *(char *)(iVar8 + 0x773);
        iVar11 = 0;
        do {
          iVar17 = FUN_088b7b18(iVar8 + 0x10 + cVar1 * 0xc6,iVar11);
          *(bool *)((int)piVar15 + iVar11 + 0x4c) = iVar17 != -1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < 4);
        iVar8 = *(int *)(iVar3 + 0x28 + iVar13 * 4);
        bVar10 = false;
        if (iVar8 != 0) {
          bVar10 = *(int *)(iVar8 + 8) == 2;
        }
        iVar13 = iVar13 + 1;
        local_98[iVar12 + 3] = bVar10;
      } while (iVar13 < 2);
      uVar4 = FUN_0893486c(local_c0[1] - local_6c);
      uVar5 = FUN_0893486c(local_c0[3] - local_64);
      uVar6 = FUN_0893486c(local_9c - local_4c);
      uVar18 = FUN_089a3c18(auStack_d0,auStack_80);
      uVar7 = func_0x08abb4b4(_DAT_08abbdf8);
      fVar19 = (float)FUN_0885ec48(iVar3 + 0x5c);
      uVar14 = 0;
      do {
        iVar3 = local_34 + uVar14 * 0x44;
        iVar13 = 0;
        if (0 < *(int *)(iVar3 + 8)) {
          do {
            puVar9 = (undefined2 *)(*(int *)(iVar3 + 4) + iVar13 * 8);
            iVar8 = *(int *)(puVar9 + 2);
            iVar12 = 0;
            if (*(short *)(iVar8 + 2) == 4) {
              iVar12 = (int)*(short *)(iVar8 + 10);
            }
            iVar11 = iVar12 * 0x50;
            iVar17 = 1 - iVar12;
            piVar15 = local_e0 + iVar12 * 0x14;
            switch(*puVar9) {
            case 0x10:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,local_c0[iVar12 * 0x14 + 1],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x11:
              local_3f = 0;
              iVar12 = FUN_0883ed80(local_f0,iVar8,local_c0[iVar12 * 0x14 + 1],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x12:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,
                                    (int)(**(float **)(auStack_d0 + iVar11 + -4) / 60.0),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x13:
              if (local_c0[iVar12 * 0x14 + 7] == 10000) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x14:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,
                                    (int)(*(float *)(*(int *)(auStack_d0 + iVar11 + -4) + 4) / 60.0)
                                    ,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x15:
              if (local_c0[iVar12 * 0x14 + 7] == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x16:
              if (local_98[iVar11 + 3] == '\x01') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x17:
              if ((*(byte *)(*piVar15 + 0x5b6) & 0x10) != 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x18:
              if ((local_e0[iVar12 * 0x14 + 1] != 0) &&
                 (iVar12 = FUN_08837990(local_e0[iVar12 * 0x14 + 1]), iVar12 == 0)) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x19:
              iVar12 = FUN_08838160(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x1a:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,
                                    (int)(*(float *)(*(int *)(auStack_d0 + iVar11 + -4) + 8) / 60.0)
                                    ,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x1b:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,
                                    (int)(*(float *)(*(int *)(auStack_d0 + iVar11 + -4) + 0xc) /
                                         60.0),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x1c:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x2c) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x1d:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x24) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x1e:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x20) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x1f:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x30) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x20:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x38) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x21:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x40) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x22:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x60) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x46:
              if (local_98[iVar11 + 4] == '\0') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x47:
              if (local_98[iVar11 + 5] == '\0') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x48:
              if (local_98[iVar11 + 6] == '\0') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x49:
              if (local_98[iVar11 + 7] == '\0') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x4f:
              if ((local_c0[iVar12 * 0x14 + 5] == 10000) && (local_c0[iVar12 * 0x14 + 7] == 10000))
              {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x50:
              if ((*(int *)(local_e0[iVar12 * 0x14 + 2] + 4) == 0) &&
                 (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x10) == 0)) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x51:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,
                                    *(int *)(local_98 + iVar17 * 0x50 + -4) -
                                    *(int *)(local_98 + iVar11 + -4),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa1:
              if (local_c0[iVar12 * 0x14 + 1] == local_c0[iVar12 * 0x14]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa2:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,local_c0[iVar12 * 0x14 + 2],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa3:
              local_3f = 0;
              iVar12 = FUN_0883ed80(local_f0,iVar8,local_c0[iVar12 * 0x14 + 2],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa4:
              local_3e = 0;
              iVar12 = FUN_0883ede4(local_f0,iVar8,local_c0[iVar12 * 0x14 + 2],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa5:
              local_3d = 0;
              iVar12 = FUN_0883ee58(local_f0,iVar8,local_c0[iVar12 * 0x14 + 1],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa6:
              if (local_98[iVar11 + 1] == '\x01') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa7:
              if (local_c0[iVar12 * 0x14 + 1] <= local_c0[iVar17 * 0x14 + 3]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa8:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,uVar4,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xa9:
              local_3f = 0;
              iVar12 = FUN_0883ed80(local_f0,iVar8,uVar4,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xaa:
              local_3c = 0;
              iVar12 = FUN_0883eebc(local_f0,iVar8,local_c0[iVar12 * 0x14 + 1],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xab:
              iVar12 = FUN_088697bc(local_c0[iVar12 * 0x14 + 1]);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xac:
              if (local_c0[iVar12 * 0x14 + 4] <= local_c0[iVar12 * 0x14 + 3]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xad:
              if (local_c0[iVar12 * 0x14 + 3] <= local_c0[iVar12 * 0x14 + 4]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xae:
              if ((*(uint *)(*piVar15 + 900) & 0x800000) != 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xaf:
              if ((local_98[iVar11 + 2] != '\0') && ((*(uint *)(*piVar15 + 900) & 0x800000) == 0)) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb0:
              if (local_c0[iVar17 * 0x14 + 1] <= local_c0[iVar12 * 0x14 + 3]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb1:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,uVar5,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb2:
              local_3f = 0;
              iVar12 = FUN_0883ed80(local_f0,iVar8,uVar5,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb3:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x14) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb4:
              local_3d = 0;
              iVar12 = FUN_0883ee58(local_f0,iVar8,local_c0[iVar12 * 0x14 + 3],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb5:
              local_3c = 0;
              iVar12 = FUN_0883eebc(local_f0,iVar8,local_c0[iVar12 * 0x14 + 3],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb6:
              iVar12 = FUN_088697bc(local_c0[iVar12 * 0x14 + 3]);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb7:
              if (local_c0[iVar12 * 0x14 + 5] == 10000) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb8:
              if (local_c0[iVar12 * 0x14 + 5] == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xb9:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,local_c0[iVar12 * 0x14 + 6],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xba:
              local_3f = 0;
              iVar12 = FUN_0883ed80(local_f0,iVar8,local_c0[iVar12 * 0x14 + 6],0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xbb:
              if (local_98[iVar11] == '\0') {
                local_39 = 0;
                iVar12 = FUN_0883ed1c(local_f0,iVar8,local_c0[iVar12 * 0x14 + 6],0);
                if (iVar12 == 1) {
                  *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
                }
              }
              break;
            case 0xbc:
              if (local_98[iVar11] == '\0') {
                local_38 = 0;
                iVar12 = FUN_0883ed80(local_f0,iVar8,local_c0[iVar12 * 0x14 + 6],0);
                if (iVar12 == 1) {
                  *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
                }
              }
              break;
            case 0xbd:
              if (local_98[iVar11] == '\x01') {
                local_37 = 0;
                iVar12 = FUN_0883ed1c(local_f0,iVar8,local_c0[iVar12 * 0x14 + 6],0);
                if (iVar12 == 1) {
                  *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
                }
              }
              break;
            case 0xbe:
              if (local_98[iVar11] == '\x01') {
                local_36 = 0;
                iVar12 = FUN_0883ed80(local_f0,iVar8,local_c0[iVar12 * 0x14 + 6],0);
                if (iVar12 == 1) {
                  *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
                }
              }
              break;
            case 0xbf:
              iVar12 = func_0x08ab78e8(uVar7);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc0:
              if ((*(int *)(*piVar15 + 0x10d0) == 1) &&
                 (iVar12 = func_0x08b3390c(*piVar15), iVar12 == 0)) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc1:
              iVar12 = func_0x08b3390c(*piVar15);
              if (0 < iVar12) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc3:
              if (local_c0[iVar12 * 0x14 + 8] == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc4:
              if ((((local_c0[iVar12 * 0x14 + 8] == 2) || (local_c0[iVar12 * 0x14 + 8] == 3)) ||
                  (local_c0[iVar12 * 0x14 + 8] == 100)) || (local_c0[iVar12 * 0x14 + 8] == 0x67)) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc5:
              if ((*(uint *)(*piVar15 + 0x380) & 0x40) != 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc6:
              if ((*(uint *)(*piVar15 + 0x380) & 0x80) != 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 199:
              iVar12 = FUN_08838074(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 200:
              iVar12 = FUN_08837310(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xc9:
              iVar12 = FUN_08837458(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xca:
              iVar12 = FUN_08838178(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xcb:
              iVar12 = FUN_088378e8(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xcc:
              if (local_98[iVar11] == '\x01') {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xcd:
              break;
            case 0xce:
              break;
            case 0xcf:
              break;
            case 0xd0:
              if (*(int *)local_e0[iVar12 * 0x14 + 2] == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd1:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 4) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd2:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0xc) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd3:
              if (*(int *)(local_e0[iVar12 * 0x14 + 2] + 0x10) == 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd4:
              if ((*(uint *)(*piVar15 + 0x380) & 0x2000000) != 0) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd5:
              iVar12 = FUN_088374b0(*piVar15);
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd6:
              local_3b = 0;
              iVar12 = FUN_0883ef24(uVar18,local_f0,iVar8,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd7:
              local_3a = 0;
              iVar12 = FUN_0883ef9c(uVar18,local_f0,iVar8,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd8:
              if (afStack_cc[iVar17 * 0x14] < afStack_cc[iVar12 * 0x14]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xd9:
              if (afStack_cc[iVar12 * 0x14] < afStack_cc[iVar17 * 0x14]) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xda:
              if (((*(uint *)(*piVar15 + 0x380) & 0x2000000) != 0) &&
                 (iVar12 = FUN_088374b0(local_e0[iVar17 * 0x14]), iVar12 != 0)) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xdb:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,(int)(fVar19 / 60.0),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xdc:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,uVar6,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xdd:
              local_3f = 0;
              iVar12 = FUN_0883ed80(local_f0,iVar8,uVar6,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xde:
              local_3d = 0;
              iVar12 = FUN_0883ee58(local_f0,iVar8,(*(int *)(local_98 + iVar11 + -4) / 10) * 10,0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xdf:
              local_3d = 0;
              iVar12 = FUN_0883ee58(local_f0,iVar8,*(undefined4 *)(local_98 + iVar11 + -4),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xe0:
              local_3c = 0;
              iVar12 = FUN_0883eebc(local_f0,iVar8,*(undefined4 *)(local_98 + iVar11 + -4),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0xe1:
              iVar12 = FUN_088697bc(*(undefined4 *)(local_98 + iVar11 + -4));
              if (iVar12 == 1) {
                FUN_0883ecd8(local_f0,iVar8);
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
              break;
            case 0x15d:
              local_40 = 0;
              iVar12 = FUN_0883ed1c(local_f0,iVar8,
                                    (int)(*(float *)(*(int *)(auStack_d0 + iVar11 + -4) + 0x10) /
                                         60.0),0);
              if (iVar12 == 1) {
                *(uint *)(param_1 + 0x5e8) = *(uint *)(param_1 + 0x5e8) | 1 << (uVar14 & 0x1f);
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < *(int *)(iVar3 + 8));
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < 10);
    }
  }
  else {
    local_f0[0] = 100;
  }
  return local_f0[0];
}

