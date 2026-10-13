/* Entry 0x08915048 | file offset 0x00112020 | FUN_08915048 | bytes 276 */

void FUN_08915048(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_0891705c(0xffffffff);
  sVar1 = *(short *)(iVar2 + 0x240);
  *(undefined4 *)(param_1 + 0x7b0) = 0xffffffff;
  FUN_089a34e0(param_1 + 0x7b4);
  FUN_089a34e0(param_1 + 0x7c0);
  if (-1 < sVar1) {
    FUN_08912644(iVar2);
    *(undefined1 *)(param_1 + 0x7df) = 1;
    if ((*(uint *)(iVar2 + 0x260) & 0x10) != 0) {
      FUN_089151a8(param_1);
    }
    if ((*(uint *)(iVar2 + 0x260) & 8) != 0) {
      *(int *)(param_1 + 0x7b0) = (int)sVar1;
      FUN_089a34c0(param_1 + 0x7b4,iVar2 + 0x244);
      FUN_089a34c0(param_1 + 0x7c0,iVar2 + 0x250);
    }
    FUN_089127c4(iVar2);
  }
  return;
}

