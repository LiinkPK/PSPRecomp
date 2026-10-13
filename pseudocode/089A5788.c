/* Entry 0x089A5788 | file offset 0x001A2760 | FUN_089a5788 | bytes 624 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_089a5788(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  DAT_089daa30 = 0;
  iVar3 = -1;
  do {
    iVar1 = sceIoDopen(param_1);
    iVar2 = iVar1;
    if (iVar1 < 0) break;
    while (iVar2 = sceIoDread(iVar1,&DAT_089da8d8), 0 < iVar2) {
      if ((DAT_089da930 != '.') ||
         ((DAT_089da931 != '\0' && ((_DAT_089da930 & 0xffff00) != 0x2e00)))) {
        if (param_1 == &DAT_089da4d8) {
          uVar6 = 0;
          if (DAT_089da4d8 != '\0') {
            uVar6 = 1;
            pcVar5 = &DAT_089da4d8;
            while ((pcVar5 = pcVar5 + 1, uVar6 < 0x400 && (*pcVar5 != '\0'))) {
              uVar6 = uVar6 + 1;
            }
          }
        }
        else {
          FUN_089a5ffc(&DAT_089da4d8,param_1,0x400);
          uVar6 = 0;
        }
        pcVar5 = &DAT_089da4d8;
        uVar4 = 0;
        if (DAT_089da4d8 != '\0') {
          uVar4 = 1;
          while ((pcVar5 = pcVar5 + 1, uVar4 < 0x400 && (*pcVar5 != '\0'))) {
            uVar4 = uVar4 + 1;
          }
        }
        FUN_089a5ffc(&DAT_089da4d8 + uVar4,&DAT_089d0998,0x400 - uVar4);
        pcVar5 = &DAT_089da4d8;
        uVar4 = 0;
        if (DAT_089da4d8 != '\0') {
          uVar4 = 1;
          while ((pcVar5 = pcVar5 + 1, uVar4 < 0x400 && (*pcVar5 != '\0'))) {
            uVar4 = uVar4 + 1;
          }
        }
        FUN_089a5ffc(&DAT_089da4d8 + uVar4,&DAT_089da930,0x400 - uVar4);
        DAT_089da8dc = 0;
        sceIoChstat(&DAT_089da4d8,&DAT_089da8d8,2);
        if ((DAT_089da8d8 & 0x1000) != 0) {
          sceIoDclose(iVar1);
          iVar3 = FUN_089a5788(&DAT_089da4d8);
          iVar1 = -1;
          if (iVar3 < 0) {
            return iVar3;
          }
          if (uVar6 != 0) {
            (&DAT_089da4d8)[uVar6] = 0;
          }
          break;
        }
        iVar2 = sceIoRemove(&DAT_089da4d8);
        iVar3 = iVar1;
        if (iVar2 < 0) goto LAB_089a58fc;
        if (uVar6 != 0) {
          (&DAT_089da4d8)[uVar6] = 0;
        }
      }
    }
    if (iVar2 == 0) {
      sceIoDclose(iVar1);
      iVar2 = sceIoRmdir(param_1);
      iVar3 = -1;
      break;
    }
    iVar3 = iVar1;
  } while (-1 < iVar2);
LAB_089a58fc:
  if (-1 < iVar3) {
    sceIoDclose(iVar3);
  }
  return iVar2;
}

