/* Entry 0x0887E9CC | file offset 0x0007B9A4 | FUN_0887e9cc | bytes 1464 */

undefined4
FUN_0887e9cc(int param_1,int param_2,undefined4 param_3,byte *param_4,undefined4 *param_5,
            int param_6)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  short sVar15;
  int iVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  uint local_50;
  
  pbVar14 = (byte *)0x0;
  iVar6 = 0;
  iVar16 = param_1;
  do {
    if ((*(byte *)(iVar16 + 0x314) & 1) == 0) {
      pbVar14 = (byte *)(iVar16 + 0x314);
      break;
    }
    iVar6 = iVar6 + 1;
    iVar16 = iVar16 + 500;
  } while (iVar6 < 0x1c);
  if (pbVar14 == (byte *)0x0) {
    uVar5 = 0;
  }
  else {
    *pbVar14 = *pbVar14 | 1;
    pbVar14[1] = 0;
    pbVar14[2] = pbVar14[2] + 1;
    pbVar14[4] = 0;
    pbVar14[5] = 0;
    pbVar14[0x1ec] = 0;
    pbVar14[0x1ed] = 0;
    pbVar14[0x1ee] = 0;
    pbVar14[0x1ef] = 0;
    pbVar14[0x1e8] = 0;
    pbVar14[0x1e9] = 0;
    pbVar14[0x1ea] = 0;
    pbVar14[0x1eb] = 0;
    pbVar14[0x1f0] = 0;
    pbVar14[0x1f1] = 0;
    pbVar14[0x1f2] = 0;
    pbVar14[499] = 0;
    local_50 = 0;
    uVar9 = (uint)pbVar14[1];
    bVar1 = *param_4;
    param_4 = param_4 + 1;
    pbVar17 = (byte *)0x0;
    iVar6 = 0;
    iVar16 = 0;
    bVar2 = uVar9 < 0x28;
    puVar18 = param_5;
    while( true ) {
      uVar7 = (uint)bVar1;
      sVar15 = (short)iVar16;
      if (!bVar2) break;
      if ((uVar7 == 0) || (pbVar13 = param_4, uVar7 == 10)) {
        if (pbVar17 != (byte *)0x0) {
          uVar7 = (uint)*pbVar17;
          param_4 = pbVar17 + 1;
          pbVar17 = (byte *)0x0;
        }
        if ((uVar7 == 0) || (pbVar13 = param_4, uVar7 == 10)) break;
      }
      bVar3 = uVar7 < 0x10;
      switch(uVar7) {
      case 0x10:
        local_50 = *(uint3 *)(pbVar13 + 1) & 0xfffefefe | 0xff000000;
        param_4 = pbVar13 + 1;
        break;
      case 0x11:
        param_4 = pbVar13 + 1;
        break;
      case 0x12:
      case 0x16:
      case 0x17:
        param_4 = pbVar13 + 1;
        break;
      case 0x13:
        pbVar12 = pbVar13;
        if ((iVar6 < param_6) && (param_5 != (undefined4 *)0x0)) {
          if ((!bVar3) && (uVar7 < 0x20)) {
            pbVar13 = pbVar13 + (&DAT_089c9d2c)[uVar7] + 1;
          }
          pbVar12 = (byte *)*puVar18;
          uVar7 = 0;
          iVar6 = iVar6 + 1;
          puVar18 = puVar18 + 1;
          bVar3 = true;
          pbVar17 = pbVar13;
        }
        param_4 = pbVar12 + 1;
        pbVar13 = pbVar12;
        break;
      default:
        param_4 = pbVar13 + 1;
        if (uVar7 < 0x80) {
          uVar10 = (uint)*(byte *)(param_1 + 0xc);
          uVar8 = uVar7 - 0x22 & 0xffff;
          bVar2 = uVar8 < uVar10;
          pbVar12 = param_4;
        }
        else {
          if (*pbVar13 == 0) break;
          uVar10 = (uint)*(byte *)(param_1 + 0xc);
          uVar8 = (((uint)*pbVar13 * 0x80 - 0x80 & 0xffff) + uVar7) - 0x22 & 0xffff;
          bVar2 = uVar8 < uVar10;
          pbVar12 = pbVar13 + 2;
          pbVar13 = param_4;
        }
        param_4 = pbVar12;
        iVar11 = param_1 + uVar8;
        if (bVar2) {
          *(ushort *)(pbVar14 + uVar9 * 0xc + 10) = (short)uVar8 * (ushort)*(byte *)(param_1 + 8);
          pbVar14[(uint)pbVar14[1] * 0xc + 0xc] = 0;
          pbVar14[(uint)pbVar14[1] * 0xc + 0xd] =
               *(byte *)(iVar11 + 0x10) | *(char *)(param_1 + 9) << 4;
          bVar1 = pbVar14[1];
        }
        else {
          uVar8 = uVar8 - uVar10 & 0xffff;
          *(ushort *)(pbVar14 + uVar9 * 0xc + 10) =
               (short)(uVar8 % (uint)*(byte *)(param_1 + 0xd)) * (ushort)*(byte *)(param_1 + 10);
          pbVar14[(uint)pbVar14[1] * 0xc + 0xc] =
               (char)(uVar8 / *(byte *)(param_1 + 0xd)) * *(char *)(param_1 + 0xb) +
               *(char *)(param_1 + 9);
          pbVar14[(uint)pbVar14[1] * 0xc + 0xd] =
               *(byte *)(iVar11 + 0x10) | *(char *)(param_1 + 0xb) << 4;
          bVar1 = pbVar14[1];
        }
        *(short *)(pbVar14 + (uint)bVar1 * 0xc + 8) = sVar15;
        bVar1 = *(byte *)(iVar11 + 0x10);
        *(uint *)(pbVar14 + (uint)pbVar14[1] * 0xc + 0x10) = local_50;
        pbVar14[1] = pbVar14[1] + 1;
        uVar9 = (uint)pbVar14[1];
        iVar16 = (int)((iVar16 + (uint)bVar1) * 0x10000) >> 0x10;
        bVar2 = uVar9 < 0x28;
        break;
      case 0x15:
      case 0x1e:
        puVar4 = (undefined4 *)
                 FUN_0887e114(DAT_089d6998,pbVar14 + 0x1e8,pbVar13[1] - 1,pbVar13[2],(int)sVar15,0,1
                              ,1);
        param_4 = pbVar13 + 1;
        if (puVar4 != (undefined4 *)0x0) {
          if (*(undefined4 **)(pbVar14 + 0x1ec) == (undefined4 *)0x0) {
            *(undefined4 **)(pbVar14 + 0x1ec) = puVar4;
            *(undefined4 **)(pbVar14 + 0x1e8) = puVar4;
            *puVar4 = 0;
            puVar4[1] = 0;
            iVar11 = *(int *)(pbVar14 + 0x1f0);
          }
          else {
            **(undefined4 **)(pbVar14 + 0x1ec) = puVar4;
            uVar5 = *(undefined4 *)(pbVar14 + 0x1ec);
            *puVar4 = 0;
            puVar4[1] = uVar5;
            iVar11 = *(int *)(pbVar14 + 0x1f0);
            *(undefined4 **)(pbVar14 + 0x1ec) = puVar4;
          }
          *(int *)(pbVar14 + 0x1f0) = iVar11 + 1;
        }
        uVar9 = (uint)pbVar14[1];
        bVar2 = uVar9 < 0x28;
        iVar16 = (int)((iVar16 + (uint)*(byte *)(param_2 + 5)) * 0x10000) >> 0x10;
        break;
      case 0x18:
        param_4 = pbVar13 + 1;
        break;
      case 0x19:
        param_4 = pbVar13 + 1;
        break;
      case 0x1a:
        param_4 = pbVar13 + 1;
        break;
      case 0x1b:
        param_4 = pbVar13 + 1;
        local_50 = 0;
        break;
      case 0x1d:
        param_4 = pbVar13 + 1;
        break;
      case 0x1f:
        param_4 = pbVar13 + 1;
        break;
      case 0x20:
        iVar16 = (iVar16 + 4) * 0x10000 >> 0x10;
        param_4 = pbVar13 + 1;
        break;
      case 0x21:
        iVar16 = (iVar16 + 8) * 0x10000 >> 0x10;
        param_4 = pbVar13 + 1;
      }
      if ((!bVar3) && (uVar7 < 0x20)) {
        pbVar13 = param_4 + (&DAT_089c9d2c)[uVar7];
        param_4 = pbVar13 + 1;
      }
      bVar1 = *pbVar13;
    }
    if (iVar16 != 0) {
      *(short *)(pbVar14 + 4) = sVar15;
    }
    FUN_0887ba48(param_3,pbVar14);
    uVar5 = 1;
  }
  return uVar5;
}

