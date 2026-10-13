/* Entry 0x088FF968 | file offset 0x000FC940 | FUN_088ff968 | bytes 248 */

int FUN_088ff968(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = sceKernelCreateSema("AudioReplayLock",0x100,1,1,0);
  *(undefined4 *)(DAT_089d8128 + 0x3dfc) = uVar1;
  if (*(int *)(DAT_089d8128 + 0x3dfc) < 0) {
    FUN_088ffa60();
    iVar3 = *(int *)(DAT_089d8128 + 0x3dfc);
  }
  else {
    uVar1 = sceKernelCreateEventFlag("AudioReplayWait",0,0,0);
    *(undefined4 *)(DAT_089d8128 + 0x3e00) = uVar1;
    if (*(int *)(DAT_089d8128 + 0x3e00) < 0) {
      FUN_088ffa60();
      iVar3 = *(int *)(DAT_089d8128 + 0x3e00);
    }
    else {
      iVar2 = sceKernelCreateSema("AudioReplay",0x100,0,0xf7f,0);
      if (iVar2 < 0) {
        FUN_088ffa60();
        iVar3 = iVar2;
      }
      else {
        iVar3 = 0;
        *(int *)(DAT_089d8128 + 0x3e04) = iVar2;
      }
    }
  }
  return iVar3;
}

