/* Entry 0x089AB038 | file offset 0x001A8010 | FUN_089ab038 | bytes 292 */

int FUN_089ab038(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_480 [96];
  undefined1 auStack_420 [1024];
  
  iVar1 = FUN_089ab27c(param_1,0x400);
  iVar2 = FUN_089ab27c(param_2,0x400);
  iVar3 = FUN_089ab27c(&DAT_089daa68,0x400);
  iVar4 = -0x7ffffe02;
  if ((uint)(iVar1 + iVar2 + iVar3 + DAT_089daa54) < 0x400) {
    FUN_089ab210(auStack_420,&DAT_089daa68,0x400);
    FUN_089ab2b4(auStack_420,&DAT_089d0a04,0x400);
    FUN_089ab2b4(auStack_420,param_1,0x400);
    FUN_089ab2b4(auStack_420,&DAT_089d0a04,0x400);
    FUN_089ab2b4(auStack_420,param_2,0x400);
    iVar4 = sceIoGetstat(auStack_420,auStack_480);
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    else if (iVar4 == -0x7ffefffe) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

