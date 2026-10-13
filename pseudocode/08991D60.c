/* Entry 0x08991D60 | file offset 0x0018ED38 | FUN_08991d60 | bytes 816 */

undefined4 FUN_08991d60(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  uint local_40;
  
  local_40 = 0;
  cVar1 = (char)DAT_089da420[0x23e];
  uVar10 = 0;
  piVar4 = DAT_089da420;
  while (DAT_089da420 = piVar4, cVar1 == '\0') {
    if (*(char *)((int)piVar4 + 0x8f9) == '\0') {
      iVar9 = uVar10 * 2;
      bVar2 = false;
      uVar7 = 0;
      puVar8 = &DAT_09af0780 + uVar10 * 4;
      iVar6 = 0;
      do {
        iVar5 = *(int *)((int)piVar4 + iVar6 + 8);
        if ((iVar5 != 0) &&
           (iVar3 = (**(code **)(*(int *)(iVar5 + 0x50) + 0x24))
                              (iVar5 + *(short *)(*(int *)(iVar5 + 0x50) + 0x20),uVar10,*piVar4),
           piVar4 = DAT_089da420, iVar3 != 0)) {
          if (bVar2) {
            FUN_08990f20(iVar9,iVar9,*(int *)(iVar5 + 0x34));
            iVar3 = DAT_089da420[0x240];
          }
          else {
            FUN_08935524(puVar8,*(int *)(iVar5 + 0x34) + uVar10 * 4,*DAT_089da420 << 2);
            bVar2 = true;
            iVar3 = DAT_089da420[0x240];
          }
          sceKernelWaitSema(iVar3,1,0);
          iVar3 = FUN_08992734(iVar5);
          piVar4 = DAT_089da420;
          if (iVar3 != 0) {
            DAT_089da420[0x23f] = iVar5;
          }
          sceKernelSignalSema(piVar4[0x240],1);
          piVar4 = DAT_089da420;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar7 < 4);
      if (!bVar2) {
        FUN_08935828(puVar8,0,*piVar4 << 2);
        piVar4 = DAT_089da420;
      }
      if ((char)piVar4[8] != '\0') {
        FUN_08990f20(iVar9,local_40,piVar4[7]);
        piVar4 = DAT_089da420;
        local_40 = local_40 + *DAT_089da420 * 2;
        if (0xfff < local_40) {
          DAT_089da420[7] = 0;
          local_40 = 0;
          *(undefined1 *)(piVar4 + 8) = 0;
        }
      }
      FUN_08991000();
      FUN_089a4e70(puVar8,DAT_089da420[0xc]);
      FUN_08991158();
      if ((code *)DAT_089da420[9] != (code *)0x0) {
        (*(code *)DAT_089da420[9])(puVar8,0x800);
      }
      if ((code *)DAT_089da420[10] == (code *)0x0) {
        sceAudioOutput2OutputBlocking(0x8000,puVar8);
        iVar9 = *DAT_089da420;
        cVar1 = (char)DAT_089da420[0x23e];
      }
      else {
        (*(code *)DAT_089da420[10])(0x8000,puVar8);
        iVar9 = *DAT_089da420;
        cVar1 = (char)DAT_089da420[0x23e];
      }
      uVar10 = uVar10 + iVar9;
      piVar4 = DAT_089da420;
      if (0xfff < uVar10) {
        uVar10 = uVar10 - 0x1000;
      }
    }
    else {
      fVar11 = (float)*piVar4 / 4.41e+10;
      if (fVar11 < 2.1474836e+09) {
        iVar9 = (int)fVar11;
      }
      else {
        iVar9 = (int)(fVar11 - 2.1474836e+09) + -0x80000000;
      }
      sceKernelDelayThread(iVar9);
      cVar1 = (char)DAT_089da420[0x23e];
      piVar4 = DAT_089da420;
    }
  }
  while (iVar9 = sceAudioOutput2GetRestSample(), 0 < iVar9) {
    sceKernelDelayThread(1000);
  }
  sceKernelExitThread(0);
  return 0;
}

