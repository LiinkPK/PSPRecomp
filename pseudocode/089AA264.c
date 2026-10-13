/* Entry 0x089AA264 | file offset 0x001A723C | FUN_089aa264 | bytes 1252 */

/* WARNING: Type propagation algorithm not settling */

int FUN_089aa264(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 local_15e0 [5];
  undefined1 auStack_15cc [1036];
  undefined1 auStack_11c0 [344];
  undefined1 *local_1068;
  undefined1 auStack_1060 [1024];
  char local_c60 [15];
  char acStack_c51 [1025];
  undefined1 auStack_850 [1024];
  undefined1 auStack_450 [1024];
  undefined1 auStack_50 [16];
  int local_40;
  int local_3c;
  
  iVar9 = 0;
  if (param_1 == (char *)0x0 || param_2 == (char *)0x0) {
    return -0x7ffffe02;
  }
  if ((*param_1 == '\0') || (*param_2 == '\0')) {
    return -0x7ffffe02;
  }
  if (DAT_089daa50 == 0) {
    FUN_089aa818(1);
  }
  iVar2 = FUN_089ab27c(param_1,0x400);
  iVar3 = FUN_089ab27c(param_2,0x400);
  iVar4 = FUN_089ab27c(&DAT_089daa68,0x400);
  if (0x3ff < (uint)(iVar2 + iVar3 + iVar4 + DAT_089daa54)) {
    return -0x7ffffe02;
  }
  iVar2 = sceKernelPowerLock(0);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar8 = acStack_c51 + 1;
  FUN_089ab210(pcVar8,param_2,0x400);
  iVar2 = FUN_089ab27c(pcVar8,0x400);
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) goto LAB_089aa3c0;
    pcVar6 = pcVar8 + iVar2;
  } while (*pcVar6 != '.');
  uVar5 = FUN_089ab27c(pcVar6,0x400);
  if (uVar5 < 8) {
    FUN_089ab210(auStack_50,pcVar6,8);
    *pcVar6 = '\0';
    if (0 < iVar2) {
      iVar2 = DAT_089daa48;
      if ((-1 < DAT_089daa48) ||
         ((iVar3 = FUN_089ab038(param_1,param_2), iVar3 != 0 && (iVar2 = 1, -1 < iVar3)))) {
        FUN_089ab210(auStack_450,pcVar8,0x400);
        FUN_089ab2b4(auStack_450,s___03d_089daa38,0x400);
        FUN_089ab2b4(auStack_450,auStack_50,0x400);
        FUN_089ab210(pcVar8,auStack_450,0x400);
        FUN_089aae10(pcVar8);
        FUN_089ab36c(local_15e0,0,0x414);
        local_15e0[0] = 0x414;
        iVar3 = 0;
        local_1068 = (undefined1 *)local_15e0;
        FUN_089ab36c(&DAT_089dae68,0,0x7d);
        FUN_089ab210(auStack_1060,&DAT_089daa68,0x400);
        FUN_089ab2b4(auStack_1060,&DAT_089d0a04,0x400);
        FUN_089ab2b4(auStack_1060,param_1,0x400);
        iVar4 = FUN_089ab27c(pcVar8,0x400);
        pcVar6 = pcVar8;
        if (0 < iVar4) {
          do {
            if (*pcVar6 == '%') {
              *pcVar6 = '\0';
              iVar9 = iVar3;
              break;
            }
            iVar3 = iVar3 + 1;
            pcVar6 = pcVar8 + iVar3;
          } while (iVar3 < iVar4);
        }
        iVar7 = 0;
        while( true ) {
          iVar1 = iVar3 + 1;
          if (iVar4 <= iVar1) goto LAB_089aa3c0;
          if (pcVar8[iVar1] == 'D') break;
          local_c60[iVar7] = pcVar8[iVar1];
          iVar7 = iVar7 + 1;
          iVar3 = iVar1;
        }
        local_40 = iVar3 + 2;
        local_3c = FUN_089ab27c(pcVar8 + local_40,0x400);
        local_c60[iVar7] = '\0';
        iVar3 = FUN_089aada0(local_c60);
        if ((iVar3 == 0) || (iVar3 = FUN_08934924(local_c60), 7 < iVar3)) goto LAB_089aa3c0;
        iVar3 = sceIoDopen(auStack_1060);
        if (iVar3 < 0) {
          if (iVar3 == -0x7ffefffe) {
            FUN_0893476c(param_2,auStack_450,iVar2);
            iVar3 = 0;
          }
          goto LAB_089aa3c4;
        }
        while( true ) {
          iVar4 = sceIoDread(iVar3,auStack_11c0);
          if (iVar4 < 1) break;
          FUN_089ab210(auStack_850);
          FUN_089aae10(auStack_850);
          iVar4 = FUN_089ab27c(auStack_850,0x400);
          iVar4 = FUN_089aae74(auStack_850,pcVar8,iVar9,iVar4 - local_3c,local_40);
          iVar4 = iVar4 + -1;
          iVar7 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1d)) >> 3;
          if (-1 < iVar4) {
            (&DAT_089dae68)[iVar7] =
                 (&DAT_089dae68)[iVar7] | (byte)(1 << (iVar4 + iVar7 * -8 & 0x1fU));
          }
        }
        sceIoDclose(iVar3,auStack_15cc,0x400);
        iVar2 = iVar2 + -1;
        while (iVar3 = iVar4, iVar2 < 1000) {
          iVar9 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3;
          uVar5 = iVar2 + iVar9 * -8;
          if (DAT_089daa4c <= iVar2) {
            iVar3 = -0x7ffeffdf;
            break;
          }
          iVar2 = iVar2 + 1;
          if (((int)(char)(&DAT_089dae68)[iVar9] & 1 << (uVar5 & 0x1f)) >> (uVar5 & 0x1f) == 0) {
            FUN_0893476c(param_2,auStack_450);
            iVar3 = 1;
            break;
          }
        }
      }
      goto LAB_089aa3c4;
    }
  }
LAB_089aa3c0:
  iVar3 = -0x7ffffe02;
LAB_089aa3c4:
  sceKernelPowerUnlock(0);
  return iVar3;
}

