/* Entry 0x088E0AD8 | file offset 0x000DDAB0 | FUN_088e0ad8 | bytes 1084 */

void FUN_088e0ad8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_50 [32];
  
  *(undefined1 *)((int)param_1 + 0x17b9) = param_6;
  param_1[1] = param_3;
  param_1[0x58b] = param_4;
  param_1[0x58c] = param_5;
  FUN_0885c93c(param_2);
  iVar1 = FUN_0885ca3c(param_2,1,0);
  uVar2 = FUN_0885c6cc(param_1[1],*(undefined4 *)(iVar1 + 0xc),0,0,1,0);
  param_1[2] = uVar2;
  FUN_08935524(uVar2,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  iVar1 = 0;
  iVar6 = param_1[2];
  iVar4 = 0;
  do {
    iVar8 = iVar6 + iVar4;
    uVar9 = *(uint *)(iVar8 + 8);
    if (-1 < (int)uVar9) {
      puVar7 = (uint *)(DAT_089d726c + (uVar9 >> 5) * 4);
      *puVar7 = *puVar7 | 1 << (uVar9 & 0x1f);
      iVar6 = param_1[2];
      iVar8 = iVar6 + iVar4;
    }
    uVar9 = *(uint *)(iVar8 + 0x28);
    if (-1 < (int)uVar9) {
      puVar7 = (uint *)(DAT_089d726c + (uVar9 >> 5) * 4);
      *puVar7 = *puVar7 & ~(1 << (uVar9 & 0x1f));
      iVar6 = param_1[2];
    }
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar1 < 8);
  if ((*(ushort *)(iVar6 + 6) & 0x10) != 0) {
    *(undefined1 *)((int)param_1 + 0x17b9) = 1;
  }
  if (*(char *)((int)param_1 + 0x17b9) == '\0') {
    if ((*(ushort *)(iVar6 + 6) & 1) == 0) {
      FUN_08860e78();
      iVar6 = param_1[2];
    }
    else {
      FUN_08860e3c();
      iVar6 = param_1[2];
    }
  }
  iVar1 = 0;
  iVar4 = 0;
  do {
    iVar8 = *(int *)(iVar6 + iVar4 + 0x408);
    if (iVar8 != 0) {
      *(int *)(iVar6 + iVar4 + 0x408) = iVar8 + iVar6;
      iVar6 = param_1[2];
    }
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar1 < 0x1e);
  if (*(int *)(iVar6 + 0x480) != 0) {
    *(int *)(iVar6 + 0x480) = *(int *)(iVar6 + 0x480) + iVar6;
    iVar6 = param_1[2];
  }
  if (*(int *)(iVar6 + 0x484) != 0) {
    *(int *)(iVar6 + 0x484) = *(int *)(iVar6 + 0x484) + iVar6;
  }
  if (*(char *)((int)param_1 + 0x17b9) == '\0') {
    FUN_088e6f0c(param_1 + 0x380);
  }
  FUN_088e8330(param_1 + 0x488,param_2,param_1[1]);
  FUN_088e8730(param_1 + 0x49c,param_1[1]);
  FUN_088e3c14(param_1 + 0x16f,param_1[2],param_2,param_1[1]);
  cVar3 = *(char *)((int)param_1 + 0x17b9);
  if (cVar3 == '\0') {
    FUN_088e2fd8(param_1 + 0x16f,param_4,param_5,param_3);
    cVar3 = *(char *)((int)param_1 + 0x17b9);
  }
  if (cVar3 == '\0') {
    uVar2 = FUN_088fe708(PTR_s_sound_snd_rt_scd_089d7e80,param_4,param_5,0);
    FUN_088fe944(PTR_s_sound_snd_rt_scd_089d7e80,param_4,uVar2);
    FUN_0893476c(auStack_50,"talkevent");
    uVar2 = FUN_088a0dbc(DAT_089d6c80,auStack_50,param_4,uVar2,1);
    param_1[0x5c2] = uVar2;
  }
  FUN_088ea7b8(param_1 + 0x4a3,param_2);
  if (*(char *)((int)param_1 + 0x17ba) != '\0') {
    FUN_088e6728(param_1 + 0x4ac,(*(ushort *)(param_1[2] + 6) & 8) != 0);
  }
  if (*(char *)((int)param_1 + 0x17b9) == '\0') {
    FUN_088eaaf0(param_1 + 0x4b6,param_1[2]);
  }
  iVar1 = 0;
  puVar5 = param_1 + 5;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[3] = 0;
    *(undefined2 *)(puVar5 + 4) = 0;
    *(undefined2 *)((int)puVar5 + 0x12) = 0;
    *(undefined1 *)(puVar5 + 7) = 0;
    *(undefined2 *)(puVar5 + 5) = 0;
    *(char *)((int)puVar5 + 0x1d) = (char)iVar1;
    puVar5[6] = 0;
    *(undefined1 *)((int)puVar5 + 0x1e) = 0;
    *(undefined1 *)((int)puVar5 + 0x1f) = 0;
    *(undefined1 *)(puVar5 + 8) = 0;
    *(undefined1 *)((int)puVar5 + 0x21) = 0;
    *(undefined1 *)((int)puVar5 + 0x22) = 0;
    *(undefined1 *)((int)puVar5 + 0x23) = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    *(undefined1 *)((int)puVar5 + 0x25) = 0;
    *(undefined1 *)((int)puVar5 + 0x26) = 0;
    *(undefined1 *)((int)puVar5 + 0x27) = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
    iVar1 = iVar1 + 1;
    puVar5 = puVar5 + 0xb;
  } while (iVar1 < 0x1e);
  *param_1 = 1;
  iVar1 = param_1[2];
  if ((*(ushort *)(iVar1 + 6) & 2) == 0) {
    iVar4 = FUN_088f47e0(0x11);
    iVar1 = param_1[2];
    if (iVar4 != 0) {
      *param_1 = 4;
    }
  }
  if ((*(ushort *)(iVar1 + 6) & 4) != 0) {
    param_1[0x58c] = 0x280000;
    uVar2 = FUN_088664c4();
    param_1[0x58b] = uVar2;
  }
  if ((*(char *)((int)param_1 + 0x17b9) == '\0') && (*(char *)((int)param_1 + 0x17bd) == '\0')) {
    uVar2 = FUN_08862758(0x5000);
    param_1[4] = uVar2;
    FUN_088cb948(uVar2,0x5000);
  }
  return;
}

