/* Entry 0x089A9640 | file offset 0x001A6618 | FUN_089a9640 | bytes 1316 */

int FUN_089a9640(char *param_1,char *param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_890 [8];
  uint local_888;
  int local_884;
  undefined1 auStack_830 [1024];
  undefined1 auStack_430 [1024];
  
  if ((param_1 == (char *)0x0 || param_2 == (char *)0x0) || (param_6 == 0)) {
    return -0x7ffffe02;
  }
  if (*param_1 == '\0') {
    return -0x7ffffe02;
  }
  if (*param_2 == '\0') {
    return -0x7ffffe02;
  }
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
  else {
    iVar1 = -0x7ffffe02;
    if (((DAT_089daa50 & 0x70) != 0) ||
       (((DAT_089daa50 & 0x88) != 0 && (iVar1 = FUN_089a9ff4(param_1), iVar1 != 0))))
    goto LAB_089a9994;
  }
  iVar2 = FUN_089ab27c(param_1,0x400);
  iVar3 = FUN_089ab27c(param_2,0x400);
  iVar4 = FUN_089ab27c(&DAT_089daa68,0x400);
  iVar1 = -0x7ffffe02;
  if (0x3ff < (uint)(iVar2 + iVar3 + iVar4 + DAT_089daa54)) goto LAB_089a9994;
  FUN_089ab210(auStack_830,&DAT_089daa68,0x400);
  FUN_089ab2b4(auStack_830,&DAT_089d0a04,0x400);
  FUN_089ab2b4(auStack_830,param_1,0x400);
  FUN_089ab210(auStack_430,auStack_830,0x400);
  FUN_089ab2b4(auStack_430,&DAT_089d0a04,0x400);
  iVar1 = sceIoGetstat(auStack_830,auStack_890);
  if (iVar1 == 0) {
    iVar2 = param_6;
    if ((param_3 != 0xffffffc0) || (param_4 != 0x7fffffff)) {
      FUN_089ab2b4(auStack_430,param_2,0x400);
      iVar1 = sceIoGetstat(auStack_430,auStack_890);
      if (iVar1 == 0) {
        if ((local_884 < param_4) || ((local_884 == param_4 && (local_888 < param_3))))
        goto LAB_089a9a60;
        if (local_884 < 0) {
LAB_089a9a40:
          iVar2 = (param_6 + param_3) - local_888;
        }
        else if (local_884 == 0) {
          if (local_888 < param_6 + param_3) goto LAB_089a9a40;
          iVar2 = 0;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar1 = -0x7ffffe02;
        if (param_3 != 0 || param_4 != 0) goto LAB_089a9994;
      }
    }
    iVar1 = FUN_089aaf68(param_1);
    if (((iVar1 != 0) || (iVar1 = FUN_089a9de4(iVar2,0), iVar1 != 0)) || (param_5 == 0))
    goto LAB_089a9994;
  }
  else {
    if (param_3 == 0 && param_4 == 0) {
      FUN_089ab2b4(auStack_430,param_2,0x400);
    }
    else if ((param_3 != 0xffffffc0) || (param_4 != 0x7fffffff)) {
LAB_089a9a60:
      iVar1 = -0x7ffffe02;
      goto LAB_089a9994;
    }
    uVar5 = 1;
    if ((DAT_089daa50 & 0x200) != 0) {
      uVar5 = 2;
    }
    iVar1 = FUN_089a9de4(param_6,uVar5);
    if ((((iVar1 != 0) || (param_5 == 0)) ||
        (((DAT_089daa50 & 0x217) == 0 && (iVar1 = FUN_089aacb8(&DAT_089daa58), iVar1 != 0)))) ||
       (iVar1 = FUN_089aacb8(&DAT_089daa68), iVar1 != 0)) goto LAB_089a9994;
  }
  iVar1 = FUN_089aacb8(auStack_830);
  if (iVar1 == 0) {
    FUN_089ab2b4(auStack_830,&DAT_089d0a04,0x400);
    FUN_089ab2b4(auStack_830,"DUMMY_FL.DAT",0x400);
    if ((param_3 == 0xffffffc0) && (param_4 == 0x7fffffff)) {
      iVar1 = FUN_089aa264(param_1,param_2);
      if (iVar1 < 0) goto LAB_089a9994;
      FUN_089ab2b4(auStack_430,param_2,0x400);
    }
    else {
      iVar1 = FUN_089a5bf0(auStack_430,auStack_830);
      if (iVar1 < 0) {
        FUN_089a5af4(auStack_830);
      }
    }
    if ((((DAT_089daa50 & 0x88) == 0) || (iVar1 = FUN_089aa114(param_2), iVar1 == 0)) &&
       (iVar2 = FUN_089a59f8(auStack_830,0x203,0x1ff), iVar1 = iVar2, -1 < iVar2)) {
      if ((((param_3 == 0xffffffc0) && (param_4 == 0x7fffffff)) ||
          (iVar1 = sceIoLseek(iVar2), -1 < iVar1)) &&
         (iVar1 = sceIoWrite(iVar2,param_5,param_6), -1 < iVar1)) {
        sceIoClose(iVar2);
        if (iVar1 == param_6) {
          iVar1 = FUN_089a5bf0(auStack_830,auStack_430);
          if (iVar1 < 0) {
            FUN_089a5af4(auStack_830);
          }
        }
        else {
          iVar1 = -0x7ffeffed;
        }
      }
      else {
        sceIoClose(iVar2);
      }
    }
  }
LAB_089a9994:
  sceKernelPowerUnlock(0);
  return iVar1;
}

