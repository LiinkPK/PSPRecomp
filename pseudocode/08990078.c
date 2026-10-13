/* Entry 0x08990078 | file offset 0x0018D050 | FUN_08990078 | bytes 212 */

void FUN_08990078(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_089da420;
  *(undefined1 *)(DAT_089da420 + 0x8f8) = 1;
  iVar1 = *(int *)(iVar2 + 4);
  if (-1 < iVar1) {
    sceKernelWaitThreadEnd(iVar1,0);
    sceKernelDeleteThread(*(undefined4 *)(DAT_089da420 + 4));
    iVar2 = DAT_089da420;
  }
  sceKernelDeleteSema(*(undefined4 *)(iVar2 + 0x900));
  sceKernelDeleteSema(*(undefined4 *)(DAT_089da420 + 0x2c));
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = *(int *)(DAT_089da420 + iVar2 + 8);
    if ((iVar1 != 0) && (iVar1 != 0)) {
      (**(code **)(*(int *)(iVar1 + 0x50) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x50) + 8),3);
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar3 < 4);
  FUN_089a5468();
  sceAudioOutput2Release();
  return;
}

