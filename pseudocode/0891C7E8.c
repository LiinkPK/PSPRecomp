/* Entry 0x0891C7E8 | file offset 0x001197C0 | FUN_0891c7e8 | bytes 2012 */

void FUN_0891c7e8(char *param_1,int param_2,int param_3,int param_4,uint param_5,char param_6,
                 uint param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  char cVar8;
  char *pcVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  char *pcVar16;
  int iVar17;
  char *pcVar18;
  undefined *puVar19;
  float fVar20;
  char local_1d60 [4];
  undefined1 auStack_1d5c [2];
  undefined2 local_1d5a [10];
  undefined2 local_1d46 [10];
  short local_1d32;
  undefined1 auStack_1d30 [24];
  int local_1d18 [1368];
  undefined4 local_7b8 [478];
  char *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  
  pcVar9 = local_1d60;
  pcVar16 = local_1d60;
  local_34 = param_5 & 0xff;
  local_30 = param_7 & 0xff;
  iVar17 = 1 - param_2;
  local_40 = param_1 + param_2 * 0xd + 0x2a04;
  local_3c = param_3;
  local_38 = param_4;
  FUN_0891c45c(param_1);
  pcVar18 = local_40;
  param_1[0x2a20] = (char)iVar17;
  param_1[0x2a21] = param_1[iVar17 * 0xd + 0x2a05];
  iVar2 = local_40[1] * 0x14 + param_2 * 0x68 + 0x27e8;
  if ((param_1[1] == '\x01') || (local_30 == 0)) {
    param_1[iVar2 + 2] = param_1[iVar2 + 2] + '\x01';
  }
  if (local_3c != 0) {
    pcVar5 = *(char **)(local_3c + 0x52c);
    cVar8 = pcVar5[1];
    if (cVar8 == '\0') {
      cVar8 = *pcVar5;
    }
    param_1[iVar2 + 1] = cVar8;
    *(undefined4 *)(param_1 + iVar2 + 8) = *(undefined4 *)(pcVar5 + 8);
    *(undefined4 *)(param_1 + iVar2 + 0xc) = *(undefined4 *)(pcVar5 + 0xc);
    fVar20 = *(float *)(pcVar5 + 0x18);
    param_1[iVar2 + 3] = param_1[iVar2 + 3] & 0xfb;
    *(short *)(param_1 + iVar2 + 0x12) = (short)(int)fVar20;
  }
  if (param_1[2] == '\x01') {
    if ((param_2 == 0) && (DAT_089d69f8[0xe] != 0)) {
      func_0x08aebbb0(DAT_089d69f8[0xe],local_1d60,*DAT_089d69f8);
      param_1[param_1[0x2a12] + 0x28b8] = local_1d60[0];
    }
    param_1[param_1[iVar17 * 0xd + 0x2a05] + 0x28bd] = (char)*(undefined4 *)(DAT_089d6a10 + 100);
  }
  if (param_1[2] == '\x04') {
    FUN_08887cbc(auStack_1d5c,local_1d5a,*DAT_089d69f8,param_2 == 0,1);
    iVar2 = 0;
    if (0 < local_1d32) {
      do {
        if (9 < *(short *)(param_1 + 0x2a00)) break;
        *(undefined2 *)(param_1 + *(short *)(param_1 + 0x2a00) * 2 + 0x29d8) =
             *(undefined2 *)(pcVar9 + 6);
        *(undefined2 *)(param_1 + *(short *)(param_1 + 0x2a00) * 2 + 0x29ec) =
             *(undefined2 *)(pcVar9 + 0x1a);
        iVar2 = iVar2 + 1;
        *(short *)(param_1 + 0x2a00) = *(short *)(param_1 + 0x2a00) + 1;
        pcVar9 = pcVar9 + 2;
      } while (iVar2 < local_1d32);
    }
  }
  if (local_38 != 0) {
    pcVar9 = *(char **)(local_38 + 0x52c);
    iVar2 = param_1[iVar17 * 0xd + 0x2a05] * 0x14 + iVar17 * 0x68 + 0x27e8;
    cVar8 = pcVar9[1];
    if (cVar8 == '\0') {
      cVar8 = *pcVar9;
    }
    param_1[iVar2 + 1] = cVar8;
    *(undefined4 *)(param_1 + iVar2 + 8) = *(undefined4 *)(pcVar9 + 8);
    *(undefined4 *)(param_1 + iVar2 + 0xc) = *(undefined4 *)(pcVar9 + 0xc);
    fVar20 = *(float *)(pcVar9 + 0x18);
    param_1[iVar2 + 3] = param_1[iVar2 + 3] | 2;
    param_1[iVar2 + 3] = param_1[iVar2 + 3] & 0xfb;
    *(short *)(param_1 + iVar2 + 0x12) = (short)(int)fVar20;
    if (param_6 == '\x01') {
      param_1[iVar2 + 3] = param_1[iVar2 + 3] | 1;
    }
    if (local_34 == 1) {
      param_1[iVar2 + 3] = param_1[iVar2 + 3] | 8;
    }
  }
  pcVar18[pcVar18[1] + 3] = '\x01';
  param_1[(int)param_1[iVar17 * 0xd + 0x2a05] + iVar17 * 0xd + 0x2a07] = '\x02';
  pcVar18[2] = pcVar18[1];
  param_1[iVar17 * 0xd + 0x2a06] = param_1[iVar17 * 0xd + 0x2a05];
  local_40 = pcVar18;
  FUN_0891ed04(param_1 + param_2 * 0x13 + 0x2a50,auStack_1d30,1,(int)param_1[1]);
  FUN_0891ed04(param_1 + iVar17 * 0x13 + 0x2a50,auStack_1d30,0,(int)param_1[1]);
  if (*(int *)(DAT_089d6a10 + 0x4c) == 5) {
    local_1d18[0] = local_3c;
    local_1d18[1] = local_38;
    local_1d18[2] = param_2;
    local_1d18[3] = iVar17;
    local_1d18[4] = (int)local_40[1];
    local_1d18[5] = (int)param_1[iVar17 * 0xd + 0x2a05];
    iVar2 = 0;
    do {
      iVar3 = *(int *)(pcVar16 + 0x48);
      if (iVar3 != 0) {
        iVar6 = *(int *)(pcVar16 + 0x50);
        iVar10 = *(int *)(pcVar16 + 0x58);
        iVar12 = 0;
        iVar13 = 0x2a9;
        do {
          puVar14 = (undefined4 *)(DAT_089d7f38 + iVar6 * 0x6a68 + iVar10 * 0x1548 + 0x70c + iVar12)
          ;
          uVar15 = puVar14[1];
          *(undefined4 *)((int)local_1d18 + iVar12 + 0x18) = *puVar14;
          *(undefined4 *)((int)local_1d18 + iVar12 + 0x1c) = uVar15;
          iVar13 = iVar13 + -1;
          iVar12 = iVar12 + 8;
        } while (iVar13 != 0);
        iVar3 = *(int *)(iVar3 + 0x30c);
        iVar12 = 0;
        iVar13 = 0xef;
        do {
          puVar14 = (undefined4 *)(iVar3 + iVar12);
          uVar15 = puVar14[1];
          *(undefined4 *)((int)local_1d18 + iVar12 + 0x18) = *puVar14;
          *(undefined4 *)((int)local_1d18 + iVar12 + 0x1c) = uVar15;
          iVar13 = iVar13 + -1;
          iVar12 = iVar12 + 8;
        } while (iVar13 != 0);
        FUN_088f6f48(iVar6,iVar10,local_1d18 + 6);
      }
      iVar2 = iVar2 + 1;
      pcVar16 = pcVar16 + 4;
    } while (iVar2 < 2);
    puVar11 = &DAT_09afd968;
    iVar2 = 0;
    puVar19 = &DAT_09afc110 + (1 - *(int *)(DAT_089d6a10 + 0x54)) * 0x1060;
    do {
      iVar3 = 0;
      iVar6 = 0x20;
      do {
        uVar1 = ((undefined2 *)((int)puVar11 + iVar3))[1];
        *(undefined2 *)(puVar19 + iVar3) = *(undefined2 *)((int)puVar11 + iVar3);
        *(undefined2 *)((int)(puVar19 + iVar3) + 2) = uVar1;
        iVar6 = iVar6 + -1;
        iVar3 = iVar3 + 4;
      } while (iVar6 != 0);
      iVar2 = iVar2 + 1;
      puVar11 = puVar11 + 0x9c;
      puVar19 = puVar19 + 0x80;
      pcVar18 = local_40;
    } while (iVar2 < 4);
  }
  iVar2 = FUN_0891bdfc(param_1,param_2);
  if ((iVar2 == 1) && (local_34 == 0)) {
    param_1[iVar17 * 0xd + 0x2a05] = param_1[iVar17 * 0xd + 0x2a05] + '\x01';
    if (param_1[1] == '\x01') {
      pcVar18[1] = pcVar18[1] + '\x01';
    }
    else if (local_3c != 0) {
      FUN_088cb9e8(local_7b8);
      iVar2 = local_3c;
      FUN_088356c8(local_3c,1,1);
      iVar2 = *(int *)(iVar2 + 0x30c);
      iVar17 = 0;
      iVar3 = 0xef;
      do {
        puVar14 = (undefined4 *)(iVar2 + iVar17);
        uVar15 = puVar14[1];
        *(undefined4 *)((int)local_7b8 + iVar17) = *puVar14;
        *(undefined4 *)((int)local_7b8 + iVar17 + 4) = uVar15;
        iVar3 = iVar3 + -1;
        iVar17 = iVar17 + 8;
      } while (iVar3 != 0);
      FUN_088fad0c(local_7b8,param_2,0);
      FUN_088f8e14(&DAT_09afb8a0 + param_2 * 0x418,local_7b8);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x2a44);
    *(uint *)(param_1 + 0x2a44) = uVar4 | 4;
    iVar2 = DAT_089d712c;
    if (((uVar4 & 0x10) != 0) && (param_2 == *(int *)(DAT_089d6a10 + 0x54))) {
      if (*param_1 == '\x01') {
        iVar17 = *(int *)(DAT_089d712c + 0x10d14) + 1;
        if (iVar17 < 1000000000) {
          *(int *)(DAT_089d712c + 0x10d14) = iVar17;
        }
        else {
          *(undefined4 *)(DAT_089d712c + 0x10d14) = 999999999;
        }
      }
      if ((*(int *)(DAT_089d6a10 + 0x4c) == 5) && (DAT_089d7f48 == 1)) {
        iVar17 = *(int *)(iVar2 + 0x10d18) + 1;
        if (iVar17 < 1000000000) {
          *(int *)(iVar2 + 0x10d18) = iVar17;
        }
        else {
          *(undefined4 *)(iVar2 + 0x10d18) = 999999999;
        }
      }
    }
    if (param_1[2] == '\x02') {
      if (param_2 == *(int *)(DAT_089d6a10 + 0x54)) {
        uVar4 = (uint)*(short *)(param_1 + 0x27b0);
        if (-1 < (int)uVar4) {
          puVar7 = (uint *)(DAT_089d726c + (uVar4 >> 5) * 4);
          *puVar7 = *puVar7 | 1 << (uVar4 & 0x1f);
        }
      }
      else {
        uVar4 = (uint)*(short *)(param_1 + 0x27b2);
        if (-1 < (int)uVar4) {
          puVar7 = (uint *)(DAT_089d726c + (uVar4 >> 5) * 4);
          *puVar7 = *puVar7 | 1 << (uVar4 & 0x1f);
        }
      }
    }
    if (*(code **)(param_1 + 0x2a48) != (code *)0x0) {
      (**(code **)(param_1 + 0x2a48))(param_1 + 0x27e0,*(undefined4 *)(param_1 + 0x2a4c));
    }
  }
  if (local_30 == 0) {
    *pcVar18 = *pcVar18 + '\x01';
  }
  return;
}

