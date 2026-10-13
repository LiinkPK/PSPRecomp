/* Entry 0x0889384C | file offset 0x00090824 | FUN_0889384c | bytes 196 */

void FUN_0889384c(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_08894e9c();
  iVar2 = 0;
  iVar1 = param_1 + 0x140;
  do {
    FUN_08894e9c(iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x130;
  } while (iVar2 < 3);
  FUN_08894e9c(param_1 + 0x4e0);
  *(undefined1 *)(param_1 + 0x610) = 0;
  *(undefined1 *)(param_1 + 0x6b2) = 1;
  *(undefined1 *)(param_1 + 0x6b3) = 0;
  *(undefined1 *)(param_1 + 0x6b4) = 0;
  *(undefined1 *)(param_1 + 0x6b5) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  *(undefined4 *)(param_1 + 0x6bc) = 0;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  FUN_08893cec();
  *(undefined4 *)(param_1 + 0x718) = 0;
  *(undefined4 *)(param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0x720) = 0;
  *(undefined4 *)(param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  return;
}

