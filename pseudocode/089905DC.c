/* Entry 0x089905DC | file offset 0x0018D5B4 | FUN_089905dc | bytes 164 */

undefined4 FUN_089905dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x900),1,0);
  uVar2 = 0;
  iVar1 = DAT_089da420;
  if (*(int *)(DAT_089da420 + 0x8fc) != 0) {
    uVar2 = FUN_08992780(*(int *)(DAT_089da420 + 0x8fc),param_1,param_2,param_3);
    iVar1 = DAT_089da420;
    *(undefined1 *)(*(int *)(DAT_089da420 + 0x8fc) + 0x40) = 1;
  }
  sceKernelSignalSema(*(undefined4 *)(iVar1 + 0x900),1);
  return uVar2;
}

