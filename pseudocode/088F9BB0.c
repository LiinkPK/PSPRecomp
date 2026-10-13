/* Entry 0x088F9BB0 | file offset 0x000F6B88 | FUN_088f9bb0 | bytes 984 */

void FUN_088f9bb0(int param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  
  iVar6 = DAT_089d712c;
  iVar18 = DAT_089d712c + 0xf6e0;
  iVar3 = FUN_088cb164();
  iVar1 = param_1 * 0x1060;
  puVar17 = &DAT_09afb8a0 + param_1 * 0x418;
  iVar19 = iVar1 + 0x9afb8b0;
  FUN_088f8d34(puVar17);
  iVar7 = 0;
  iVar10 = 0xef;
  do {
    uVar12 = ((undefined4 *)(iVar3 + iVar7))[1];
    *(undefined4 *)((int)puVar17 + iVar7) = *(undefined4 *)(iVar3 + iVar7);
    ((undefined4 *)((int)puVar17 + iVar7))[1] = uVar12;
    iVar10 = iVar10 + -1;
    iVar7 = iVar7 + 8;
  } while (iVar10 != 0);
  iVar3 = FUN_0885c304(DAT_089d4e14);
  iVar7 = iVar19 + (char)(&DAT_09afc013)[iVar1] * 0xc6;
  if ((iVar3 == 0) && (*(char *)(iVar7 + 0xb8) == '!')) {
    *(undefined1 *)(iVar7 + 0xb8) = 0xff;
    iVar7 = iVar19 + (char)(&DAT_09afc013)[iVar1] * 0xc6;
  }
  FUN_088f8e8c(puVar17,iVar7,iVar18);
  FUN_088f8fb0(puVar17,iVar18);
  FUN_088f9290(puVar17,iVar18);
  FUN_088f9320(puVar17);
  iVar3 = DAT_089d712c;
  puVar15 = &DAT_09afc110 + iVar1;
  iVar18 = DAT_089d712c + 0x39f38;
  iVar10 = iVar19 + (char)(&DAT_09afc013)[iVar1] * 0xc6;
  iVar7 = 0;
  do {
    uVar4 = FUN_088b7b18(iVar10,iVar7);
    iVar5 = FUN_088c7f78(uVar4);
    if (iVar5 == 1) {
      uVar12 = FUN_088c7f3c(param_1,uVar4 & 0x1f);
      iVar5 = FUN_088c75b4(iVar18,uVar4 & 0x1f);
      if (iVar5 == 0) {
        FUN_088b765c(iVar10,iVar7,0xffffffff);
      }
      else {
        FUN_088b765c(iVar10,iVar7,uVar12);
        iVar16 = 0;
        iVar8 = 0x20;
        do {
          uVar2 = ((undefined2 *)(iVar5 + iVar16))[1];
          *(undefined2 *)(puVar15 + iVar16) = *(undefined2 *)(iVar5 + iVar16);
          *(undefined2 *)((int)(puVar15 + iVar16) + 2) = uVar2;
          iVar8 = iVar8 + -1;
          iVar16 = iVar16 + 4;
        } while (iVar8 != 0);
      }
    }
    iVar7 = iVar7 + 1;
    puVar15 = puVar15 + 0x80;
  } while (iVar7 < 4);
  *(undefined4 *)(&DAT_09afc310 + iVar1) = *(undefined4 *)(iVar3 + 0x3b798);
  puVar11 = (undefined4 *)(DAT_089d712c + 0x1fdd8);
  iVar3 = 0;
  iVar7 = 0x1c;
  uVar12 = *puVar11;
  puVar9 = (undefined4 *)(&DAT_09afc018 + iVar1);
  puVar14 = puVar11;
  do {
    uVar13 = puVar14[1];
    *puVar9 = uVar12;
    iVar3 = iVar3 + 8;
    puVar9[1] = uVar13;
    puVar14 = (undefined4 *)((int)puVar11 + iVar3);
    iVar7 = iVar7 + -1;
    uVar12 = *puVar14;
    puVar9 = (undefined4 *)((int)(&DAT_09afc018 + iVar1) + iVar3);
  } while (iVar7 != 0);
  *puVar9 = uVar12;
  iVar19 = iVar19 + (char)(&DAT_09afc013)[iVar1] * 0xc6;
  uVar2 = FUN_088fb934(param_2,(int)(char)(&DAT_09afc014)[iVar1],0);
  (&DAT_09afc7da)[param_1 * 0x830] = uVar2;
  (&DAT_09afc8f8)[iVar1] = (char)param_2;
  (&DAT_09afc8f9)[iVar1] = (&DAT_09afc014)[iVar1];
  if (param_5 < 0) {
    uVar2 = FUN_088fb934((int)*(char *)(iVar19 + 0xb8),(int)*(char *)(iVar19 + 0xb9),1);
    (&DAT_09afc7de)[param_1 * 0x830] = uVar2;
    (&DAT_09afc8fa)[iVar1] = *(undefined1 *)(iVar19 + 0xb8);
    (&DAT_09afc8fb)[iVar1] = *(undefined1 *)(iVar19 + 0xb9);
  }
  else {
    uVar2 = FUN_088fb934(param_5,param_6,1);
    (&DAT_09afc7de)[param_1 * 0x830] = uVar2;
    (&DAT_09afc8fa)[iVar1] = (char)param_5;
    (&DAT_09afc8fb)[iVar1] = (char)param_6;
  }
  if (param_4 == '\x01') {
    iVar6 = FUN_088c04b4(iVar6 + 0x133fc,param_2);
    if (iVar6 != 0) {
      (&DAT_09afc7d4)[param_1 * 0x830] = 2;
      uVar12 = FUN_088cbb3c(puVar17);
      uVar2 = FUN_088c0640(uVar12);
      *(undefined2 *)(&DAT_09afc7d8 + iVar1) = uVar2;
      FUN_088c0274(iVar6,&DAT_09afc7e0 + iVar1);
    }
  }
  else {
    (&DAT_09afc7d4)[param_1 * 0x830] = 0;
  }
  return;
}

