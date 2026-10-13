/* Entry 0x0887F294 | file offset 0x0007C26C | FUN_0887f294 | bytes 9920 */

/* WARNING: Removing unreachable block (ram,0x088816d8) */
/* WARNING: Removing unreachable block (ram,0x08881700) */
/* WARNING: Removing unreachable block (ram,0x0887fb80) */
/* WARNING: Removing unreachable block (ram,0x0887fb88) */
/* WARNING: Removing unreachable block (ram,0x0887f370) */
/* WARNING: Removing unreachable block (ram,0x0887f3b0) */
/* WARNING: Removing unreachable block (ram,0x0887fc98) */
/* WARNING: Removing unreachable block (ram,0x0887fca0) */
/* WARNING: Removing unreachable block (ram,0x08881718) */

undefined4
FUN_0887f294(byte *param_1,undefined4 *param_2,undefined4 param_3,uint3 *param_4,undefined4 param_5,
            int param_6,int param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  ushort *puVar16;
  ushort uVar17;
  int *piVar18;
  uint3 *puVar19;
  uint3 *puVar20;
  char cVar21;
  uint uVar22;
  uint3 *puVar23;
  int iVar24;
  float fVar25;
  int local_e0;
  int local_dc;
  int local_d8 [2];
  int local_d0;
  int local_cc;
  int local_a8;
  undefined4 local_9c;
  int local_98;
  int local_94;
  ushort local_90;
  ushort local_8e;
  ushort local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  char local_74;
  int local_70;
  byte *local_6c;
  int local_68;
  uint3 *local_64;
  int local_60;
  char local_5c;
  undefined2 *local_58;
  int local_54;
  byte local_50;
  int local_4c;
  char local_48;
  uint local_44;
  undefined4 *local_40;
  char local_3c;
  uint3 *local_38;
  uint3 *local_34;
  
  local_60 = 0;
  local_d8[0] = 0;
  local_70 = 0;
  local_e0 = 0;
  local_54 = 0;
  puVar16 = (ushort *)**(undefined4 **)(param_1 + 0xa7f0);
  local_5c = '\0';
  **(undefined4 **)(param_1 + 0xa7f0) = 0;
  cVar21 = '\0';
  *(undefined4 *)(param_1 + 0xa7f0) = *(undefined4 *)(*(int *)(param_1 + 0xa7f0) + 4);
  local_68 = param_6;
  local_4c = param_7;
  local_40 = param_2;
  FUN_0887a4fc(puVar16);
  *param_2 = puVar16;
  puVar16[8] = 10;
  puVar16[6] = 0;
  fVar25 = 1.0;
  uVar22 = 0xffffff;
  piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
  **(undefined4 **)(param_1 + 0xe2b8) = 0;
  local_74 = '\x01';
  *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
  *piVar18 = 0;
  *(undefined1 *)((int)piVar18 + 0xd) = 0;
  piVar18[2] = 0x3f800000;
  uVar17 = puVar16[6];
  *(undefined1 *)(piVar18 + 3) = 0;
  *(ushort *)((int)piVar18 + 0xe) = uVar17;
  piVar18[1] = 0xffffff;
  local_38 = param_4;
  FUN_0887a584(puVar16,piVar18);
  *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
  local_64 = (uint3 *)0x0;
  local_50 = 0xff;
  local_6c = param_1 + 0x30;
  iVar24 = 0;
  cVar2 = local_74;
LAB_0887f434:
  local_74 = cVar2;
  cVar2 = local_74;
  uVar13 = (uint)(ushort)*param_4;
  puVar19 = (uint3 *)((int)param_4 + 2);
  if (uVar13 == 0) {
    if (local_64 != (uint3 *)0x0) {
      if (local_50 != 0xff) {
        if ((local_74 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = 0x3f800000;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
        *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 0x18;
        *piVar18 = (uint)local_6c[5] << 6;
        bVar3 = local_6c[5];
        puVar16[6] = puVar16[6] + 1;
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = 0x3f800000;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
        local_e0 = ((int)((local_e0 + 0x3f >> 6) * 0x40 + (uint)bVar3 * 0x40 + 0x3f) >> 6) << 6;
        local_50 = 0xff;
      }
      uVar13 = (uint)(ushort)*local_64;
      puVar19 = (uint3 *)((int)local_64 + 2);
      local_64 = (uint3 *)0x0;
    }
    if (uVar13 == 0) goto code_r0x0887f66c;
  }
  param_4 = puVar19;
  if (uVar13 != 0xd) {
    local_74 = cVar2;
    switch(uVar13) {
    case 10:
      cVar21 = cVar21 + *param_1;
      if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
        iVar9 = *piVar18 + 0x3f >> 6;
        *piVar18 = *piVar18 + 0x3f;
        *piVar18 = iVar9;
        puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar9 * (float)piVar18[2])
        ;
      }
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = (int)fVar25;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = uVar22;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 1;
      *(char *)((int)puVar16 + 0x13) = *(char *)((int)puVar16 + 0x13) + '\x01';
      iVar9 = (local_e0 + 0x3f >> 6) * 0x40 + 0x3f >> 6;
      if (local_70 < iVar9) {
        local_70 = iVar9;
      }
      local_60 = local_60 + 1;
      local_e0 = 0;
      local_5c = '\0';
      break;
    default:
      iVar9 = sceFontGetCharInfo(*(undefined4 *)(param_1 + 0x4c),uVar13,local_d8);
      *(int *)(param_1 + 0x48) = iVar9;
      cVar2 = local_74;
      if (iVar9 == 0) {
        bVar1 = local_a8 == 0;
        if (bVar1) {
          uVar13 = 0x3013;
          uVar10 = sceFontGetCharInfo(*(undefined4 *)(param_1 + 0x4c),0x3013,local_d8);
          *(undefined4 *)(param_1 + 0x48) = uVar10;
        }
        if ((uVar13 < 0x400) || (0x4ff < uVar13)) {
          iVar9 = local_a8;
          if (uVar13 == 0x201c) {
            iVar9 = local_d0 + -2;
            local_d0 = 2;
            iVar9 = local_a8 + iVar9 * -0x40;
          }
        }
        else {
          local_d0 = 0;
          iVar9 = (local_d8[0] + DAT_089d6900) * 0x40;
          if (local_a8 < iVar9) {
            iVar9 = local_a8;
          }
        }
        if (local_54 < 0x100) {
          if (bVar1) {
            iVar8 = local_54 * 8;
            *(undefined2 *)(*(int *)(param_1 + 0x2c) + iVar8) = 0xffff;
            *(undefined2 *)(*(int *)(param_1 + 0x2c) + iVar8 + 2) = 0xffff;
            *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar8 + 4) = 0xffffffff;
          }
          else {
            iVar8 = local_54 * 8;
            *(short *)(*(int *)(param_1 + 0x2c) + iVar8) = (short)local_d0;
            *(short *)(*(int *)(param_1 + 0x2c) + iVar8 + 2) = (short)local_cc;
            *(int *)(*(int *)(param_1 + 0x2c) + iVar8 + 4) = iVar9;
          }
          local_54 = local_54 + 1;
        }
        local_e0 = local_e0 + iVar9;
        if (local_e0 < 0x8001) {
          iVar8 = *piVar18;
        }
        else if (local_5c == '\0') {
          if ((local_74 != '\0') && (piVar18 != (int *)0x0)) {
            iVar8 = *piVar18 + 0x3f >> 6;
            *piVar18 = *piVar18 + 0x3f;
            *piVar18 = iVar8;
            puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                      (float)iVar8 * (float)piVar18[2]);
          }
          piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
          **(undefined4 **)(param_1 + 0xe2b8) = 0;
          *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
          *piVar18 = 0;
          *(undefined1 *)((int)piVar18 + 0xd) = 0;
          piVar18[2] = (int)fVar25;
          uVar17 = puVar16[6];
          *(char *)(piVar18 + 3) = cVar21;
          *(ushort *)((int)piVar18 + 0xe) = uVar17;
          piVar18[1] = uVar22;
          FUN_0887a584(puVar16,piVar18);
          *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
          local_e0 = (local_e0 + 0x3f >> 6) << 6;
          local_5c = '\x01';
          iVar8 = *piVar18;
        }
        else {
          iVar8 = *piVar18;
        }
        *piVar18 = iVar8 + iVar9;
        puVar16[6] = puVar16[6] + 1;
        cVar2 = local_74;
      }
      break;
    case 0x10:
      uVar22 = *puVar19 & 0xfffefefe | 0xff000000;
      if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
        iVar9 = *piVar18 + 0x3f >> 6;
        *piVar18 = *piVar18 + 0x3f;
        *piVar18 = iVar9;
        puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar9 * (float)piVar18[2])
        ;
      }
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = (int)fVar25;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = uVar22;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      local_e0 = (local_e0 + 0x3f >> 6) << 6;
      param_4 = (uint3 *)((int)puVar19 + ((int)(&DAT_089c9d2c)[uVar13] / 2) * 2);
      cVar2 = local_74;
      break;
    case 0x11:
      fVar25 = (float)(ushort)*puVar19 / 100.0;
      if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
        iVar9 = *piVar18 + 0x3f >> 6;
        *piVar18 = *piVar18 + 0x3f;
        *piVar18 = iVar9;
        puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar9 * (float)piVar18[2])
        ;
      }
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = (int)fVar25;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = uVar22;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      local_e0 = (local_e0 + 0x3f >> 6) << 6;
      param_4 = (uint3 *)((int)puVar19 + ((int)(&DAT_089c9d2c)[uVar13] / 2) * 2);
      cVar2 = local_74;
      break;
    case 0x12:
      *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 2;
      *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) & 0xfb;
      cVar21 = cVar21 + *param_1;
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = (int)fVar25;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = uVar22;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      iVar9 = local_e0 + 0x3f >> 6;
      if (local_70 < iVar9) {
        local_70 = iVar9;
      }
      local_74 = '\0';
      local_60 = local_60 + 1;
      local_e0 = 0;
      local_5c = '\0';
      cVar2 = local_74;
      break;
    case 0x13:
      if ((iVar24 < local_4c) && (local_68 != 0)) {
        if (*(int *)(local_68 + iVar24 * 4) != 0) {
          param_4 = *(uint3 **)(local_68 + iVar24 * 4);
          local_64 = puVar19;
        }
        iVar24 = iVar24 + 1;
      }
      break;
    case 0x15:
    case 0x1e:
      if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
        iVar9 = *piVar18 + 0x3f >> 6;
        *piVar18 = *piVar18 + 0x3f;
        *piVar18 = iVar9;
        puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar9 * (float)piVar18[2])
        ;
      }
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = 0x3f800000;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = uVar22;
      local_34 = puVar19;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      local_e0 = (local_e0 + 0x3f >> 6) << 6;
      *piVar18 = 0;
      *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 0x18;
      param_4 = local_34;
      do {
        pbVar14 = (byte *)0x0;
        iVar9 = 0;
        if (uVar13 == 0x1e) {
          iVar9 = 1;
          pbVar14 = param_1 + (((ushort)*param_4 & 0xff) - 1 & 0xffff) * 8 + 0x30;
LAB_088805d4:
          bVar3 = pbVar14[5];
        }
        else {
          bVar3 = bRam00000005;
          if (uVar13 == 0x15) {
            pbVar14 = param_1 + 0x38;
            iVar9 = ((int)(uint)(ushort)*param_4 >> 8 & 0xfU) - 1;
            goto LAB_088805d4;
          }
        }
        *piVar18 = *piVar18 + (uint)bVar3 * iVar9 * 0x40;
        local_e0 = local_e0 + (uint)pbVar14[5] * iVar9 * 0x40;
        puVar16[6] = puVar16[6] + (short)iVar9;
        param_4 = (uint3 *)((int)param_4 + ((int)(&DAT_089c9d2c)[uVar13] / 2) * 2);
        if (((ushort)*param_4 != 0x1e) && ((ushort)*param_4 != 0x15)) goto code_r0x08880668;
        uVar13 = (uint)(ushort)*param_4;
        param_4 = (uint3 *)((int)param_4 + 2);
      } while( true );
    case 0x16:
      *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) & 0xfd;
      *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 4;
      cVar21 = cVar21 + *param_1;
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = (int)fVar25;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = uVar22;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      iVar9 = local_e0 + 0x3f >> 6;
      if (local_70 < iVar9) {
        local_70 = iVar9;
      }
      local_74 = '\0';
      local_60 = local_60 + 1;
      local_e0 = 0;
      local_5c = '\0';
      cVar2 = local_74;
      break;
    case 0x17:
      break;
    case 0x18:
      if ((iVar24 < local_4c) && (local_68 != 0)) {
        uVar10 = *(undefined4 *)(local_68 + iVar24 * 4);
        local_64 = puVar19;
        param_4 = (uint3 *)FUN_088b98fc(uVar10);
        iVar24 = iVar24 + 1;
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = 0x3f800000;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
        *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 0x18;
        *piVar18 = (uint)local_6c[5] << 6;
        local_e0 = (local_e0 + 0x3f >> 6) * 0x40 + (uint)local_6c[5] * 0x40;
        puVar16[6] = puVar16[6] + 1;
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = (int)fVar25;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
        iVar9 = FUN_088c7f78(uVar10);
        if (iVar9 != 0) {
          iVar9 = FUN_088c7fe4(uVar10);
          local_50 = 0x15;
          if ((iVar9 != 0) && (local_50 = 0x15, (*(ushort *)(iVar9 + 4) & 2) != 0)) {
            local_50 = param_1[3];
          }
        }
      }
      break;
    case 0x19:
      if ((iVar24 < local_4c) && (local_68 != 0)) {
        local_64 = puVar19;
        iVar9 = FUN_088b1d9c(*(undefined4 *)(local_68 + iVar24 * 4));
        param_4 = (uint3 *)FUN_0887afbc(&DAT_09b49108,(int)*(short *)(iVar9 + 2),0);
        iVar24 = iVar24 + 1;
      }
      break;
    case 0x1a:
      if ((iVar24 < local_4c) && (local_68 != 0)) {
        local_64 = puVar19;
        iVar9 = FUN_088b29d8(*(undefined4 *)(local_68 + iVar24 * 4));
        local_34 = (uint3 *)FUN_0887afbc(&DAT_09b49118,(int)*(short *)(iVar9 + 2),0);
        iVar24 = iVar24 + 1;
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar8 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar8;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar8 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = 0x3f800000;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        param_4 = local_34;
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
        *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 0x18;
        *piVar18 = (uint)local_6c[5] << 6;
        local_e0 = (local_e0 + 0x3f >> 6) * 0x40 + (uint)local_6c[5] * 0x40;
        puVar16[6] = puVar16[6] + 1;
        local_50 = (byte)*(undefined4 *)(&DAT_089d6924 + *(char *)(iVar9 + 0x14) * 4);
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = (int)fVar25;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      }
      break;
    case 0x1b:
      uVar22 = 0xffffff;
      if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
        iVar9 = *piVar18 + 0x3f >> 6;
        *piVar18 = *piVar18 + 0x3f;
        *piVar18 = iVar9;
        puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar9 * (float)piVar18[2])
        ;
      }
      piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
      **(undefined4 **)(param_1 + 0xe2b8) = 0;
      *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
      *piVar18 = 0;
      *(undefined1 *)((int)piVar18 + 0xd) = 0;
      piVar18[2] = (int)fVar25;
      uVar17 = puVar16[6];
      *(char *)(piVar18 + 3) = cVar21;
      *(ushort *)((int)piVar18 + 0xe) = uVar17;
      piVar18[1] = 0xffffff;
      FUN_0887a584(puVar16,piVar18);
      *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      local_e0 = (local_e0 + 0x3f >> 6) << 6;
      cVar2 = local_74;
      break;
    case 0x1d:
      if ((iVar24 < local_4c) && (local_68 != 0)) {
        local_64 = puVar19;
        iVar9 = FUN_088c6ca4(*(undefined4 *)(local_68 + iVar24 * 4));
        uVar10 = FUN_088c6d30();
        param_4 = (uint3 *)FUN_0887afbc(uVar10,*(undefined2 *)(iVar9 + 4),0);
        iVar24 = iVar24 + 1;
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = 0x3f800000;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
        *(byte *)((int)piVar18 + 0xd) = *(byte *)((int)piVar18 + 0xd) | 0x18;
        *piVar18 = (uint)local_6c[5] << 6;
        local_e0 = (local_e0 + 0x3f >> 6) * 0x40 + (uint)local_6c[5] * 0x40;
        puVar16[6] = puVar16[6] + 1;
        if ((cVar2 != '\0') && (piVar18 != (int *)0x0)) {
          iVar9 = *piVar18 + 0x3f >> 6;
          *piVar18 = *piVar18 + 0x3f;
          *piVar18 = iVar9;
          puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] +
                                    (float)iVar9 * (float)piVar18[2]);
        }
        piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
        **(undefined4 **)(param_1 + 0xe2b8) = 0;
        *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
        *piVar18 = 0;
        *(undefined1 *)((int)piVar18 + 0xd) = 0;
        piVar18[2] = (int)fVar25;
        uVar17 = puVar16[6];
        *(char *)(piVar18 + 3) = cVar21;
        *(ushort *)((int)piVar18 + 0xe) = uVar17;
        piVar18[1] = uVar22;
        FUN_0887a584(puVar16,piVar18);
        *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
      }
      break;
    case 0x1f:
      puVar23 = (uint3 *)((int)puVar19 + ((int)(&DAT_089c9d2c)[uVar13] / 2) * 2);
      param_4 = puVar23;
      if ((ushort)*puVar19 == 5) {
        param_4 = (uint3 *)0x89d6960;
        local_64 = puVar23;
      }
    }
  }
  goto LAB_0887f434;
code_r0x0887f66c:
  if (cVar2 != '\0') {
    iVar24 = *piVar18;
    *piVar18 = iVar24 + 0x3f;
    iVar24 = iVar24 + 0x3f >> 6;
    *piVar18 = iVar24;
    puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar24 * (float)piVar18[2]);
  }
  iVar9 = local_e0 + 0x3f >> 6;
  iVar24 = iVar9;
  if ((local_70 != 0) && (iVar24 = local_70, local_70 < iVar9)) {
    iVar24 = iVar9;
  }
  local_70 = iVar24;
  local_9c = 0;
  local_90 = 0x400;
  if (local_70 < 0x401) {
    local_90 = (short)local_70 + 0x1fU & 0xffe0;
  }
  local_8c = local_90 / *(ushort *)(param_1 + 4);
  local_8a = 0;
  local_8e = ((short)local_60 + 1) * (ushort)*param_1;
  uVar22 = (uint)local_8c;
  uVar13 = (uint)local_8e;
  local_88 = FUN_0887d7b8(0,uVar22 * uVar13);
  FUN_08935828(local_88,0,uVar22 * uVar13);
  if (*(int *)(puVar16 + 2) != 0) {
    FUN_0887d828(0,*(undefined4 *)(puVar16 + 2));
  }
  puVar6 = local_40;
  pbVar14 = local_6c;
  *(undefined4 *)(puVar16 + 2) = local_88;
  *(undefined4 *)(puVar16 + 4) = local_88;
  iVar24 = 1;
  *puVar16 = local_90;
  do {
    if ((ushort)(&DAT_089c9d58)[iVar24] < local_8e) {
      puVar16[1] = *(ushort *)(&UNK_089c9d56 + iVar24 * 2);
      break;
    }
    iVar24 = iVar24 + 1;
  } while (iVar24 < 10);
  puVar16[7] = (ushort)local_70;
  FUN_0887b7e8(local_40);
  local_dc = *(int *)(param_1 + 0x68);
  local_e0 = 0;
  local_3c = '\0';
  local_48 = '\0';
  local_44 = 0;
  iVar9 = 0;
  local_58 = (undefined2 *)FUN_0887bbf4(puVar6);
  uVar22 = 0xff;
  iVar24 = 0;
  local_54 = 0;
  puVar19 = local_38;
  puVar23 = (uint3 *)0x0;
  pbVar5 = local_6c;
LAB_08880b8c:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              do {
                                local_6c = pbVar5;
                                uVar17 = (ushort)*puVar19;
                                puVar20 = (uint3 *)((int)puVar19 + 2);
                                uVar13 = iVar9 >> 6;
                                if (uVar17 == 0) {
                                  if (puVar23 != (uint3 *)0x0) {
                                    if (uVar22 != 0xff) {
                                      local_e0 = (local_e0 + 0x3f >> 6) * 0x40;
                                      puVar6 = (undefined4 *)
                                               FUN_0887e114(param_1,puVar16 + 0x16,0,(short)uVar22,
                                                            (int)(short)(local_e0 >> 6),
                                                            uVar13 & 0xff,1,1);
                                      if (puVar6 != (undefined4 *)0x0) {
                                        if (*(int *)(puVar16 + 0x18) == 0) {
                                          *(undefined4 **)(puVar16 + 0x18) = puVar6;
                                          *(undefined4 **)(puVar16 + 0x16) = puVar6;
                                          *puVar6 = 0;
                                          puVar6[1] = 0;
                                        }
                                        else {
                                          **(undefined4 **)(puVar16 + 0x18) = puVar6;
                                          uVar10 = *(undefined4 *)(puVar16 + 0x18);
                                          *puVar6 = 0;
                                          puVar6[1] = uVar10;
                                          *(undefined4 **)(puVar16 + 0x18) = puVar6;
                                        }
                                        *(int *)(puVar16 + 0x1a) = *(int *)(puVar16 + 0x1a) + 1;
                                      }
                                      local_e0 = local_e0 + (uint)pbVar14[5] * 0x40;
                                      uVar22 = 0xff;
                                    }
                                    uVar17 = (ushort)*puVar23;
                                    puVar20 = (uint3 *)((int)puVar23 + 2);
                                    puVar23 = (uint3 *)0x0;
                                  }
                                  if (uVar17 == 0) goto LAB_088818d8;
                                }
                                puVar19 = puVar20;
                                pbVar5 = pbVar14;
                              } while (uVar17 == 0xd);
                              if (uVar17 != 10) break;
                              iVar9 = iVar9 + 0x40;
                              local_e0 = 0;
                              local_dc = iVar9 * (uint)*param_1 + *(int *)(param_1 + 0x68);
                            }
                            if (uVar17 != 0x10) break;
                            local_e0 = (local_e0 + 0x3f >> 6) << 6;
                            puVar19 = puVar20 + 1;
                          }
                          if (uVar17 != 0x1b) break;
                          local_e0 = (local_e0 + 0x3f >> 6) << 6;
                        }
                        if (uVar17 != 0x11) break;
                        local_e0 = (local_e0 + 0x3f >> 6) << 6;
                        puVar19 = (uint3 *)((int)puVar20 + 2);
                      }
                      if (uVar17 != 0x12) break;
                      iVar9 = iVar9 + 0x40;
                      local_e0 = 0;
                      local_dc = iVar9 * (uint)*param_1 + *(int *)(param_1 + 0x68);
                    }
                    if (uVar17 != 0x16) break;
                    iVar9 = iVar9 + 0x40;
                    local_e0 = 0;
                    local_dc = iVar9 * (uint)*param_1 + *(int *)(param_1 + 0x68);
                  }
                  if (uVar17 != 0x18) break;
                  if ((iVar24 < local_4c) && (local_68 != 0)) {
                    local_e0 = (local_e0 + 0x3f >> 6) * 0x40;
                    uVar10 = *(undefined4 *)(local_68 + iVar24 * 4);
                    local_6c = pbVar14;
                    FUN_088b97e8(&local_7c,uVar10);
                    iVar8 = local_7c;
                    local_84 = local_7c;
                    local_80 = local_78;
                    puVar19 = (uint3 *)FUN_088b98fc(uVar10);
                    iVar7 = FUN_088c7f78(uVar10);
                    if (iVar7 == 0) {
                      cVar2 = *(char *)(iVar8 + 0xc);
                    }
                    else {
                      iVar7 = FUN_088c7fe4(uVar10);
                      uVar22 = 0x15;
                      if ((iVar7 != 0) && (uVar22 = 0x15, (*(ushort *)(iVar7 + 4) & 2) != 0)) {
                        uVar22 = (uint)param_1[3];
                      }
                      cVar2 = *(char *)(iVar8 + 0xc);
                    }
                    iVar24 = iVar24 + 1;
                    puVar6 = (undefined4 *)
                             FUN_0887e114(param_1,puVar16 + 0x16,0,
                                          (int)(short)*(undefined4 *)(&DAT_089d6904 + cVar2 * 4),
                                          (int)(short)(local_e0 >> 6),uVar13 & 0xff,1,1);
                    if (puVar6 != (undefined4 *)0x0) {
                      if (*(int *)(puVar16 + 0x18) == 0) {
                        *(undefined4 **)(puVar16 + 0x18) = puVar6;
                        *(undefined4 **)(puVar16 + 0x16) = puVar6;
                        *puVar6 = 0;
                        puVar6[1] = 0;
                      }
                      else {
                        **(undefined4 **)(puVar16 + 0x18) = puVar6;
                        uVar10 = *(undefined4 *)(puVar16 + 0x18);
                        *puVar6 = 0;
                        puVar6[1] = uVar10;
                        *(undefined4 **)(puVar16 + 0x18) = puVar6;
                      }
                      *(int *)(puVar16 + 0x1a) = *(int *)(puVar16 + 0x1a) + 1;
                    }
                    local_e0 = local_e0 + (uint)local_6c[5] * 0x40;
                    pbVar14 = local_6c;
                    puVar23 = puVar20;
                    pbVar5 = local_6c;
                  }
                }
                if (uVar17 != 0x19) break;
                local_e0 = (local_e0 + 0x3f >> 6) << 6;
                if ((iVar24 < local_4c) && (local_68 != 0)) {
                  iVar8 = FUN_088b1d9c(*(undefined4 *)(local_68 + iVar24 * 4));
                  puVar19 = (uint3 *)FUN_0887afbc(&DAT_09b49108,(int)*(short *)(iVar8 + 2),0);
                  iVar24 = iVar24 + 1;
                  puVar23 = puVar20;
                }
              }
              if (uVar17 != 0x1a) break;
              local_e0 = (local_e0 + 0x3f >> 6) * 0x40;
              if ((iVar24 < local_4c) && (local_68 != 0)) {
                iVar8 = FUN_088b29d8(*(undefined4 *)(local_68 + iVar24 * 4));
                puVar19 = (uint3 *)FUN_0887afbc(&DAT_09b49118,(int)*(short *)(iVar8 + 2),0);
                iVar24 = iVar24 + 1;
                uVar22 = *(uint *)(&DAT_089d6924 + *(char *)(iVar8 + 0x14) * 4) & 0xff;
                puVar6 = (undefined4 *)
                         FUN_0887e114(param_1,puVar16 + 0x16,0,
                                      (int)(short)*(undefined4 *)
                                                   (&DAT_089d6914 + *(char *)(iVar8 + 0x12) * 4),
                                      (int)(short)(local_e0 >> 6),uVar13 & 0xff,1,1);
                if (puVar6 != (undefined4 *)0x0) {
                  if (*(int *)(puVar16 + 0x18) == 0) {
                    *(undefined4 **)(puVar16 + 0x18) = puVar6;
                    *(undefined4 **)(puVar16 + 0x16) = puVar6;
                    *puVar6 = 0;
                    puVar6[1] = 0;
                  }
                  else {
                    **(undefined4 **)(puVar16 + 0x18) = puVar6;
                    uVar10 = *(undefined4 *)(puVar16 + 0x18);
                    *puVar6 = 0;
                    puVar6[1] = uVar10;
                    *(undefined4 **)(puVar16 + 0x18) = puVar6;
                  }
                  *(int *)(puVar16 + 0x1a) = *(int *)(puVar16 + 0x1a) + 1;
                }
                local_e0 = local_e0 + (uint)pbVar14[5] * 0x40;
                puVar23 = puVar20;
              }
            }
            if (uVar17 != 0x1d) break;
            local_e0 = (local_e0 + 0x3f >> 6) * 0x40;
            if ((iVar24 < local_4c) && (local_68 != 0)) {
              iVar8 = FUN_088c6ca4(*(undefined4 *)(local_68 + iVar24 * 4));
              uVar10 = FUN_088c6d30();
              puVar19 = (uint3 *)FUN_0887afbc(uVar10,*(undefined2 *)(iVar8 + 4),0);
              iVar24 = iVar24 + 1;
              puVar6 = (undefined4 *)
                       FUN_0887e114(param_1,puVar16 + 0x16,0,0x1f,(int)(short)(local_e0 >> 6),
                                    uVar13 & 0xff,1,1);
              if (puVar6 != (undefined4 *)0x0) {
                if (*(int *)(puVar16 + 0x18) == 0) {
                  *(undefined4 **)(puVar16 + 0x18) = puVar6;
                  *(undefined4 **)(puVar16 + 0x16) = puVar6;
                  *puVar6 = 0;
                  puVar6[1] = 0;
                }
                else {
                  **(undefined4 **)(puVar16 + 0x18) = puVar6;
                  uVar10 = *(undefined4 *)(puVar16 + 0x18);
                  *puVar6 = 0;
                  puVar6[1] = uVar10;
                  *(undefined4 **)(puVar16 + 0x18) = puVar6;
                }
                *(int *)(puVar16 + 0x1a) = *(int *)(puVar16 + 0x1a) + 1;
              }
              local_e0 = local_e0 + (uint)pbVar14[5] * 0x40;
              puVar23 = puVar20;
            }
          }
          if (uVar17 != 0x1e) break;
          local_e0 = (local_e0 + 0x3f >> 6) * 0x40;
          uVar17 = ((ushort)*puVar20 & 0xff) - 1;
          if (uVar17 == 0) {
            uVar4 = (ushort)*puVar20;
          }
          else {
            pbVar14 = param_1 + (uint)uVar17 * 8 + 0x30;
            uVar4 = (ushort)*puVar20;
          }
          puVar6 = (undefined4 *)
                   FUN_0887e114(param_1,puVar16 + 0x16,uVar17 & 0xff,uVar4 >> 8,
                                (int)(short)(local_e0 >> 6),uVar13 & 0xff,1,1);
          if (puVar6 != (undefined4 *)0x0) {
            if (*(int *)(puVar16 + 0x18) == 0) {
              *(undefined4 **)(puVar16 + 0x18) = puVar6;
              *(undefined4 **)(puVar16 + 0x16) = puVar6;
              *puVar6 = 0;
              puVar6[1] = 0;
            }
            else {
              **(undefined4 **)(puVar16 + 0x18) = puVar6;
              uVar10 = *(undefined4 *)(puVar16 + 0x18);
              *puVar6 = 0;
              puVar6[1] = uVar10;
              *(undefined4 **)(puVar16 + 0x18) = puVar6;
            }
            *(int *)(puVar16 + 0x1a) = *(int *)(puVar16 + 0x1a) + 1;
          }
          local_e0 = local_e0 + (uint)pbVar14[5] * 0x40;
          pbVar14 = param_1 + 0x30;
          puVar19 = (uint3 *)((int)puVar20 + 2);
          pbVar5 = param_1 + 0x30;
        }
        if (uVar17 != 0x15) break;
        local_6c = param_1 + 0x38;
        local_e0 = (local_e0 + 0x3f >> 6) * 0x40;
        uVar12 = (uint)(ushort)*puVar20;
        uVar15 = ((int)uVar12 >> 8 & 0xfU) - 1;
        puVar6 = (undefined4 *)
                 FUN_0887e114(param_1,puVar16 + 0x16,1,
                              (int)(short)((((ushort)((int)uVar12 >> 4) & 0xf) - 1) *
                                           (*(ushort *)(param_1 + 0x3e) / (ushort)param_1[0x3d]) +
                                          ((ushort)*puVar20 & 0xf)),(int)(short)(local_e0 >> 6),
                              uVar13 & 0xff,uVar15 & 0xff,((int)uVar12 >> 0xc) - 1U & 0xff);
        if (puVar6 != (undefined4 *)0x0) {
          if (*(int *)(puVar16 + 0x18) == 0) {
            *(undefined4 **)(puVar16 + 0x18) = puVar6;
            *(undefined4 **)(puVar16 + 0x16) = puVar6;
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          else {
            **(undefined4 **)(puVar16 + 0x18) = puVar6;
            uVar10 = *(undefined4 *)(puVar16 + 0x18);
            *puVar6 = 0;
            puVar6[1] = uVar10;
            *(undefined4 **)(puVar16 + 0x18) = puVar6;
          }
          *(int *)(puVar16 + 0x1a) = *(int *)(puVar16 + 0x1a) + 1;
        }
        local_e0 = local_e0 + (uint)local_6c[5] * (uVar15 & 0xffff) * 0x40;
        pbVar14 = param_1 + 0x30;
        puVar19 = (uint3 *)((int)puVar20 + 2);
        pbVar5 = param_1 + 0x30;
      }
      if (uVar17 != 0x1f) break;
      puVar19 = (uint3 *)((int)puVar20 + 2);
      if ((ushort)*puVar20 == 5) {
        puVar19 = (uint3 *)0x89d6960;
        puVar23 = (uint3 *)((int)puVar20 + 2);
      }
      uVar13 = *(ushort *)((int)puVar19 + -2) - 1 & 0xffff;
      if ((99 < uVar13) && (uVar13 < 200)) {
        local_48 = '\x01';
        local_44 = uVar13;
      }
    }
    if (uVar17 != 0x13) break;
    if ((iVar24 < local_4c) && (local_68 != 0)) {
      iVar8 = iVar24 * 4;
      iVar24 = iVar24 + 1;
      puVar19 = *(uint3 **)(local_68 + iVar8);
      puVar23 = puVar20;
    }
  }
  if (local_3c != '\0') {
    iVar8 = sceFontGetCharInfo(*(undefined4 *)(param_1 + 0x4c),0xff3f,local_d8);
    *(int *)(param_1 + 0x48) = iVar8;
    if (iVar8 != 0) goto LAB_08880b8c;
    local_98 = local_e0 + local_d0 * 0x40;
    local_94 = local_dc + local_cc * -0x40;
    iVar8 = sceFontGetCharGlyphImage(*(undefined4 *)(param_1 + 0x4c),0xff3f,&local_9c);
    *(int *)(param_1 + 0x48) = iVar8;
    if (iVar8 != 0) {
      return 0;
    }
  }
  if (local_54 < 0x100) {
    if (*(int *)(*(int *)(param_1 + 0x2c) + local_54 * 8 + 4) == -1) {
      uVar17 = 0x3013;
      local_6c = pbVar14;
      iVar7 = sceFontGetCharInfo(*(undefined4 *)(param_1 + 0x4c),0x3013,local_d8);
      *(int *)(param_1 + 0x48) = iVar7;
      iVar8 = local_a8;
      if (iVar7 != 0) goto LAB_08880b8c;
    }
    else {
      psVar11 = (short *)(*(int *)(param_1 + 0x2c) + local_54 * 8);
      local_d0 = (int)*psVar11;
      local_cc = (int)psVar11[1];
      iVar8 = *(int *)(psVar11 + 2);
    }
    local_54 = local_54 + 1;
  }
  else {
    iVar8 = sceFontGetCharInfo(*(undefined4 *)(param_1 + 0x4c),uVar17,local_d8);
    *(int *)(param_1 + 0x48) = iVar8;
    if (iVar8 != 0) goto LAB_08880b8c;
    if ((uVar17 < 0x400) || (0x4ff < uVar17)) {
      iVar8 = local_a8;
      if (uVar17 == 0x201c) {
        iVar8 = local_d0 + -2;
        local_d0 = 2;
        iVar8 = local_a8 + iVar8 * -0x40;
      }
    }
    else {
      local_d0 = 0;
      iVar8 = (local_d8[0] + DAT_089d6900) * 0x40;
      if (local_a8 < iVar8) {
        iVar8 = local_a8;
      }
    }
  }
  local_98 = local_e0 + local_d0 * 0x40;
  if (0x10000 < local_98 + iVar8) {
LAB_088818d8:
    if (*(int *)(param_1 + 0x178) == 0) {
      *(ushort **)(param_1 + 0x178) = puVar16;
      *(ushort **)(param_1 + 0x174) = puVar16;
      puVar16[0x1c] = 0;
      puVar16[0x1d] = 0;
      puVar16[0x1e] = 0;
      puVar16[0x1f] = 0;
    }
    else {
      *(ushort **)(*(int *)(param_1 + 0x178) + 0x38) = puVar16;
      uVar10 = *(undefined4 *)(param_1 + 0x178);
      puVar16[0x1c] = 0;
      puVar16[0x1d] = 0;
      *(undefined4 *)(puVar16 + 0x1e) = uVar10;
      *(ushort **)(param_1 + 0x178) = puVar16;
    }
    *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    return 1;
  }
  local_94 = local_dc + local_cc * -0x40;
  local_6c = pbVar14;
  iVar7 = sceFontGetCharGlyphImage(*(undefined4 *)(param_1 + 0x4c),uVar17,&local_9c);
  *(int *)(param_1 + 0x48) = iVar7;
  if (iVar7 != 0) {
    return 0;
  }
  if (local_48 == '\x01') {
    *local_58 = (short)((int)(local_98 + ((uint)(local_98 >> 6) >> 0x1a)) >> 6);
    local_58[1] = (short)((int)(local_94 + ((uint)(local_94 >> 6) >> 0x1a)) >> 6);
    local_58[2] = (short)local_44;
    local_58 = local_58 + 4;
    local_48 = '\0';
  }
  local_e0 = local_e0 + iVar8;
  pbVar14 = local_6c;
  pbVar5 = local_6c;
  goto LAB_08880b8c;
code_r0x08880668:
  local_6c = param_1 + 0x30;
  if ((local_74 != '\0') && (piVar18 != (int *)0x0)) {
    iVar9 = *piVar18 + 0x3f >> 6;
    *piVar18 = *piVar18 + 0x3f;
    *piVar18 = iVar9;
    puVar16[8] = (ushort)(int)((float)(int)(short)puVar16[8] + (float)iVar9 * (float)piVar18[2]);
  }
  piVar18 = (int *)**(undefined4 **)(param_1 + 0xe2b8);
  **(undefined4 **)(param_1 + 0xe2b8) = 0;
  *(undefined4 *)(param_1 + 0xe2b8) = *(undefined4 *)(*(int *)(param_1 + 0xe2b8) + 4);
  *piVar18 = 0;
  *(undefined1 *)((int)piVar18 + 0xd) = 0;
  piVar18[2] = 0x3f800000;
  uVar17 = puVar16[6];
  *(char *)(piVar18 + 3) = cVar21;
  *(ushort *)((int)piVar18 + 0xe) = uVar17;
  piVar18[1] = uVar22;
  FUN_0887a584(puVar16,piVar18);
  *(char *)(puVar16 + 9) = (char)puVar16[9] + '\x01';
  cVar2 = local_74;
  goto LAB_0887f434;
}

