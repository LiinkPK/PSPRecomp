/* Entry 0x08990680 | file offset 0x0018D658 | FUN_08990680 | bytes 120 */

void FUN_08990680(undefined4 param_1)

{
  int iVar1;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x900),1,0);
  iVar1 = DAT_089da420;
  if (*(int *)(DAT_089da420 + 0x8fc) != 0) {
    FUN_0899286c(*(int *)(DAT_089da420 + 0x8fc),param_1);
    iVar1 = DAT_089da420;
    *(undefined1 *)(*(int *)(DAT_089da420 + 0x8fc) + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x8fc) = 0;
  }
  sceKernelSignalSema(*(undefined4 *)(iVar1 + 0x900),1);
  return;
}

