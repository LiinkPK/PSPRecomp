/* Entry 0x089AAB08 | file offset 0x001A7AE0 | FUN_089aab08 | bytes 432 */

int FUN_089aab08(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_420 [1024];
  
  iVar1 = -0x7ffffe02;
  if (param_1 != (char *)0x0 && param_2 != (char *)0x0) {
    if ((*param_1 == '\0') || (*param_2 == '\0')) {
      iVar1 = -0x7ffffe02;
    }
    else {
      iVar1 = sceKernelPowerLock(0);
      if (iVar1 == 0) {
        if (DAT_089daa50 == 0) {
          FUN_089aa818(1);
        }
        iVar2 = FUN_089ab27c(param_1,0x400);
        iVar3 = FUN_089ab27c(param_2,0x400);
        iVar4 = FUN_089ab27c(&DAT_089daa68,0x400);
        iVar1 = -0x7ffffe02;
        if ((uint)(iVar2 + iVar3 + iVar4 + DAT_089daa54) < 0x400) {
          iVar1 = FUN_089ab15c(param_1,&DAT_089d0a18,0x400);
          if ((iVar1 == 0) || (iVar1 = FUN_089ab15c(param_1,&DAT_089d0ae8,0x400), iVar1 == 0)) {
            iVar1 = -0x7ffffe02;
          }
          else {
            FUN_089ab210(auStack_420,&DAT_089daa68,0x400);
            FUN_089ab2b4(auStack_420,&DAT_089d0a04,0x400);
            FUN_089ab2b4(auStack_420,param_1,0x400);
            FUN_089ab2b4(auStack_420,&DAT_089d0a04,0x400);
            FUN_089ab2b4(auStack_420,param_2,0x400);
            iVar1 = FUN_089a5af4(auStack_420);
          }
        }
        sceKernelPowerUnlock(0);
      }
    }
  }
  return iVar1;
}

