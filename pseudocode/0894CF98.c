/* Entry 0x0894CF98 | file offset 0x00149F70 | FUN_0894cf98 | bytes 1112 */

undefined1 *
FUN_0894cf98(float param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  short sVar5;
  int *piVar6;
  undefined2 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  
  puVar13 = *(undefined2 **)(*(int *)(*(int *)(param_3 + 0x1cc) + 0x20) + param_5 * 4);
  if (puVar13 == (undefined2 *)0x0) {
    return (undefined1 *)0x0;
  }
  if (*(char *)(puVar13 + 4) == '\0') {
    return (undefined1 *)0x0;
  }
  local_44 = (int)(short)puVar13[1] + 99U & 0xfffffffc;
  iVar14 = local_44 + (uint)*(byte *)(puVar13 + 4) * 4;
  iVar10 = iVar14 + (uint)*(byte *)(puVar13 + 4) * 4;
  if (*(char *)((int)puVar13 + 0x15) == '\0') {
    local_3c = 0;
  }
  else {
    local_3c = iVar10;
    iVar10 = iVar10 + 0x18;
  }
  uVar11 = iVar10 + 0xfU & 0xfffffff0;
  bVar2 = *(byte *)((int)puVar13 + 0xb);
  uVar12 = uVar11;
  if (bVar2 < 6) {
    if (bVar2 != 2) {
LAB_0894d0d0:
      iVar10 = 0;
      uVar11 = uVar11 + 0x40;
      goto LAB_0894d0dc;
    }
  }
  else {
    if (bVar2 == 0xff) {
      iVar10 = 0;
      uVar12 = 0;
      goto LAB_0894d0dc;
    }
    if (9 < bVar2) goto LAB_0894d0d0;
  }
  iVar10 = uVar11 + 0x40;
  uVar11 = uVar11 + 0x80;
LAB_0894d0dc:
  local_4c = param_5;
  local_48 = param_4;
  local_40 = param_6;
  puVar4 = (undefined1 *)FUN_08971134(*(undefined4 *)(param_2 + 0x18),uVar11,&local_50,1);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    iVar8 = param_2 + (uint)*(ushort *)(*(int *)(param_3 + 0x1c8) + 0x18) * 4;
    *(int *)(iVar8 + 0xb4) = *(int *)(iVar8 + 0xb4) + local_50;
    bVar1 = (*(byte *)((int)puVar13 + 9) & 1) == 0;
    uVar11 = (uint)bVar1;
    *puVar4 = 0x75;
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined2 *)(puVar4 + 4) = *puVar13;
    uVar7 = *(undefined2 *)(param_3 + 0x1b0);
    puVar4[8] = bVar1;
    *(undefined2 *)(puVar4 + 6) = uVar7;
    *(int *)(puVar4 + 0x18) = local_48;
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    *(undefined2 *)(puVar4 + 0x20) = 0;
    puVar4[0x22] = (char)local_4c;
    *(float *)(puVar4 + 0x30) = param_1;
    uVar7 = 0xffff;
    *(undefined2 *)(puVar4 + 0x34) = puVar13[2];
    if (*(char *)((int)puVar13 + 0x13) != '\0') {
      uVar7 = 0;
    }
    *(undefined2 *)(puVar4 + 0x36) = uVar7;
    if (local_3c == 0) {
      *(undefined4 *)(puVar4 + 0x3c) = 0;
    }
    else {
      *(undefined1 **)(puVar4 + 0x3c) = puVar4 + local_3c;
      FUN_08970250();
    }
    *(undefined2 **)(puVar4 + 0x40) = puVar13;
    *(undefined1 **)(puVar4 + 0x44) = puVar4 + 0x60;
    *(undefined1 **)(puVar4 + 0x48) = puVar4 + local_44;
    *(undefined1 **)(puVar4 + 0x4c) = puVar4 + iVar14;
    if (uVar12 == 0) {
      *(undefined4 *)(puVar4 + 0x50) = 0;
    }
    else {
      *(undefined1 **)(puVar4 + 0x50) = puVar4 + uVar12;
    }
    if (iVar10 == 0) {
      *(undefined4 *)(puVar4 + 0x54) = 0;
    }
    else {
      *(undefined1 **)(puVar4 + 0x54) = puVar4 + iVar10;
    }
    iVar10 = 0;
    puVar4[0x58] = *(undefined1 *)((int)puVar13 + 0xb);
    if (*(char *)(puVar13 + 4) != '\0') {
      iVar14 = *(int *)(puVar4 + 0x48);
      while( true ) {
        iVar8 = iVar10 * 4;
        *(undefined4 *)(iVar14 + iVar8) = 0;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(*(int *)(puVar4 + 0x4c) + iVar8) = 0;
        if ((int)(uint)*(byte *)(puVar13 + 4) <= iVar10) break;
        iVar14 = *(int *)(puVar4 + 0x48);
      }
    }
    iVar10 = FUN_0894a104(param_2,param_3,puVar4,puVar13,local_40);
    if (iVar10 == 0) {
      uVar3 = *(ushort *)(*(int *)(param_3 + 0x1c8) + 0x18);
      iVar10 = FUN_08971010(*(undefined4 *)(param_2 + 0x18),puVar4);
      param_2 = param_2 + (uint)uVar3 * 4;
      *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0xb4) - iVar10;
      puVar4 = (undefined1 *)0x0;
    }
    else {
      iVar10 = param_3 + uVar11 * 4;
      piVar6 = (int *)(iVar10 + 0x1b8);
      piVar9 = (int *)(iVar10 + 0x1c0);
      if (*piVar6 == 0) {
        *piVar9 = (int)puVar4;
        *piVar6 = (int)puVar4;
        *(undefined4 *)(puVar4 + 0x10) = 0;
        *(undefined4 *)(puVar4 + 0x14) = 0;
      }
      else {
        iVar10 = *piVar9;
        *(undefined1 **)(iVar10 + 0x14) = puVar4;
        *(int *)(puVar4 + 0x10) = iVar10;
        *(undefined4 *)(puVar4 + 0x14) = 0;
        *piVar9 = (int)puVar4;
      }
      iVar10 = param_3 + uVar11 * 2;
      uVar3 = *(ushort *)(param_3 + 0x1b0);
      *(short *)(iVar10 + 0x1b2) = *(short *)(iVar10 + 0x1b2) + 1;
      sVar5 = -0x8000;
      if (uVar3 < 0xff00) {
        sVar5 = uVar3 + 1;
      }
      *(short *)(param_3 + 0x1b0) = sVar5;
      if (local_48 != 0) {
        *(short *)(local_48 + 0x20) = *(short *)(local_48 + 0x20) + 1;
      }
      FUN_0894cba8(param_2,puVar4,local_48,*(undefined1 *)((int)puVar13 + 0xb));
      switch(*(undefined1 *)(param_2 + 0x94)) {
      case 0:
      case 1:
      case 2:
      case 3:
        break;
      case 4:
        break;
      case 5:
      case 6:
      case 7:
        break;
      case 8:
      case 9:
        if (puVar4[8] != '\0') {
          FUN_0894a3ec(param_2,puVar4,1,(int)param_1);
        }
      }
    }
  }
  return puVar4;
}

