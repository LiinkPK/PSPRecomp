/* Entry 0x0887CA50 | file offset 0x00079A28 | FUN_0887ca50 | bytes 1120 */

void FUN_0887ca50(float param_1,int *param_2,ushort param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  ushort *puVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  undefined4 *puVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  int iVar20;
  short asStack_90 [32];
  ushort local_50;
  int local_4c;
  uint local_48;
  undefined4 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  
  if ((param_2[4] & 0x2000U) == 0) {
    local_44 = (undefined4 *)(*param_2 + 0x2c);
  }
  else {
    local_44 = (undefined4 *)(*param_2 + 0x1e8);
  }
  local_50 = param_3;
  local_40 = param_6;
  local_3c = param_5;
  local_38 = param_4;
  uVar4 = FUN_089a04e8();
  FUN_08935828(asStack_90,0,0x40);
  FUN_089a0384(4);
  FUN_089a0384(0x15);
  FUN_089a113c(6,0,0xff);
  FUN_089a0384(0);
  FUN_089a0384(1);
  FUN_089a03dc(5);
  FUN_089a0e20(0,1);
  FUN_089a0e60(1,1);
  iVar11 = -1;
  local_4c = 0;
  local_48 = 0xffffffff;
  puVar16 = (undefined4 *)0x0;
  iVar20 = 0;
  local_34 = uVar4;
  while( true ) {
    if (puVar16 == (undefined4 *)0x0) {
      puVar16 = (undefined4 *)*local_44;
    }
    else {
      puVar16 = (undefined4 *)*puVar16;
    }
    if ((puVar16 == (undefined4 *)0x0) || (local_40 <= local_4c)) break;
    uVar6 = *(byte *)((int)puVar16 + 0xd) & 0x3f;
    if ((iVar11 != *(short *)(puVar16 + 2)) || (local_48 != uVar6)) {
      local_48 = uVar6;
      iVar20 = (int)((float)(int)*(short *)(puVar16 + 2) * param_1 + (float)(int)asStack_90[uVar6]);
    }
    iVar8 = DAT_089d6998 + ((int)(uint)*(byte *)((int)puVar16 + 0xd) >> 6) * 8;
    bVar1 = *(byte *)(iVar8 + 0x35);
    sVar14 = (ushort)bVar1 * (short)((int)(uint)*(byte *)(puVar16 + 3) >> 4);
    sVar19 = (short)param_2[5];
    sVar18 = *(short *)((int)param_2 + 0x16);
    sVar12 = (ushort)bVar1 * (*(byte *)(puVar16 + 3) & 0xf);
    iVar15 = (int)sVar14;
    iVar13 = (int)sVar12;
    iVar9 = *(int *)(iVar8 + 0x30);
    iVar8 = iVar15;
    sVar17 = sVar12;
    if ((param_2[4] & 1U) != 0) {
      iVar8 = (int)(short)(int)((float)iVar15 * ((float)param_2[6] / (float)param_2[8]));
      sVar17 = (short)(int)((float)iVar13 * ((float)param_2[7] / (float)param_2[9]));
      sVar19 = (short)((uint)(((int)sVar19 + (iVar15 - iVar8) / 2) * 0x10000) >> 0x10);
      sVar18 = (short)((uint)(((int)sVar18 + (iVar13 - sVar17) / 2) * 0x10000) >> 0x10);
    }
    if (iVar9 != 0) {
      if (iVar13 != 0) {
        FUN_0899d2f8(iVar9);
        puVar5 = (ushort *)FUN_089a00f4(0x40);
        iVar11 = (*(byte *)((int)puVar16 + 0xd) & 0x3f) * 2;
        sVar2 = *(short *)(local_38 + iVar11);
        sVar3 = *(short *)(local_3c + iVar11);
        bVar1 = *(byte *)((int)puVar16 + 10);
        *puVar5 = (ushort)bVar1;
        puVar5[0x10] = (ushort)bVar1;
        uVar10 = *puVar5 + sVar14;
        puVar5[0x18] = uVar10;
        puVar5[8] = uVar10;
        bVar1 = *(byte *)((int)puVar16 + 0xb);
        puVar5[1] = (ushort)bVar1;
        puVar5[9] = (ushort)bVar1;
        puVar5[0x19] = puVar5[1] + sVar12;
        puVar5[0x11] = puVar5[1] + sVar12;
        *(undefined1 *)(puVar5 + 3) = 0x80;
        *(undefined1 *)((int)puVar5 + 5) = 0x80;
        *(undefined1 *)(puVar5 + 2) = 0x80;
        *(char *)((int)puVar5 + 7) = (char)((uint)param_2[3] >> 0x18);
        uVar4 = *(undefined4 *)(puVar5 + 2);
        *(undefined4 *)(puVar5 + 10) = uVar4;
        *(undefined4 *)(puVar5 + 0x12) = uVar4;
        *(undefined4 *)(puVar5 + 0x1a) = uVar4;
        uVar7 = (short)iVar20 + sVar19 + sVar2;
        puVar5[4] = uVar7;
        uVar10 = sVar18 + sVar3;
        puVar5[0x14] = uVar7;
        uVar7 = puVar5[4] + (short)iVar8;
        puVar5[5] = uVar10;
        puVar5[0x1c] = uVar7;
        puVar5[0xc] = uVar7;
        puVar5[0xd] = uVar10;
        puVar5[0x1d] = puVar5[5] + sVar17;
        puVar5[0x15] = puVar5[5] + sVar17;
        puVar5[0x1e] = local_50;
        puVar5[0x16] = local_50;
        puVar5[0xe] = local_50;
        puVar5[6] = local_50;
        FUN_089a12a4(0,2,3,0,0);
        FUN_089a05f0(4,0x80011e,4,1,0,puVar5);
        iVar11 = *(short *)(puVar16 + 2) + iVar8;
        iVar20 = iVar20 + iVar8;
        uVar6 = *(byte *)((int)puVar16 + 0xd) & 0x3f;
      }
      asStack_90[uVar6] =
           (short)(int)((float)(int)asStack_90[uVar6] + ((float)iVar8 - (float)iVar8 * param_1));
    }
    local_4c = local_4c + 1;
  }
  FUN_0899fdc4(local_34);
  return;
}

