/* Entry 0x088AE148 | file offset 0x000AB120 | FUN_088ae148 | bytes 952 */

undefined4 FUN_088ae148(int param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [8];
  undefined4 local_38;
  
  iVar4 = -1;
  local_38 = param_2;
  if (*(int *)(param_1 + 0x1fc) == 0) {
    iVar4 = FUN_088abf84(param_1);
  }
  switch(*(undefined4 *)(param_1 + 0xeb8)) {
  case 0:
    FUN_08935bb4(param_1 + 0x22c,param_1 + 0x1a4,0x14);
    cVar3 = *(char *)(DAT_089d7280 + 3);
    break;
  case 1:
    iVar4 = FUN_088abefc(param_1);
    bVar1 = -1 < iVar4;
    if ((bVar1) && (*(char *)(param_1 + 0xec0) == '\0')) {
      iVar4 = param_1 + iVar4 * 0x48 + 0x874;
      if (*(char *)(param_1 + 0xec4) == '\0') {
        iVar4 = FUN_08935490(param_1 + 0xe18,iVar4,0x10);
        if (iVar4 != 0) {
          bVar1 = false;
        }
      }
      else {
        FUN_08935524(auStack_50,iVar4,0x10);
        iVar4 = 0;
        bVar2 = true;
        do {
          iVar5 = FUN_08935490(param_1 + 0xe18,auStack_50,0x10);
          if (iVar5 == 0) {
            bVar1 = true;
            break;
          }
          sceRtcGetTick(auStack_50,auStack_40);
          sceRtcTickAddSeconds(auStack_40,auStack_40,1,0);
          sceRtcSetTick(auStack_50,auStack_40);
          iVar4 = iVar4 + 1;
          bVar2 = iVar4 < 10;
        } while (bVar2);
        if (!bVar2) {
          bVar1 = false;
        }
      }
    }
    if (!bVar1) {
      FUN_088abdf0(param_1,local_38);
      FUN_088ad504(param_1);
      FUN_088acdf8(param_1,9,0,1);
      return 1;
    }
    FUN_088ade90(param_1,param_1 + 0x260,param_1 + 0x1cc,1);
    FUN_088adf28(param_1,param_1 + 0x2e0,1,0);
    FUN_08935bb4(param_1 + 0x22c,param_1 + 0x1a4,0x14);
    cVar3 = *(char *)(DAT_089d7280 + 3);
    break;
  default:
    cVar3 = *(char *)(DAT_089d7280 + 3);
    break;
  case 4:
    cVar3 = *(char *)(DAT_089d7280 + 3);
    break;
  case 5:
    iVar4 = FUN_088abefc(param_1);
    iVar5 = param_1 + 0x1a4;
    if (iVar4 < 0) {
      if (*(int *)(param_1 + 0x868) == 0) {
        FUN_08935bb4(iVar5,param_1,0x14);
      }
      else {
        FUN_08935bb4(iVar5,param_1 + 0x8a4,0x14);
      }
    }
    FUN_088ade90(param_1,param_1 + 0x260,param_1 + 0x1b8,0);
    FUN_088adf28(param_1,param_1 + 0x2e0,1,0);
    FUN_08935bb4(param_1 + 0x22c,iVar5,0x14);
    cVar3 = *(char *)(DAT_089d7280 + 3);
    break;
  case 8:
    FUN_08935828(param_1 + 0x808,0,0x40);
    FUN_08935bb4(param_1 + 0x808,param_1 + 0x21c,0xd);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    FUN_08935bb4(param_1 + 0x818,param_1 + iVar4 * 0x14,0x14);
    cVar3 = *(char *)(DAT_089d7280 + 3);
  }
  while (cVar3 != '\0') {
    FUN_08883f9c(DAT_089d69e0,1,0);
    cVar3 = *(char *)(DAT_089d7280 + 3);
  }
  *(undefined4 *)(param_1 + 2000) = 3;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0xeb8);
  sceUtilitySavedataInitStart(param_1 + 0x1e0);
  return 1;
}

