/* Entry 0x089316E0 | file offset 0x0012E6B8 | FUN_089316e0 | bytes 356 */

void FUN_089316e0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x26c);
  *(undefined4 *)(param_1 + 0x294) = 0;
  FUN_088d688c(param_1 + 0x268,0);
  if (iVar2 == *(int *)(param_1 + 0x26c)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x264) + 0x34);
    pcVar1 = *(code **)(iVar2 + 0x14);
    iVar2 = (*pcVar1)(*(int *)(param_1 + 0x264) + (int)*(short *)(iVar2 + 0x10),pcVar1,8,0);
    if ((iVar2 == 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x264) + 0x34), pcVar1 = *(code **)(iVar2 + 0x14),
       iVar2 = (*pcVar1)(*(int *)(param_1 + 0x264) + (int)*(short *)(iVar2 + 0x10),pcVar1,0x8000,0),
       iVar2 == 0)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x264) + 0x34);
      pcVar1 = *(code **)(iVar2 + 0x14);
      iVar2 = (*pcVar1)(*(int *)(param_1 + 0x264) + (int)*(short *)(iVar2 + 0x10),pcVar1,4,0);
      if ((iVar2 != 0) && (*(char *)(param_1 + 0x299) != '\0')) {
        FUN_088d4bf4(1);
        *(undefined4 *)(param_1 + 0x294) = 3;
      }
    }
    else if (*(char *)(param_1 + 0x298) != '\0') {
      *(undefined4 *)(param_1 + 0x294) = 2;
    }
  }
  else {
    FUN_08930700(param_1 + iVar2 * 0x5c + 0x38);
    FUN_089306e4(param_1 + *(int *)(param_1 + 0x26c) * 0x5c + 0x38);
    *(undefined4 *)(param_1 + 0x294) = 1;
  }
  return;
}

