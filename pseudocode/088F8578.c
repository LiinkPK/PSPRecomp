/* Entry 0x088F8578 | file offset 0x000F5550 | FUN_088f8578 | bytes 1036 */

void FUN_088f8578(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 uStack_12c0;
  undefined1 auStack_12bf [3];
  undefined4 local_12bc;
  undefined4 local_12b8;
  undefined4 local_12b4;
  undefined4 local_12b0;
  undefined8 local_12a8;
  undefined1 auStack_12a0 [4264];
  undefined4 auStack_1f8 [3];
  short asStack_1ec [194];
  undefined2 local_68;
  undefined2 local_66;
  int local_64;
  undefined1 local_60;
  char local_5f [12];
  undefined1 local_53;
  int local_50 [4];
  int local_40;
  int local_3c;
  undefined4 local_38;
  
  puVar6 = &uStack_12c0;
  puVar5 = &uStack_12c0;
  local_40 = DAT_089d712c + 0x1fdd8;
  iVar8 = DAT_089d712c + 0x1fecc;
  iVar11 = *(int *)(DAT_089d712c + 0x39f34);
  iVar10 = 0;
  local_3c = param_1;
  local_38 = param_2;
  if (0 < iVar11) {
    puVar9 = (undefined4 *)(param_1 + 0x14c78);
    do {
      FUN_088f4fc8(puVar9 + 2);
      *(undefined2 *)(puVar9 + 0x490) = 0;
      *(undefined2 *)((int)puVar9 + 0x1242) = 0;
      puVar9[0x491] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      *(undefined1 *)(puVar9 + 0x492) = 0;
      *(undefined1 *)(puVar9 + 0x493) = 0;
      *(undefined1 *)((int)puVar9 + 0x124d) = 0;
      iVar1 = 0;
      puVar2 = puVar9;
      do {
        iVar1 = iVar1 + 1;
        *(undefined1 *)((int)puVar2 + 0x1249) = 0xff;
        puVar2 = (undefined4 *)(iVar1 + (int)puVar9);
      } while (iVar1 < 3);
      puVar9[0x496] = 0;
      puVar9[0x497] = 0;
      puVar9[0x498] = 0;
      puVar9[0x499] = 0;
      puVar9[0x49a] = 1;
      *(undefined1 *)(puVar9 + 0x49b) = 0;
      iVar1 = 0;
      iVar3 = 0x215;
      do {
        uVar4 = ((undefined4 *)(iVar8 + iVar1))[1];
        puVar2 = (undefined4 *)((int)(puVar9 + 2) + iVar1);
        *puVar2 = *(undefined4 *)(iVar8 + iVar1);
        puVar2[1] = uVar4;
        iVar3 = iVar3 + -1;
        iVar1 = iVar1 + 8;
      } while (iVar3 != 0);
      if ((*(byte *)((int)puVar9 + 0x2f) & 0xe) == 0) {
        puVar9[0x49a] = 1;
      }
      iVar1 = FUN_088f6554(&uStack_12c0,&local_12bc,iVar8);
      if (iVar1 == 1) {
        puVar9[0x496] = local_12bc;
        puVar9[0x497] = local_12b8;
        puVar9[0x498] = local_12b4;
        puVar9[0x499] = local_12b0;
      }
      else {
        puVar9[0x496] = 0;
        puVar9[0x497] = 0;
        puVar9[0x498] = 0;
        puVar9[0x499] = 0;
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 0x49c;
      iVar8 = iVar8 + 0x10a8;
    } while (iVar10 < iVar11);
  }
  *(int *)(local_3c + 0x31968) = iVar11;
  iVar10 = DAT_089d712c + 0xf58;
  FUN_088f4fc8(auStack_12a0);
  local_68 = 0;
  local_66 = 0;
  local_64 = 0;
  local_12a8._4_4_ = 0;
  local_12a8._0_4_ = 0;
  local_60 = 0;
  local_5f[3] = 0;
  local_5f[4] = 0;
  iVar8 = 0;
  do {
    iVar11 = iVar8 + 1;
    puVar5[0x1261] = 0xff;
    puVar5 = auStack_12bf + iVar8;
    iVar8 = iVar11;
  } while (iVar11 < 3);
  FUN_088f58c4(auStack_12a0,local_40,iVar10,DAT_089d712c + 0x39f38,DAT_089d712c + 0x3e758,
               DAT_089d712c + 0x3e0b0);
  iVar8 = DAT_089d712c + 0x1fecc;
  iVar10 = *(int *)(DAT_089d712c + 0x39f34);
  iVar11 = 0;
  local_64 = 0;
  if (0 < iVar10) {
    do {
      iVar1 = local_64;
      if ((*(byte *)(iVar8 + 0x27) & 0xe) == 0) {
        uVar7 = *(undefined4 *)(iVar8 + 0x10);
        uVar4 = *(undefined4 *)(iVar8 + 0x14);
        auStack_1f8[local_64 * 4] = *(undefined4 *)(iVar8 + 0xc);
        auStack_1f8[iVar1 * 4 + 1] = uVar7;
        auStack_1f8[iVar1 * 4 + 2] = uVar4;
        asStack_1ec[iVar1 * 8] = *(short *)(iVar8 + 0xe8) + *(short *)(iVar8 + 0xea);
        asStack_1ec[iVar1 * 8 + 1] = *(short *)(iVar8 + 0xea);
        local_64 = local_64 + 1;
      }
      iVar11 = iVar11 + 1;
      iVar8 = iVar8 + 0x10a8;
    } while (iVar11 < iVar10);
  }
  local_12a8 = FUN_088ad574();
  local_60 = FUN_088ad7bc();
  iVar8 = scePowerCheckWlanCoexistenceClock();
  if (iVar8 == 1) {
    local_5f[3] = 1;
  }
  iVar10 = FUN_0890119c(local_50,3,7,1);
  iVar8 = 0;
  if (0 < iVar10) {
    do {
      iVar11 = iVar8 + 1;
      local_5f[iVar8] = **(char **)(puVar6 + 0x1270);
      puVar6 = puVar6 + 4;
      iVar8 = iVar11;
    } while (iVar11 < iVar10);
  }
  local_50[3] = sceKernelGetSystemTimeLow();
  iVar8 = 0;
  do {
    local_50[3] = local_50[3] * 0x343fd + 0x269ec3;
    iVar10 = iVar8 + 1;
    local_5f[iVar8 + 4] = (char)((local_50[3] >> 0x10 & 0x7fffU) % 10) + '0';
    iVar8 = iVar10;
  } while (iVar10 < 8);
  local_53 = 0;
  FUN_089098dc(local_3c,local_38,&local_12a8);
  return;
}

