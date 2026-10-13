/* Entry 0x0884CF64 | file offset 0x00049F3C | FUN_0884cf64 | bytes 1780 */

undefined4 FUN_0884cf64(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char cVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
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
  undefined1 auStack_d0 [16];
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
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  char local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  
  if (*(int *)(DAT_089d6ac8 + 0x4d0) == -1) {
    puVar2 = (undefined4 *)param_1[6];
    iVar11 = 1;
    local_b0 = *puVar2;
    uVar15 = 0x3f800000;
    local_ac = puVar2[1];
    local_a8 = puVar2[2];
    local_a4 = 0x3f800000;
    if (((param_1[0xb] & 0x200000U) == 0) && (iVar3 = *(int *)(param_2 + 0x40), iVar3 < 10)) {
      iVar5 = 0;
      iVar12 = *param_1;
      iVar8 = param_2;
      if (0 < iVar3) {
        do {
          if (*(int *)(iVar8 + 0x18) == iVar12) {
            return 0;
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar5 < iVar3);
      }
      iVar3 = *(int *)(param_2 + 0x40);
      *(int *)(param_2 + 0x40) = iVar3 + 1;
      *(int *)(param_2 + iVar3 * 4 + 0x18) = iVar12;
      local_48 = param_2;
      local_44 = param_1;
      FUN_089a3868(auStack_160,param_2 + 0x50);
      FUN_089a3868(auStack_150,param_2 + 0x60);
      FUN_089a3868(auStack_140,param_2 + 0xb0);
      FUN_089a3868(auStack_130,param_2 + 0xc0);
      puVar2 = (undefined4 *)param_1[8];
      local_120 = *puVar2;
      local_11c = puVar2[1];
      puVar7 = (undefined4 *)param_1[7];
      local_118 = puVar2[2];
      local_114 = 0x3f800000;
      local_110 = *puVar7;
      local_10c = puVar7[1];
      puVar6 = (undefined4 *)param_1[9];
      local_108 = puVar7[2];
      local_104 = 0x3f800000;
      local_100 = *puVar6;
      local_fc = puVar6[1];
      puVar2 = (undefined4 *)param_1[10];
      local_f8 = puVar6[2];
      local_f4 = 0x3f800000;
      if (puVar2 != (undefined4 *)0x0) {
        local_f0 = *puVar2;
        local_ec = puVar2[1];
        iVar11 = 2;
        local_e8 = puVar2[2];
        local_e4 = 0x3f800000;
      }
      local_60 = '\x01';
      local_4c = 0;
      local_54 = auStack_160;
      local_58 = auStack_150;
      puVar10 = auStack_140;
      local_50 = iVar11;
      local_40 = param_2 + 0x60;
      local_3c = param_2 + 0x50;
      do {
        iVar11 = 0;
        puVar2 = &local_120;
        if (0 < local_50) {
          puVar7 = &local_110;
          puVar6 = &local_100;
          do {
            local_5c = puVar10;
            iVar3 = FUN_08860230(local_54,local_58,puVar10,puVar2,puVar7,puVar6,auStack_80,
                                 auStack_70);
            if (iVar3 != 0) {
              if (local_60 == '\0') {
                local_5c = puVar10;
                fVar14 = (float)FUN_089a3c18(&local_e0,auStack_80);
                fVar13 = (float)FUN_089a3c18(&local_e0,auStack_70);
                cVar9 = fVar13 < fVar14;
                if (!(bool)cVar9) {
                  fVar13 = fVar14;
                }
                fVar14 = (float)FUN_089a3c18(auStack_d0,auStack_80);
                if (fVar14 < fVar13) {
                  cVar9 = '\x02';
                  fVar13 = fVar14;
                }
                fVar14 = (float)FUN_089a3c18(auStack_d0,auStack_70);
                if (fVar14 < fVar13) {
                  cVar9 = '\x03';
                  fVar13 = fVar14;
                }
                if (fVar13 < 0.01) {
                  if (cVar9 == '\0') {
                    FUN_089a3868(&local_e0,auStack_70);
                  }
                  if (cVar9 == '\x01') {
                    FUN_089a3868(&local_e0,auStack_80);
                  }
                  if (cVar9 == '\x02') {
                    FUN_089a3868(auStack_d0,auStack_70);
                  }
                  if (cVar9 == '\x03') {
                    FUN_089a3868(auStack_d0,auStack_80);
                  }
                }
              }
              else {
                local_5c = puVar10;
                FUN_089a3868(&local_e0,auStack_80);
                FUN_089a3868(auStack_d0,auStack_70);
                local_60 = '\0';
              }
            }
            iVar11 = iVar11 + 1;
            puVar2 = puVar2 + 4;
            puVar7 = puVar7 + 4;
            puVar6 = puVar6 + 4;
            puVar10 = local_5c;
          } while (iVar11 < local_50);
        }
        iVar3 = local_3c;
        iVar11 = local_40;
        piVar1 = local_44;
        local_4c = local_4c + 1;
        local_54 = local_54 + 0x10;
        local_58 = local_58 + 0x10;
        puVar10 = puVar10 + 0x10;
      } while (local_4c < 2);
      if (((local_60 == '\0') && (uVar4 = (local_44[0xb] & 0x1f0000U) >> 0x10, uVar4 != 0)) &&
         (uVar4 < 0x20)) {
        FUN_0886871c(&local_a0,local_3c,local_40,&local_e0);
        local_180 = local_a0;
        local_17c = local_9c;
        local_178 = local_98;
        local_174 = local_94;
        fVar13 = (float)FUN_089a3c18(&local_180,&local_e0);
        FUN_0886871c(&local_90,iVar3,iVar11,auStack_d0);
        local_180 = local_90;
        local_17c = local_8c;
        local_178 = local_88;
        local_174 = local_84;
        fVar14 = (float)FUN_089a3c18(&local_180,auStack_d0);
        if (fVar13 < fVar14) {
          FUN_089a3868(auStack_c0,&local_e0);
          FUN_089a3868(&local_e0,auStack_d0);
          FUN_089a3868(auStack_d0,auStack_c0);
        }
        iVar11 = local_48;
        if (*(char *)(local_48 + 0xd1) != '\0') {
          uVar15 = 0x3f000000;
        }
        FUN_0884ca90(uVar15,&local_e0,auStack_d0,(piVar1[0xb] & 0x1f0000U) >> 0x10,&local_b0);
        FUN_089a3a44(0x3c75c28f,auStack_170,&local_b0);
        FUN_089a38a8(&local_e0,&local_e0,auStack_170);
        FUN_089a38a8(auStack_d0,auStack_d0,auStack_170);
        iVar5 = 0;
        iVar3 = FUN_0883739c(*(undefined4 *)(iVar11 + 0x10));
        iVar8 = *(int *)(iVar11 + 0x10);
        if (iVar3 == 0) {
          if (*(char *)(iVar8 + 0x542) == '\x03') {
            iVar5 = iVar8 + 0x5d8;
          }
        }
        else {
          iVar5 = iVar8 + 0x76c;
        }
        FUN_0884b458(iVar5,&local_e0,auStack_d0,&local_b0,(char)piVar1[0xb],
                     (piVar1[0xb] & 0x1f0000U) >> 0x10);
        uVar15 = 4;
        if (*(char *)(iVar11 + 0xd1) != '\0') {
          uVar15 = 5;
        }
        puVar2 = (undefined4 *)FUN_08896b40(DAT_089d6af0,(piVar1[0xb] & 0x1f0000U) >> 0x10,uVar15,1)
        ;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_e0;
          puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
          puVar2[1] = local_dc;
          puVar2[2] = local_d8;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[0xd] = puVar2[0xd] & 0xfffffdff;
        }
      }
    }
  }
  return 0;
}

