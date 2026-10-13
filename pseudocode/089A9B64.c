/* Entry 0x089A9B64 | file offset 0x001A6B3C | FUN_089a9b64 | bytes 640 */

int FUN_089a9b64(char *param_1,char *param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_490 [96];
  undefined1 auStack_430 [1024];
  
  if ((param_1 != (char *)0x0 && param_2 != (char *)0x0) && (param_6 != 0)) {
    if (*param_1 == '\0') {
      return -0x7ffffe02;
    }
    if (*param_2 != '\0') {
      if ((param_5 & 0x3f) != 0) {
        return -0x7ffffe02;
      }
      if ((param_3 & 0x3f) != 0) {
        return -0x7ffffe02;
      }
      iVar1 = sceKernelPowerLock(0);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (DAT_089daa50 == 0) {
        FUN_089aa818(1);
      }
      iVar1 = FUN_089ab27c(param_1,0x400);
      iVar2 = FUN_089ab27c(param_2,0x400);
      iVar3 = FUN_089ab27c(&DAT_089daa68,0x400);
      if ((uint)(iVar1 + iVar2 + iVar3 + DAT_089daa54) < 0x400) {
        iVar1 = FUN_089ab15c(param_1,&DAT_089d0a18,0x400);
        if (iVar1 == 0) {
          FUN_089ab210(auStack_430,&DAT_089daa68,0x400);
        }
        else {
          FUN_089ab210(auStack_430,&DAT_089daa68,0x400);
          FUN_089ab2b4(auStack_430,&DAT_089d0a04,0x400);
          FUN_089ab2b4(auStack_430,param_1,0x400);
        }
        FUN_089ab2b4(auStack_430,&DAT_089d0a04,0x400);
        FUN_089ab2b4(auStack_430,param_2,0x400);
        sceIoGetstat(auStack_430,auStack_490);
        iVar1 = 0;
        if ((param_5 != 0) && (iVar2 = sceIoOpen(auStack_430,1,0), iVar1 = iVar2, -1 < iVar2)) {
          if ((param_3 == 0 && param_4 == 0) ||
             (iVar1 = sceIoLseek(iVar2,param_5,param_3,param_4,0), -1 < iVar1)) {
            iVar1 = sceIoRead(iVar2,param_5,param_6);
          }
          sceIoClose(iVar2);
        }
      }
      else {
        iVar1 = -0x7ffffe02;
      }
      sceKernelPowerUnlock(0);
      return iVar1;
    }
  }
  return -0x7ffffe02;
}

