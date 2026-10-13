/* Entry 0x089165F0 | file offset 0x001135C8 | FUN_089165f0 | bytes 344 */

void FUN_089165f0(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_088729a0(0);
  pcVar2 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
  iVar1 = (*pcVar2)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar2,8,0);
  if (iVar1 == 0) {
    iVar1 = FUN_088729a0(0);
    pcVar2 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
    iVar1 = (*pcVar2)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar2,4,0);
    if (iVar1 != 0) {
      iVar1 = FUN_088de7e8(param_1 + 0x31c);
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          FUN_088a24d4(0,0x2711,1,0);
          FUN_08916748(param_1);
          FUN_088ce7f4(param_1 + 0x404);
          FUN_089160f0(param_1);
          FUN_08916068(param_1);
        }
      }
      else if (iVar1 < 2) {
        FUN_088a24d4(0,0x2712,1,0);
        FUN_08916748(param_1);
        *(undefined1 *)(param_1 + 0x7d8) = 1;
        FUN_0891386c(param_1);
      }
    }
  }
  else {
    FUN_088a24d4(0,0x2712,1,0);
    FUN_08916748(param_1);
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    FUN_0891386c(param_1);
  }
  return;
}

