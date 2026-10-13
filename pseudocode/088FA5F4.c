/* Entry 0x088FA5F4 | file offset 0x000F75CC | FUN_088fa5f4 | bytes 768 */

void FUN_088fa5f4(int param_1,short *param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  short *psVar15;
  undefined4 *puVar16;
  undefined2 local_170 [156];
  short *local_38;
  uint local_34;
  
  local_34 = param_3 & 0xff;
  iVar12 = param_1 * 0x1060;
  puVar16 = &DAT_09afb8a0 + param_1 * 0x418;
  FUN_088f8d34(puVar16);
  psVar15 = (short *)(iVar12 + 0x9afb8b0 + (char)(&DAT_09afc013)[iVar12] * 0xc6);
  FUN_088cba10(puVar16);
  FUN_088cba54(puVar16,(int)*param_2);
  *(char *)((int)&DAT_09afb8a0 + iVar12 + 1) = (char)param_2[2];
  FUN_088cbddc(puVar16);
  sVar5 = param_2[3];
  psVar11 = param_2 + 0x69;
  if (sVar5 < 0) {
    sVar5 = 0;
  }
  else if (0x96 < sVar5) {
    sVar5 = 0x96;
  }
  *(char *)((int)&DAT_09afb8a0 + iVar12 + 2) = (char)sVar5;
  iVar6 = 0;
  (&DAT_09afc014)[iVar12] = (char)param_2[1];
  psVar10 = param_2 + 6;
  iVar7 = 0x31;
  sVar5 = *psVar10;
  psVar8 = psVar10;
  psVar9 = psVar15;
  do {
    sVar1 = psVar8[1];
    *psVar9 = sVar5;
    iVar6 = iVar6 + 4;
    psVar9[1] = sVar1;
    psVar8 = (short *)((int)psVar10 + iVar6);
    iVar7 = iVar7 + -1;
    sVar5 = *psVar8;
    psVar9 = (short *)((int)psVar15 + iVar6);
  } while (iVar7 != 0);
  *psVar9 = sVar5;
  iVar6 = 0;
  iVar7 = 0;
  psVar8 = psVar15 + 0x51;
  do {
    if (*psVar8 != -1) {
      iVar6 = iVar7;
    }
    iVar7 = iVar7 + 1;
    psVar8 = psVar8 + 1;
  } while (iVar7 < 10);
  (&DAT_09afc015)[iVar12] = (char)iVar6 + '\x01';
  iVar6 = 0;
  puVar13 = &DAT_09afc110 + iVar12;
  local_38 = psVar11;
  do {
    uVar3 = FUN_088b7b18(psVar15,iVar6);
    iVar7 = FUN_088c7f78(uVar3);
    if (iVar7 != 0) {
      uVar4 = FUN_088c7f3c(param_1,uVar3 & 0x1f);
      FUN_088b765c(psVar15,iVar6,uVar4);
      iVar14 = 0;
      iVar7 = 0x20;
      do {
        uVar2 = ((undefined2 *)((int)psVar11 + iVar14))[1];
        *(undefined2 *)(puVar13 + iVar14) = *(undefined2 *)((int)psVar11 + iVar14);
        *(undefined2 *)((int)(puVar13 + iVar14) + 2) = uVar2;
        iVar7 = iVar7 + -1;
        iVar14 = iVar14 + 4;
      } while (iVar7 != 0);
    }
    iVar6 = iVar6 + 1;
    puVar13 = puVar13 + 0x80;
    psVar11 = psVar11 + 0x40;
  } while (iVar6 < 4);
  *(short *)(&DAT_09afc314 + iVar12) = (short)(char)psVar15[0x5d];
  (&DAT_09afc316)[iVar12] = 1;
  (&DAT_09afc317)[iVar12] = 1;
  uVar2 = 2;
  if (local_34 == 1) {
    uVar2 = 0;
  }
  (&DAT_09afc7d4)[param_1 * 0x830] = uVar2;
  uVar2 = FUN_088c0640((int)param_2[3]);
  *(undefined2 *)(&DAT_09afc7d8 + iVar12) = uVar2;
  uVar2 = FUN_088fb934((int)*param_2,(int)(char)param_2[1],0);
  (&DAT_09afc7da)[param_1 * 0x830] = uVar2;
  (&DAT_09afc8f8)[iVar12] = (char)*param_2;
  (&DAT_09afc8f9)[iVar12] = (char)param_2[1];
  uVar2 = FUN_088fb934((int)(char)psVar15[0x5c],(int)*(char *)((int)psVar15 + 0xb9),1);
  (&DAT_09afc7de)[param_1 * 0x830] = uVar2;
  (&DAT_09afc8fa)[iVar12] = (char)psVar15[0x5c];
  (&DAT_09afc8fb)[iVar12] = *(undefined1 *)((int)psVar15 + 0xb9);
  if (param_1 == 1) {
    iVar12 = 0;
    psVar11 = local_38;
    do {
      FUN_088c7218(local_170);
      iVar6 = 0;
      iVar7 = 0x20;
      do {
        uVar2 = ((undefined2 *)((int)psVar11 + iVar6))[1];
        *(undefined2 *)((int)local_170 + iVar6) = *(undefined2 *)((int)psVar11 + iVar6);
        *(undefined2 *)((int)local_170 + iVar6 + 2) = uVar2;
        iVar7 = iVar7 + -1;
        iVar6 = iVar6 + 4;
      } while (iVar7 != 0);
      FUN_088fae9c(iVar12,local_170);
      iVar12 = iVar12 + 1;
      psVar11 = psVar11 + 0x40;
    } while (iVar12 < 4);
  }
  return;
}

