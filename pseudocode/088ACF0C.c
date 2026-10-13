/* Entry 0x088ACF0C | file offset 0x000A9EE4 | FUN_088acf0c | bytes 476 */

void FUN_088acf0c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_08935bb4(param_1 + 0x1a4,param_1 + 0x22c,0x14);
  iVar1 = FUN_088abefc(param_1);
  if (iVar1 < 0) {
    sceRtcGetCurrentClockLocalTime(param_1 + 0xe18);
    *(undefined4 *)(param_1 + 0xe24) = 0;
    *(undefined1 *)(param_1 + 0xec4) = 1;
    FUN_08935524(param_1 + 0x1cc,param_1 + 0x1b8,0x14);
  }
  else {
    FUN_08935524(param_1 + 0xe18,param_1 + iVar1 * 0x48 + 0x874,0x10);
    *(undefined1 *)(param_1 + 0xec4) = 0;
    if ((param_2 == 4) || (param_2 == 0)) {
      uVar2 = FUN_0887afbc(*(undefined4 *)(param_1 + 0xee0),4,0);
      iVar1 = FUN_089359e8(uVar2);
      iVar3 = FUN_08935490(uVar2,param_1 + 0x360,iVar1);
      iVar5 = param_1 + 0x1b8;
      if (iVar3 == 0) {
        iVar3 = 0;
        for (iVar4 = iVar1; (iVar4 < 0x400 && (*(char *)(iVar4 + param_1 + 0x360) != '\n'));
            iVar4 = iVar4 + 1) {
          iVar3 = iVar3 + 1;
        }
        if (0x14 < iVar3) {
          iVar3 = 0x14;
        }
        FUN_08935bb4(iVar5,param_1 + iVar1 + 0x360,iVar3);
        FUN_08935524(param_1 + 0x1cc,iVar5,0x14);
      }
      else {
        FUN_08935828(iVar5,0,0x28);
      }
    }
    else if (param_2 == 1) {
      if (*(char *)(param_1 + 0x1cc) == '\0') {
        FUN_08935524(param_1 + 0x1cc,param_1 + 0x1b8,0x14);
      }
    }
    else if (param_2 == 5) {
      FUN_08935524(param_1 + 0x1cc,param_1 + 0x1b8,0x14);
    }
  }
  return;
}

